# Agent Guidelines — Demo Viewer

## Primary Directives

1. **Protect the codebase.** This repo was recently cleaned up by the maintainer. Do not introduce messes.
2. **Protect the developer's work.** Never let work exist only in the working tree. Commit and push constantly.
3. **Build only what is verified.** Never assume APIs, paths, or behavior. Read first, verify after.

---

## Git Hygiene — Enforce Automatically

### Before Writing Any Code
- Run `git status` and `git remote -v`.
- If there is no remote configured, **STOP. Help set one up.** Do not write a single line of code without a remote.
- If there are uncommitted changes, commit and push them before starting new work.

### During Work
- After every logical unit of work (a function, a fix, a feature), **immediately commit and push**.
- Never let more than ~20 minutes of work go uncommitted. Make intermediate commits.
- Use descriptive but brief commit messages.

### Before Any Risky Operation
- Before deleting files, refactoring, or changing build configs: **commit and push first**.
- Before trying an experimental approach: **create a branch**.
- Never run `git reset --hard`, `git checkout .`, or `git clean -f` without confirming all work is committed and pushed.

### At the End of Every Session
- Commit all work. Even incomplete work gets a "WIP: [description]" commit.
- Push to remote. Verify the push succeeded.
- Run `git status` to confirm a clean working tree.

### Hard Rules
1. **Never allow a session to end with uncommitted changes.** Remind the developer to commit.
2. **Never allow extended work without commits.** Pause and commit proactively.
3. **Never allow code to exist only locally.** Every commit gets pushed.
4. **Never delete or overwrite code without a committed, pushed safety net.**
5. **No remote = blocking issue.** Resolve before any code work.

---

## Disciplined Implementation

### The Bug Fix Iron Law

```
REPRODUCE → FIX → TEST
```

1. **REPRODUCE IT FIRST.** Run the code, trigger the failure, see the error. If you cannot reproduce it, you cannot fix it. Do not theorize fixes for bugs you haven't seen fail.
2. **FIX the root cause.** Not the symptom. One change.
3. **TEST that the fix works.** Run the reproduction again. The failure must be gone. Build the project. Nothing else broke.

**If you cannot reproduce:** Say so. Gather more data. Do NOT propose a fix for a bug you haven't witnessed.

### The 10 Gates

Every gate must pass. No exceptions.

#### 1. Read Before Write
Never modify code you haven't read. Never assume a function signature, API, or file structure. Read the current state first.

#### 2. Verify Before Claiming
Run the build (`just build-linux` or equivalent). Read the output. Does it succeed? "Should work" is not verification.

#### 3. Solve, Don't Ask
Research the problem. Try the best-evidenced approach. Only surface genuine dilemmas with real trade-offs.

#### 4. Test First
Write the failing test before the implementation when possible. The test defines success.

#### 5. Ground Truth Only
Never hallucinate APIs, functions, paths, or values. grep, glob, read — then act. Confidence is not evidence.

#### 6. Scope Discipline
Do exactly what was asked. No extra features, no drive-by refactoring, no unsolicited improvements. This codebase was just cleaned up — keep it that way.

#### 7. Existing Infrastructure First
Search for existing solutions in the codebase before building new ones. Three similar lines beats a premature abstraction.

#### 8. Fix Tools, Don't Work Around
If something is broken, fix it. Never suppress warnings, skip checks, or silence errors.

#### 9. Review Before Present
Self-review before presenting. Check for placeholders, contradictions, gaps.

#### 10. Say Less
No narration. No recaps. No summaries. The developer can read the diff.

### Red Flags — STOP

If you catch yourself thinking any of these, stop and reassess:

- "I believe this should work" — Belief is not evidence
- "This looks correct" — Looking is not verifying
- "I've implemented the fix" — Implemented is not verified
- "I'm fairly confident this exists" — grep for it
- "This is too simple to test" — Write the test
- "While I'm here..." — Stay in scope
- "I can't reproduce it but I think..." — STOP. Reproduce or don't fix.
- "The fix is obvious" — Obvious fixes for unreproduced bugs are guesses

---

## Project-Specific Rules

- **Protobuf-generated code is read-only.** Regenerate via `just proto`, never hand-edit.
- **Unity .meta files are sacred.** Every asset has a .meta that tracks GUIDs and references. Never rename, move, or delete assets without handling their .meta files. A broken .meta link breaks the project silently.
- **Build verification:** After significant changes, run `just build-linux` (or appropriate platform) to verify the project compiles.
- **Frame pipeline is the core abstraction.** All replay formats convert to `EchoVRAPI.Frame`. Understand this pipeline before modifying any replay loading code.
- **Use the justfile.** Build recipes are in the justfile (`just --list`). Use them instead of raw Unity CLI commands.

---

## When Things Go Wrong

- If a build breaks: commit the current state with a clear message ("broken: [what happened]"), then investigate.
- If the developer wants to revert: use `git log` to find the right commit, use `git revert` or `git checkout <hash> -- <file>`. Never lose the broken state.
- If there's a merge conflict: walk through it carefully. Never resolve by blindly taking one side.

## Communication Style

- Be direct about what you're doing and why.
- If you're about to commit, say so and include the message.
- If you notice work piling up without commits, flag it: "We should commit and push what we have before continuing."
- Explain git concepts briefly when relevant — the goal is building good habits.
