using System;
using System.Collections.Generic;
using System.Linq;
using EchoVRAPI;
using Nevr.Engine.Http.V1;
using Nevr.Telemetry.Protobuf;
using Google.Protobuf.WellKnownTypes;

namespace NevrCap
{
    /// <summary>
    /// Converts protobuf LobbySessionStateFrame to EchoVRAPI.Frame
    /// </summary>
    public static class NevrCapFrameConverter
    {
        /// <summary>
        /// Converts a protobuf LobbySessionStateFrame to an EchoVRAPI.Frame
        /// </summary>
        public static Frame Convert(LobbySessionStateFrame protoFrame)
        {
            if (protoFrame == null)
            {
                UnityEngine.Debug.LogWarning("[NevrCap] Frame conversion skipped: protoFrame is null");
                return null;
            }

            var session = protoFrame.Session;
            if (session == null)
            {
                UnityEngine.Debug.LogWarning($"[NevrCap] Frame {protoFrame.FrameIndex} conversion skipped: Session is null");
                return null;
            }

            var frame = new Frame
            {
                frame_index = protoFrame.FrameIndex,
                recorded_time = TimestampToDateTime(protoFrame.Timestamp),

                // Session fields
                sessionid = session.SessionId,
                sessionip = session.SessionIp,
                game_status = session.GameStatus,
                game_clock = (float)session.GameClock,
                game_clock_display = session.GameClockDisplay,
                match_type = session.MatchType,
                map_name = session.MapName,
                private_match = session.PrivateMatch,
                tournament_match = session.TournamentMatch,

                // Scores
                blue_points = session.BluePoints,
                orange_points = session.OrangePoints,
                blue_round_score = session.BlueRoundScore,
                orange_round_score = session.OrangeRoundScore,
                total_round_count = session.TotalRoundCount,

                // Restart requests
                blue_team_restart_request = session.BlueTeamRestartRequest > 0,
                orange_team_restart_request = session.OrangeTeamRestartRequest > 0,

                // Possession (list of [team, player])
                possession = session.Possession.ToList(),

                // Disc
                disc = ConvertDisc(session.Disc),

                // Last score
                last_score = ConvertLastScore(session.LastScore),

                // Last throw
                last_throw = ConvertLastThrow(session.LastThrow),

                // Pause state
                pause = ConvertPause(session.Pause),

                // Player (VR camera position)
                player = ConvertVRPlayer(session.Player),

                // Client name
                client_name = session.ClientName,

                // Teams
                teams = ConvertTeams(session.Teams)
            };

            // Convert bones if available
            if (protoFrame.PlayerBones != null)
            {
                frame.bones = ConvertBones(protoFrame.PlayerBones);
            }

            // Label team colors
            if (frame.teams != null && frame.teams.Count >= 3)
            {
                frame.teams[0].color = EchoVRAPI.Team.TeamColor.blue;
                frame.teams[1].color = EchoVRAPI.Team.TeamColor.orange;
                frame.teams[2].color = EchoVRAPI.Team.TeamColor.spectator;

                // Set player team colors
                foreach (var echoTeam in frame.teams)
                {
                    foreach (var echoPlayer in echoTeam.players)
                    {
                        echoPlayer.team_color = echoTeam.color;
                    }
                }
            }

            return frame;
        }

        private static DateTime TimestampToDateTime(Timestamp timestamp)
        {
            if (timestamp == null)
                return DateTime.MinValue;

            return timestamp.ToDateTime();
        }

        private static EchoVRAPI.Disc ConvertDisc(Nevr.Engine.Http.V1.Disc protoDisc)
        {
            if (protoDisc == null)
                return EchoVRAPI.Disc.CreateEmpty();

            return new EchoVRAPI.Disc
            {
                position = protoDisc.Position.Select(d => (float)d).ToList(),
                forward = protoDisc.Forward.Select(d => (float)d).ToList(),
                left = protoDisc.Left.Select(d => (float)d).ToList(),
                up = protoDisc.Up.Select(d => (float)d).ToList(),
                velocity = protoDisc.Velocity.Select(d => (float)d).ToList(),
                bounce_count = protoDisc.BounceCount
            };
        }

        private static EchoVRAPI.LastScore ConvertLastScore(Nevr.Engine.Http.V1.LastScore protoLastScore)
        {
            if (protoLastScore == null)
                return new EchoVRAPI.LastScore();

            return new EchoVRAPI.LastScore
            {
                disc_speed = (float)protoLastScore.DiscSpeed,
                team = protoLastScore.Team,
                goal_type = protoLastScore.GoalType,
                point_amount = protoLastScore.PointAmount,
                distance_thrown = (float)protoLastScore.DistanceThrown,
                person_scored = protoLastScore.PersonScored,
                assist_scored = protoLastScore.AssistScored
            };
        }

        private static LastThrow ConvertLastThrow(LastThrowInfo protoLastThrow)
        {
            if (protoLastThrow == null)
                return new LastThrow();

            return new LastThrow
            {
                arm_speed = (float)protoLastThrow.ArmSpeed,
                total_speed = (float)protoLastThrow.TotalSpeed,
                off_axis_spin_deg = (float)protoLastThrow.OffAxisSpinDeg,
                wrist_throw_penalty = (float)protoLastThrow.WristThrowPenalty,
                rot_per_sec = (float)protoLastThrow.RotPerSec,
                pot_speed_from_rot = (float)protoLastThrow.PotSpeedFromRot,
                speed_from_arm = (float)protoLastThrow.SpeedFromArm,
                speed_from_movement = (float)protoLastThrow.SpeedFromMovement,
                speed_from_wrist = (float)protoLastThrow.SpeedFromWrist,
                wrist_align_to_throw_deg = (float)protoLastThrow.WristAlignToThrowDeg,
                throw_align_to_movement_deg = (float)protoLastThrow.ThrowAlignToMovementDeg,
                off_axis_penalty = (float)protoLastThrow.OffAxisPenalty,
                throw_move_penalty = (float)protoLastThrow.ThrowMovePenalty
            };
        }

        private static Pause ConvertPause(PauseState protoPause)
        {
            if (protoPause == null)
                return new Pause();

            return new Pause
            {
                paused_state = protoPause.PausedState,
                unpaused_team = protoPause.UnpausedTeam,
                paused_requested_team = protoPause.PausedRequestedTeam,
                unpaused_timer = (float)protoPause.UnpausedTimer,
                paused_timer = (float)protoPause.PausedTimer
            };
        }

        private static EchoVRAPI.VRPlayer ConvertVRPlayer(PlayerRoot protoPlayer)
        {
            if (protoPlayer == null)
                return EchoVRAPI.VRPlayer.CreateEmpty();

            return new EchoVRAPI.VRPlayer
            {
                vr_position = protoPlayer.VrPosition.Select(d => (float)d).ToList(),
                vr_forward = protoPlayer.VrForward.Select(d => (float)d).ToList(),
                vr_left = protoPlayer.VrLeft.Select(d => (float)d).ToList(),
                vr_up = protoPlayer.VrUp.Select(d => (float)d).ToList()
            };
        }

        private static List<EchoVRAPI.Team> ConvertTeams(Google.Protobuf.Collections.RepeatedField<Nevr.Engine.Http.V1.Team> protoTeams)
        {
            var teams = new List<EchoVRAPI.Team>();

            if (protoTeams == null || protoTeams.Count == 0)
            {
                // Return empty teams structure
                teams.Add(EchoVRAPI.Team.CreateEmpty(EchoVRAPI.Team.TeamColor.blue));
                teams.Add(EchoVRAPI.Team.CreateEmpty(EchoVRAPI.Team.TeamColor.orange));
                teams.Add(EchoVRAPI.Team.CreateEmpty(EchoVRAPI.Team.TeamColor.spectator));
                return teams;
            }

            foreach (var protoTeam in protoTeams)
            {
                teams.Add(ConvertTeam(protoTeam));
            }

            // Ensure we have at least 3 teams
            while (teams.Count < 3)
            {
                teams.Add(EchoVRAPI.Team.CreateEmpty());
            }

            return teams;
        }

        private static EchoVRAPI.Team ConvertTeam(Nevr.Engine.Http.V1.Team protoTeam)
        {
            if (protoTeam == null)
                return EchoVRAPI.Team.CreateEmpty();

            var team = new EchoVRAPI.Team
            {
                team = protoTeam.TeamName,
                possession = protoTeam.HasPossession,
                stats = ConvertTeamStats(protoTeam.Stats),
                players = new List<Player>()
            };

            if (protoTeam.Players != null)
            {
                foreach (var protoPlayer in protoTeam.Players)
                {
                    team.players.Add(ConvertPlayer(protoPlayer));
                }
            }

            return team;
        }

        private static Stats ConvertTeamStats(TeamStats protoStats)
        {
            if (protoStats == null)
                return new Stats();

            return new Stats
            {
                possession_time = (float)protoStats.PossessionTime,
                points = protoStats.Points,
                saves = protoStats.Saves,
                goals = protoStats.Goals,
                stuns = protoStats.Stuns,
                passes = protoStats.Passes,
                catches = protoStats.Catches,
                steals = protoStats.Steals,
                blocks = protoStats.Blocks,
                interceptions = protoStats.Interceptions,
                assists = protoStats.Assists,
                shots_taken = protoStats.ShotsTaken
            };
        }

        private static Player ConvertPlayer(TeamMember protoPlayer)
        {
            if (protoPlayer == null)
                return Player.CreateEmpty();

            return new Player
            {
                userid = (long)protoPlayer.AccountNumber,
                name = protoPlayer.DisplayName,
                playerid = protoPlayer.SlotNumber,
                number = protoPlayer.JerseyNumber,
                level = protoPlayer.Level,
                ping = protoPlayer.Ping,
                packetlossratio = (float)protoPlayer.PacketLossRatio,
                stunned = protoPlayer.IsStunned,
                invulnerable = protoPlayer.IsInvulnerable,
                holding_left = protoPlayer.LeftHoldingOnto,
                holding_right = protoPlayer.RightHoldingOnto,
                blocking = protoPlayer.IsBlocking,
                is_emote_playing = protoPlayer.IsEmotePlaying,
                possession = protoPlayer.HasPossession,
                Weapon = protoPlayer.Weapon,
                Ordnance = protoPlayer.Ordnance,
                TacMod = protoPlayer.TacMod,
                head = ConvertBodyPart(protoPlayer.Head),
                body = ConvertBodyPart(protoPlayer.Body),
                lhand = ConvertHandPart(protoPlayer.LeftHand),
                rhand = ConvertHandPart(protoPlayer.RightHand),
                velocity = protoPlayer.Velocity.Select(d => (float)d).ToList(),
                stats = ConvertPlayerStats(protoPlayer.Stats)
            };
        }

        private static EchoVRAPI.Transform ConvertBodyPart(BodyPart protoPart)
        {
            if (protoPart == null)
                return new EchoVRAPI.Transform
                {
                    position = new List<float> { 0, 0, 0 },
                    forward = new List<float> { 0, 0, 1 },
                    left = new List<float> { 1, 0, 0 },
                    up = new List<float> { 0, 1, 0 }
                };

            return new EchoVRAPI.Transform
            {
                position = protoPart.Position.Select(d => (float)d).ToList(),
                forward = protoPart.Forward.Select(d => (float)d).ToList(),
                left = protoPart.Left.Select(d => (float)d).ToList(),
                up = protoPart.Up.Select(d => (float)d).ToList()
            };
        }

        private static EchoVRAPI.Transform ConvertHandPart(HandPart protoPart)
        {
            if (protoPart == null)
                return new EchoVRAPI.Transform
                {
                    pos = new List<float> { 0, 0, 0 },
                    forward = new List<float> { 0, 0, 1 },
                    left = new List<float> { 1, 0, 0 },
                    up = new List<float> { 0, 1, 0 }
                };

            return new EchoVRAPI.Transform
            {
                pos = protoPart.Pos.Select(d => (float)d).ToList(),
                forward = protoPart.Forward.Select(d => (float)d).ToList(),
                left = protoPart.Left.Select(d => (float)d).ToList(),
                up = protoPart.Up.Select(d => (float)d).ToList()
            };
        }

        private static Stats ConvertPlayerStats(PlayerStats protoStats)
        {
            if (protoStats == null)
                return new Stats();

            return new Stats
            {
                possession_time = (float)protoStats.PossessionTime,
                points = protoStats.Points,
                saves = protoStats.Saves,
                goals = protoStats.Goals,
                stuns = protoStats.Stuns,
                passes = protoStats.Passes,
                catches = protoStats.Catches,
                steals = protoStats.Steals,
                blocks = protoStats.Blocks,
                interceptions = protoStats.Interceptions,
                assists = protoStats.Assists,
                shots_taken = protoStats.ShotsTaken
            };
        }

        private static Bones ConvertBones(PlayerBonesResponse protoBones)
        {
            if (protoBones == null || protoBones.UserBones == null || protoBones.UserBones.Count == 0)
                return null;

            var bones = new Bones
            {
                error_code = protoBones.ErrCode,
                user_bones = new BonePlayer[protoBones.UserBones.Count]
            };

            for (int i = 0; i < protoBones.UserBones.Count; i++)
            {
                var protoBonePlayer = protoBones.UserBones[i];
                bones.user_bones[i] = new BonePlayer
                {
                    bone_o = protoBonePlayer.BoneO.Select(d => (float)d).ToArray(),
                    bone_t = protoBonePlayer.BoneT.Select(d => (float)d).ToArray()
                };
            }

            return bones;
        }
    }
}
