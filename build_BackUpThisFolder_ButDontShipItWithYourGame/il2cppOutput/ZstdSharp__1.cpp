#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66;
struct Decompressor_tD5B8F289D15B325087615896699694454B25ED8F;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EmbeddedAttribute_t4AD8808DB460AA96FC8941021F08CA93FE4A88A3;
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
struct Exception_t;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IsUnmanagedAttribute_t42EC11EF01CA5D066C3F0C7898B63FD0AC6AAC27;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NativeIntegerAttribute_t67D4B65865505089F4F79BFD064B59504EBF8BD2;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct SkipLocalsInitAttribute_tC789F2CD3DA3EC9BC3C0CF26AF2F8464C3706C36;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D;
struct ZSTD_DDictHashSet_t9F76D20448D6AF7394C9ED8A0C35FDFB2DC87A6F;
struct ZSTD_DDict_s_tD1E2EC7606520D9ED737F276D9FC85242F80B1F3;
struct ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87;
struct ZSTD_entropyCTables_t_t33A218D5FF7CE0C97EF7E61D975FC9D92A36FA78;
struct ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA;
struct ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194;
struct ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315;
struct ZSTD_optimal_t_t97645D623275F367E35FED5731866D0332DF3415;
struct ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B;
struct ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1;
struct rawSeq_tA340213B43F955E1913AD36E0F35C2F3D12AAE02;
struct rawSeqStore_t_tD74D85B0204BCC997639F5FCF10C6B55FFC3BE6B;
struct seqDef_s_t65214A2D55070557AC056241E873CAF55B271257;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decompressor_tD5B8F289D15B325087615896699694454B25ED8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tE8ADCDD5E555782EA16B0D83850F0F640D48C848____3BF63951626584EB1653F9B8DBB590A5EE1EAE1135A904B9317C3773896DF076_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tE8ADCDD5E555782EA16B0D83850F0F640D48C848____4BCD43D478B9229AB7A13406353712C7944B60348C36B4D0E6B789D10F697652_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral65FF4FAD1F15BBF8D6F3492DA2EB0527907358F2;
IL2CPP_EXTERN_C String_t* _stringLiteral8805F3D3C146BF682A73B1A3ED1C4294C8C98E58;
IL2CPP_EXTERN_C String_t* _stringLiteral8D5F51C341264B91EFC88E49B7FF6B69E238B25A;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12;
IL2CPP_EXTERN_C String_t* _stringLiteralDEDCF37206A03E4CE4438C517B164F328C678509;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m755841EBC940E8ACABE0248C0B2806C89ACD0E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m2FC58AE60948818D3134F32B502343786ED320E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_EnsureNotDisposed_m82536AB7CA15A930030FED19989075C4F6FD902B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_Flush_m5B1E5F188036E7AEF342522C089B30C04B4265C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_Read_mD980BDD1001EB912C0F4EFA6631B1E856C650627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_Seek_m345781B91F94952A1CA52ADA99A17E0EF92C43C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_SetLength_m4A941A697DBFDE3558B3535B1D4CA221CA8E1408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_Write_m63C7B9A0BF5B53554E3AB0F25046F3B032990A26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream__ctor_m010B775356FE26A3B9F8A1B2A6E7FB2B8A31E2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_get_Length_mA7E384893E061FE9566298642207CFDC2D862363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_get_Position_m5991AD9E11CED4860A70F82609EB7B4A65CB624E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_set_Position_m6F39E87A28B8A4F2A1F035A224D5C6F681EE21B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decompressor__ctor_mA53C7276B2E2376FA75C1C3F60D6918170FF5AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowException_mC30FF384648BDD8FCD6C4251684B517C2F99D268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadAsyncU3Ed__20_MoveNext_m26873545E3D9D13D5921843237211531BC0559D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeHelper_GetArrayPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF8E70FC0E4E1F7746BD18EC98F55B1D93F53FFF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t3B4E3713158FC7DBB791E6A9CA77176BF65F271A 
{
};
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07  : public RuntimeObject
{
};
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};
struct U3CPrivateImplementationDetailsU3E_tE8ADCDD5E555782EA16B0D83850F0F640D48C848  : public RuntimeObject
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24  : public RuntimeObject
{
};
struct Decompressor_tD5B8F289D15B325087615896699694454B25ED8F  : public RuntimeObject
{
	ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D* ___dctx;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct ThrowHelper_tCCBA04E1E28DC065FD82A83401B7FDAAEF982DDE  : public RuntimeObject
{
};
struct UnsafeHelper_t3BA876118ED5E8C45D8522E91DCF63C69B718CEF  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 
{
	RuntimeObject* ____obj;
	int32_t ____result;
	int16_t ____token;
	bool ____continueOnCapturedContext;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	RuntimeObject* ___m_stateMachine;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DTableDesc_tFD8C83D4F186B2B2BCA9DBFF05555A0E1B4B26AE 
{
	uint8_t ___maxTableLog;
	uint8_t ___tableType;
	uint8_t ___tableLog;
	uint8_t ___reserved;
};
struct EmbeddedAttribute_t4AD8808DB460AA96FC8941021F08CA93FE4A88A3  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FASTCOVER_accel_t_t27A703CC1BA9FD6ED9F2ACF714EE2FB4E6FA4ABD 
{
	uint32_t ___finalize;
	uint32_t ___skip;
};
struct FSE_DTableHeader_tF4F667F4E24C71A50FA498AAE75C2A4526B85867 
{
	uint16_t ___tableLog;
	uint16_t ___fastMode;
};
struct FSE_decode_t_t4F2A435C65C0F8010A2C639B86E52D2DF562E035 
{
	uint16_t ___newState;
	uint8_t ___symbol;
	uint8_t ___nbBits;
};
struct FSE_symbolCompressionTransform_tFF9777EDB20A0EE4F642453D9FABDB45D5B58181 
{
	int32_t ___deltaFindState;
	uint32_t ___deltaNbBits;
};
struct HUF_DEltX1_t1BBF110CC1E3DB33379BF4AB37F886461F321049 
{
	uint8_t ___nbBits;
	uint8_t ___byte;
};
struct HUF_DEltX2_t0F95FFEAEC9CF92C715305788DC54458D30F84DA 
{
	uint16_t ___sequence;
	uint8_t ___nbBits;
	uint8_t ___length;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct IsUnmanagedAttribute_t42EC11EF01CA5D066C3F0C7898B63FD0AC6AAC27  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct NativeIntegerAttribute_t67D4B65865505089F4F79BFD064B59504EBF8BD2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___TransformFlags;
};
struct SkipLocalsInitAttribute_tC789F2CD3DA3EC9BC3C0CF26AF2F8464C3706C36  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct ZSTD_OffsetInfo_tC9C8F35B4EE38AD3B6A484FC26A76BDA0B13DB48 
{
	uint32_t ___longOffsetShare;
	uint32_t ___maxNbAdditionalBits;
};
struct ZSTD_customMem_t39C80B0D96D2ED78A882EA71088AE7517DFC7BC6 
{
	void* ___customAlloc;
	void* ___customFree;
	void* ___opaque;
};
struct ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315 
{
	uint32_t ___off;
	uint32_t ___len;
};
struct ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B 
{
	uint16_t ___nextState;
	uint8_t ___nbAdditionalBits;
	uint8_t ___nbBits;
	uint32_t ___baseValue;
};
struct ZSTD_seqSymbol_header_tCBDD4E8557C3A30B20B8D7EE7D51ADF4CD806F8E 
{
	uint32_t ___fastMode;
	uint32_t ___tableLog;
};
struct ZSTD_window_t_tA9D994C005704AFBA9A1C4CC0ECB0DCF5F922DCF 
{
	uint8_t* ___nextSrc;
	uint8_t* ___base;
	uint8_t* ___dictBase;
	uint32_t ___dictLimit;
	uint32_t ___lowLimit;
	uint32_t ___nbOverflowCorrections;
};
struct algo_time_t_tA71FCBF3E097CDAD66262D9628EB1985670362C4 
{
	uint32_t ___tableTime;
	uint32_t ___decode256Time;
};
struct rawSeq_tA340213B43F955E1913AD36E0F35C2F3D12AAE02 
{
	uint32_t ___offset;
	uint32_t ___litLength;
	uint32_t ___matchLength;
};
struct seqDef_s_t65214A2D55070557AC056241E873CAF55B271257 
{
	uint32_t ___offBase;
	uint16_t ___litLength;
	uint16_t ___mlBase;
};
struct sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD 
{
	uint8_t ___symbol;
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1024_tBBD8B7AD8F53668DE714D8B86B621358F7D216A3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tBBD8B7AD8F53668DE714D8B86B621358F7D216A3__padding[1024];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D106_tA91B01C9A7FD1041A8DF87BE1EEC55A5F62DF58B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D106_tA91B01C9A7FD1041A8DF87BE1EEC55A5F62DF58B__padding[106];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_tE79B0D8EEDC3A64891CA5FB0BDA1A5BBE3F90572 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tE79B0D8EEDC3A64891CA5FB0BDA1A5BBE3F90572__padding[12];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_t4B01E8309D7C15F8F467751D612CA6ACF9E0056F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t4B01E8309D7C15F8F467751D612CA6ACF9E0056F__padding[128];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D144_t5E6D9C8C4474708B853F0451BCF7E79BE4522215 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_t5E6D9C8C4474708B853F0451BCF7E79BE4522215__padding[144];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2048_tC865B7BB3E33389521510C4F44EC3934900BC48E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_tC865B7BB3E33389521510C4F44EC3934900BC48E__padding[2048];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D212_tF53FDE4DCCAC190CD6AA3B1E239974A67DA70F82 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D212_tF53FDE4DCCAC190CD6AA3B1E239974A67DA70F82__padding[212];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t0A171CCC40E895FF482519F22C6D6AC9006811C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t0A171CCC40E895FF482519F22C6D6AC9006811C2__padding[32];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_t1C67799375E5141797ECCA0A7E511DF5A22A5D6D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t1C67799375E5141797ECCA0A7E511DF5A22A5D6D__padding[36];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D53_t6113DCE0677CB96E5A6F46A6A832D7743BC0B697 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D53_t6113DCE0677CB96E5A6F46A6A832D7743BC0B697__padding[53];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D58_t4BFC8E25229BDA4B9B08BD63FAED2A86675E3672 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D58_t4BFC8E25229BDA4B9B08BD63FAED2A86675E3672__padding[58];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t6B27B5577AD90B09BABDD5685A4D38B3F2909C7F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t6B27B5577AD90B09BABDD5685A4D38B3F2909C7F__padding[64];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D72_tC32A03CF686EF08522698CE3A370BAC062CD320B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_tC32A03CF686EF08522698CE3A370BAC062CD320B__padding[72];
	};
};
#pragma pack(pop, tp)
struct U3CncountU3Ee__FixedBuffer_t64C10FD4D37D8A00AA73786FCC71A0D108234083 
{
	union
	{
		struct
		{
			int16_t ___FixedElementField;
		};
		uint8_t U3CncountU3Ee__FixedBuffer_t64C10FD4D37D8A00AA73786FCC71A0D108234083__padding[512];
	};
};
struct U3CunusedU3Ee__FixedBuffer_t794B3C3F2DB8B6904AAA0A6019CD7CB9C90DF216 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CunusedU3Ee__FixedBuffer_t794B3C3F2DB8B6904AAA0A6019CD7CB9C90DF216__padding[6];
	};
};
struct U3CbitsU3Ee__FixedBuffer_t7C1CD5F529C3B248FE3870B8579F46F26DC3FC6B 
{
	union
	{
		struct
		{
			uint64_t ___FixedElementField;
		};
		uint8_t U3CbitsU3Ee__FixedBuffer_t7C1CD5F529C3B248FE3870B8579F46F26DC3FC6B__padding[32];
	};
};
struct _iend_e__FixedBuffer_t27C9DF785CB9F554A6713EF60E4AC00A78CEB7C4 
{
	uint8_t* ___e0;
	uint8_t* ___e1;
	uint8_t* ___e2;
	uint8_t* ___e3;
};
struct _ip_e__FixedBuffer_t52CE3DCF8A6201D76CE69C655FE65448B05C19B8 
{
	uint8_t* ___e0;
	uint8_t* ___e1;
	uint8_t* ___e2;
	uint8_t* ___e3;
};
struct _op_e__FixedBuffer_t007844F2A7E21C8ACEE138D66F53255D67C34980 
{
	uint8_t* ___e0;
	uint8_t* ___e1;
	uint8_t* ___e2;
	uint8_t* ___e3;
};
struct U3ChuffWeightU3Ee__FixedBuffer_t6D4B9DE1D044965B0B1BA5EFE689050CD8C55359 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3ChuffWeightU3Ee__FixedBuffer_t6D4B9DE1D044965B0B1BA5EFE689050CD8C55359__padding[256];
	};
};
struct U3CrankStartU3Ee__FixedBuffer_t622DFC6DA007270A10E7608AE80095D965E920A0 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CrankStartU3Ee__FixedBuffer_t622DFC6DA007270A10E7608AE80095D965E920A0__padding[52];
	};
};
struct U3CrankValU3Ee__FixedBuffer_t27187A2BA3E7C809E9B4B0B9172AD0AE9FCD7EB4 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CrankValU3Ee__FixedBuffer_t27187A2BA3E7C809E9B4B0B9172AD0AE9FCD7EB4__padding[52];
	};
};
struct U3CstatsWkspU3Ee__FixedBuffer_t36F7F224EDC88BEC5BA720852EC0CB0CEFD3209D 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CstatsWkspU3Ee__FixedBuffer_t36F7F224EDC88BEC5BA720852EC0CB0CEFD3209D__padding[876];
	};
};
struct U3CsymbolsU3Ee__FixedBuffer_t0035B2FD02F1A9C7867918DBB748CE578220886C 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CsymbolsU3Ee__FixedBuffer_t0035B2FD02F1A9C7867918DBB748CE578220886C__padding[256];
	};
};
struct U3CcalleeWkspU3Ee__FixedBuffer_tDD6B21301F6EE69750D61525AB95EE6150EC90CD 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CcalleeWkspU3Ee__FixedBuffer_tDD6B21301F6EE69750D61525AB95EE6150EC90CD__padding[876];
	};
};
struct U3CrankStart0U3Ee__FixedBuffer_tE8B4CEBB96C3B8D70F1CA16F4EAAC479B0B0CD3F 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CrankStart0U3Ee__FixedBuffer_tE8B4CEBB96C3B8D70F1CA16F4EAAC479B0B0CD3F__padding[60];
	};
};
struct U3CrankStatsU3Ee__FixedBuffer_tFD35AE29350706E24BD70D1A212C14FD360469C7 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CrankStatsU3Ee__FixedBuffer_tFD35AE29350706E24BD70D1A212C14FD360469C7__padding[52];
	};
};
struct U3CweightListU3Ee__FixedBuffer_t238BD26D03ED7967AD36F116171D4E7E80E51868 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CweightListU3Ee__FixedBuffer_t238BD26D03ED7967AD36F116171D4E7E80E51868__padding[256];
	};
};
struct U3Cmem64U3Ee__FixedBuffer_t6803237B604C30F2137C1BBAC3A1B3FA02E8B4F1 
{
	union
	{
		struct
		{
			uint64_t ___FixedElementField;
		};
		uint8_t U3Cmem64U3Ee__FixedBuffer_t6803237B604C30F2137C1BBAC3A1B3FA02E8B4F1__padding[32];
	};
};
struct U3CvU3Ee__FixedBuffer_t9FD6D483741C3464F95AC512834C90364C4374AF 
{
	union
	{
		struct
		{
			uint64_t ___FixedElementField;
		};
		uint8_t U3CvU3Ee__FixedBuffer_t9FD6D483741C3464F95AC512834C90364C4374AF__padding[32];
	};
};
struct U3CheaderBufferU3Ee__FixedBuffer_tD170365BA1E099CF86989E85760F525886080D13 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CheaderBufferU3Ee__FixedBuffer_tD170365BA1E099CF86989E85760F525886080D13__padding[18];
	};
};
struct U3ClitExtraBufferU3Ee__FixedBuffer_t74481051BD19C610049DCBE1F6344B93D20BE23C 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3ClitExtraBufferU3Ee__FixedBuffer_t74481051BD19C610049DCBE1F6344B93D20BE23C__padding[65568];
	};
};
struct U3CworkspaceU3Ee__FixedBuffer_t065EE13260C89EA1BEA5E852875B40E9113F0D92 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CworkspaceU3Ee__FixedBuffer_t065EE13260C89EA1BEA5E852875B40E9113F0D92__padding[2560];
	};
};
struct U3ChufTableU3Ee__FixedBuffer_tC7CCFCA7245CAD4DB14388EBF005767BDFDA82B5 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3ChufTableU3Ee__FixedBuffer_tC7CCFCA7245CAD4DB14388EBF005767BDFDA82B5__padding[16388];
	};
};
struct U3CrepU3Ee__FixedBuffer_t91F4346909CB04C6F5B0DE5F5653A3DFB49F4BA7 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CrepU3Ee__FixedBuffer_t91F4346909CB04C6F5B0DE5F5653A3DFB49F4BA7__padding[12];
	};
};
struct U3CworkspaceU3Ee__FixedBuffer_tD28D8976CCC689E93A52340A3361CCED76D04605 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CworkspaceU3Ee__FixedBuffer_tD28D8976CCC689E93A52340A3361CCED76D04605__padding[628];
	};
};
struct U3ClitlengthCTableU3Ee__FixedBuffer_tB101C74C0EC0E19857673749116CFAA2B44C3004 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3ClitlengthCTableU3Ee__FixedBuffer_tB101C74C0EC0E19857673749116CFAA2B44C3004__padding[1316];
	};
};
struct U3CmatchlengthCTableU3Ee__FixedBuffer_tADCFAB92E4EF203CC23BFDBE0BA563E7680B0068 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CmatchlengthCTableU3Ee__FixedBuffer_tADCFAB92E4EF203CC23BFDBE0BA563E7680B0068__padding[1452];
	};
};
struct U3CoffcodeCTableU3Ee__FixedBuffer_tEED8AA5722B94BF2DE9CEAA0EAEA8104F4CCB295 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CoffcodeCTableU3Ee__FixedBuffer_tEED8AA5722B94BF2DE9CEAA0EAEA8104F4CCB295__padding[772];
	};
};
struct U3ChashCacheU3Ee__FixedBuffer_t95283D4BE63543C33924D93B5EBB077C8ED74923 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3ChashCacheU3Ee__FixedBuffer_t95283D4BE63543C33924D93B5EBB077C8ED74923__padding[32];
	};
};
struct U3CrepU3Ee__FixedBuffer_tD3C17ABBC0E5511E7F26FDF572990D2C90DA7A2F 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CrepU3Ee__FixedBuffer_tD3C17ABBC0E5511E7F26FDF572990D2C90DA7A2F__padding[12];
	};
};
struct U3CBodyU3Ee__FixedBuffer_t573AFBF0FCC60282453F08CF2FEBB7C674FC9EEF 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CBodyU3Ee__FixedBuffer_t573AFBF0FCC60282453F08CF2FEBB7C674FC9EEF__padding[52];
	};
};
struct U3CrepU3Ee__FixedBuffer_t66A3123530BA346961E0348975D6C528F0FE8470 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CrepU3Ee__FixedBuffer_t66A3123530BA346961E0348975D6C528F0FE8470__padding[12];
	};
};
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A 
{
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ___m_configuredTaskAwaiter;
};
struct BIT_DStream_status_tC79CBE8C32BC6F8D5787EBD1A0AC7D17D41952DB 
{
	int32_t ___value__;
};
struct BIT_DStream_t_tEE09F97CFD294B0042C27043645EF090F85D68D6 
{
	uintptr_t ___bitContainer;
	uint32_t ___bitsConsumed;
	int8_t* ___ptr;
	int8_t* ___start;
	int8_t* ___limitPtr;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FSE_CState_t_t30996CC8CA011C12A9BB05572E18657B8C193379 
{
	intptr_t ___value;
	void* ___stateTable;
	void* ___symbolTT;
	uint32_t ___stateLog;
};
struct FSE_DState_t_tAE872DA042E0F589C30899AAD0A57BCEAE0A8A64 
{
	uintptr_t ___state;
	void* ___table;
};
struct FSE_DecompressWksp_t0CF489A55FA31B4D5AB5E4833EE7D711E505867A 
{
	U3CncountU3Ee__FixedBuffer_t64C10FD4D37D8A00AA73786FCC71A0D108234083 ___ncount;
};
struct FSE_repeat_t06FFCED28D4BDB111A1571AE2230B4D962E0D669 
{
	int32_t ___value__;
};
struct HUF_CTableHeader_tF0988A6289AB6CFE7D4B0E639D85521A95946E6C 
{
	uint8_t ___tableLog;
	uint8_t ___maxSymbolValue;
	U3CunusedU3Ee__FixedBuffer_t794B3C3F2DB8B6904AAA0A6019CD7CB9C90DF216 ___unused;
};
struct HUF_DecompressFastArgs_t69D5C2FED65EFC6AE4213C6B1CDCBA0DFDF10DD7 
{
	_ip_e__FixedBuffer_t52CE3DCF8A6201D76CE69C655FE65448B05C19B8 ___ip;
	_op_e__FixedBuffer_t007844F2A7E21C8ACEE138D66F53255D67C34980 ___op;
	U3CbitsU3Ee__FixedBuffer_t7C1CD5F529C3B248FE3870B8579F46F26DC3FC6B ___bits;
	void* ___dt;
	uint8_t* ___ilowest;
	uint8_t* ___oend;
	_iend_e__FixedBuffer_t27C9DF785CB9F554A6713EF60E4AC00A78CEB7C4 ___iend;
};
struct HUF_ReadDTableX1_Workspace_t0BBC23A456642B0BE3747BF778F6B1C85B215DB4 
{
	U3CrankValU3Ee__FixedBuffer_t27187A2BA3E7C809E9B4B0B9172AD0AE9FCD7EB4 ___rankVal;
	U3CrankStartU3Ee__FixedBuffer_t622DFC6DA007270A10E7608AE80095D965E920A0 ___rankStart;
	U3CstatsWkspU3Ee__FixedBuffer_t36F7F224EDC88BEC5BA720852EC0CB0CEFD3209D ___statsWksp;
	U3CsymbolsU3Ee__FixedBuffer_t0035B2FD02F1A9C7867918DBB748CE578220886C ___symbols;
	U3ChuffWeightU3Ee__FixedBuffer_t6D4B9DE1D044965B0B1BA5EFE689050CD8C55359 ___huffWeight;
};
struct HUF_repeat_t024F16FBD82025338FF68B6532DDE65A658546F6 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000 
{
	int32_t ___value__;
};
struct XXH64_state_s_tC9DE74FF89D57C7DE6794058A21AC01DCFB18D93 
{
	uint64_t ___total_len;
	U3CvU3Ee__FixedBuffer_t9FD6D483741C3464F95AC512834C90364C4374AF ___v;
	U3Cmem64U3Ee__FixedBuffer_t6803237B604C30F2137C1BBAC3A1B3FA02E8B4F1 ___mem64;
	uint32_t ___memsize;
	uint32_t ___reserved32;
	uint64_t ___reserved64;
};
struct XXH_alignment_tD78AACF3E38BBDF36AB536F0F3A922DB35B18138 
{
	int32_t ___value__;
};
struct XXH_errorcode_tB6D26E3C6A761E8BD09580E1FC97F4AB8DCD4CE9 
{
	int32_t ___value__;
};
struct ZSTD_DDictHashSet_t9F76D20448D6AF7394C9ED8A0C35FDFB2DC87A6F 
{
	ZSTD_DDict_s_tD1E2EC7606520D9ED737F276D9FC85242F80B1F3** ___ddictPtrTable;
	uintptr_t ___ddictPtrTableSize;
	uintptr_t ___ddictPtrCount;
};
struct ZSTD_ErrorCode_tAB7849056C783CE244A687CEB235AD2776FD1087 
{
	int32_t ___value__;
};
struct ZSTD_OptPrice_e_t6F5EDA344F198342A6C9F657407AB1EA837727BE 
{
	int32_t ___value__;
};
struct ZSTD_bufferMode_e_tCFF81C1D74130883A65F1EE8B163C220A7F3DB18 
{
	int32_t ___value__;
};
struct ZSTD_dStage_t2586C210E766C04DDE263044CD1DF6DEF9B2B37F 
{
	int32_t ___value__;
};
struct ZSTD_dStreamStage_tF15D4DC03734B216DF14CD0C3C5226CF2C38FBD4 
{
	int32_t ___value__;
};
struct ZSTD_dictMode_e_tD4D1F74A23DA2EB490ED825BAB6A44CC5F31D6C9 
{
	int32_t ___value__;
};
struct ZSTD_dictUses_e_t88135F69E93DA62FDEF76C293BB3F125CB2AF5CD 
{
	int32_t ___value__;
};
struct ZSTD_forceIgnoreChecksum_e_t96298B7C01011F813B6164702C47F3289BEFA053 
{
	int32_t ___value__;
};
struct ZSTD_format_e_t7211D90437D0297544A558EC90E85FE8E967B599 
{
	int32_t ___value__;
};
struct ZSTD_frameSizeInfo_t5F972024C3432AEA1BB81159C30E94274B3DE61E 
{
	uintptr_t ___nbBlocks;
	uintptr_t ___compressedSize;
	uint64_t ___decompressedBound;
};
struct ZSTD_frameType_e_tB65D426DAAC8C030B676509737F9D2717A3AC3C2 
{
	int32_t ___value__;
};
struct ZSTD_fseState_tEE5F57D46FE10AEFA5756740FB41A79A40E0B8FB 
{
	uintptr_t ___state;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B* ___table;
};
struct ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0 
{
	void* ___src;
	uintptr_t ___size;
	uintptr_t ___pos;
};
struct ZSTD_litLocation_e_tD294E76D5A2897DD2CEF05B630C275562271C447 
{
	int32_t ___value__;
};
struct ZSTD_longLengthType_e_tA85F1A39B279F9F29DB8B3D7495F657CE43586A8 
{
	int32_t ___value__;
};
struct ZSTD_longOffset_e_tEA4BD03CC398E6B0518B9610EDC6906880EA8926 
{
	int32_t ___value__;
};
struct ZSTD_nextInputType_e_t5CCD0A0C6E996D055AE5948B903685D59DC359C1 
{
	int32_t ___value__;
};
struct ZSTD_optimal_t_t97645D623275F367E35FED5731866D0332DF3415 
{
	int32_t ___price;
	uint32_t ___off;
	uint32_t ___mlen;
	uint32_t ___litlen;
	U3CrepU3Ee__FixedBuffer_tD3C17ABBC0E5511E7F26FDF572990D2C90DA7A2F ___rep;
};
struct ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 
{
	void* ___dst;
	uintptr_t ___size;
	uintptr_t ___pos;
};
struct ZSTD_overlap_e_tD51258D66F513AC4115526BDEBAAA81F9059FDEC 
{
	int32_t ___value__;
};
struct ZSTD_paramSwitch_e_tDB43D3026D9E3599698B066287D07BB038E5B372 
{
	int32_t ___value__;
};
struct ZSTD_refMultipleDDicts_e_t4BCAA20D460EE3D487FEB3AD55C99B3C0879EF31 
{
	int32_t ___value__;
};
struct ZSTD_strategy_t970A154A45A4F0131B2A74CF7B5D1F27F1D9F477 
{
	int32_t ___value__;
};
struct base_directive_e_t69B47E33EAD7DDA821AD4CC1F96DA0123C8C9F33 
{
	int32_t ___value__;
};
struct blockType_e_t8BB280034F94DEB6AE844C9C7412A93D425224EC 
{
	int32_t ___value__;
};
struct buffer_s_t54EBBFFA9598D43B559A84B057AD0BF664CE07BA 
{
	void* ___start;
	uintptr_t ___capacity;
};
struct range_t_t4B0B895F0D41EA59A669D782E6F37D2E41498B5A 
{
	void* ___start;
	uintptr_t ___size;
};
struct rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 
{
	U3CBodyU3Ee__FixedBuffer_t573AFBF0FCC60282453F08CF2FEBB7C674FC9EEF ___Body;
};
struct rawSeqStore_t_tD74D85B0204BCC997639F5FCF10C6B55FFC3BE6B 
{
	rawSeq_tA340213B43F955E1913AD36E0F35C2F3D12AAE02* ___seq;
	uintptr_t ___pos;
	uintptr_t ___posInSequence;
	uintptr_t ___size;
	uintptr_t ___capacity;
};
struct repcodes_s_tC955394754316CD41B3BFCB0C4ABC78727FCFB3F 
{
	U3CrepU3Ee__FixedBuffer_t66A3123530BA346961E0348975D6C528F0FE8470 ___rep;
};
struct roundBuff_t_t96B695500C6B1E53CF98E32227CDAD8DC922E15F 
{
	uint8_t* ___buffer;
	uintptr_t ___capacity;
	uintptr_t ___pos;
};
struct searchMethod_e_tB37B3EE9562976DC31977E8E558D1C1A664961A3 
{
	int32_t ___value__;
};
struct seq_t_t427312376180E762F56E86ABBE7D99EE0A46D325 
{
	uintptr_t ___litLength;
	uintptr_t ___matchLength;
	uintptr_t ___offset;
};
struct streaming_operation_tB7C479BE9BF7BA4FB193EF25A80E129AA729768D 
{
	int32_t ___value__;
};
struct symbolEncodingType_e_tF70519757F82C7D746C8AE23AEBE05CDEF749601 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct _sortedSymbol_e__FixedBuffer_tAC607CD82D79E926540C74C9EC3262ED593EB204 
{
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e0;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e1;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e2;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e3;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e4;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e5;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e6;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e7;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e8;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e9;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e10;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e11;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e12;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e13;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e14;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e15;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e16;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e17;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e18;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e19;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e20;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e21;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e22;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e23;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e24;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e25;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e26;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e27;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e28;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e29;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e30;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e31;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e32;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e33;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e34;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e35;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e36;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e37;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e38;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e39;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e40;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e41;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e42;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e43;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e44;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e45;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e46;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e47;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e48;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e49;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e50;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e51;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e52;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e53;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e54;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e55;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e56;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e57;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e58;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e59;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e60;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e61;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e62;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e63;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e64;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e65;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e66;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e67;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e68;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e69;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e70;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e71;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e72;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e73;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e74;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e75;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e76;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e77;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e78;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e79;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e80;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e81;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e82;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e83;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e84;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e85;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e86;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e87;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e88;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e89;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e90;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e91;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e92;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e93;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e94;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e95;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e96;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e97;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e98;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e99;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e100;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e101;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e102;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e103;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e104;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e105;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e106;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e107;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e108;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e109;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e110;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e111;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e112;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e113;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e114;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e115;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e116;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e117;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e118;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e119;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e120;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e121;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e122;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e123;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e124;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e125;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e126;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e127;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e128;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e129;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e130;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e131;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e132;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e133;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e134;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e135;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e136;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e137;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e138;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e139;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e140;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e141;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e142;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e143;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e144;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e145;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e146;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e147;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e148;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e149;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e150;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e151;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e152;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e153;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e154;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e155;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e156;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e157;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e158;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e159;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e160;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e161;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e162;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e163;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e164;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e165;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e166;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e167;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e168;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e169;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e170;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e171;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e172;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e173;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e174;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e175;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e176;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e177;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e178;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e179;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e180;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e181;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e182;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e183;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e184;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e185;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e186;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e187;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e188;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e189;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e190;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e191;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e192;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e193;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e194;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e195;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e196;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e197;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e198;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e199;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e200;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e201;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e202;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e203;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e204;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e205;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e206;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e207;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e208;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e209;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e210;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e211;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e212;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e213;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e214;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e215;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e216;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e217;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e218;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e219;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e220;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e221;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e222;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e223;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e224;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e225;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e226;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e227;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e228;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e229;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e230;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e231;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e232;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e233;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e234;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e235;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e236;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e237;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e238;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e239;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e240;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e241;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e242;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e243;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e244;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e245;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e246;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e247;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e248;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e249;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e250;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e251;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e252;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e253;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e254;
	sortedSymbol_t_t7924C01ADA245A128F221E2A67E87C785582F6AD ___e255;
};
struct _LLTable_e__FixedBuffer_t50C5BC2CB0F7C517D20C3D5DEFBE05EF87E4E4E8 
{
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e0;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e1;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e2;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e3;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e4;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e5;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e6;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e7;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e8;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e9;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e10;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e11;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e12;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e13;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e14;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e15;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e16;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e17;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e18;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e19;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e20;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e21;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e22;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e23;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e24;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e25;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e26;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e27;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e28;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e29;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e30;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e31;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e32;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e33;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e34;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e35;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e36;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e37;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e38;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e39;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e40;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e41;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e42;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e43;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e44;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e45;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e46;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e47;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e48;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e49;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e50;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e51;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e52;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e53;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e54;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e55;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e56;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e57;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e58;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e59;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e60;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e61;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e62;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e63;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e64;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e65;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e66;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e67;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e68;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e69;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e70;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e71;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e72;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e73;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e74;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e75;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e76;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e77;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e78;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e79;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e80;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e81;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e82;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e83;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e84;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e85;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e86;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e87;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e88;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e89;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e90;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e91;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e92;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e93;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e94;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e95;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e96;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e97;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e98;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e99;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e100;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e101;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e102;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e103;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e104;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e105;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e106;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e107;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e108;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e109;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e110;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e111;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e112;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e113;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e114;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e115;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e116;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e117;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e118;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e119;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e120;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e121;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e122;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e123;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e124;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e125;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e126;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e127;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e128;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e129;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e130;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e131;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e132;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e133;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e134;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e135;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e136;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e137;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e138;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e139;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e140;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e141;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e142;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e143;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e144;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e145;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e146;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e147;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e148;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e149;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e150;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e151;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e152;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e153;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e154;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e155;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e156;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e157;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e158;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e159;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e160;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e161;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e162;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e163;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e164;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e165;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e166;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e167;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e168;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e169;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e170;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e171;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e172;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e173;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e174;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e175;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e176;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e177;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e178;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e179;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e180;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e181;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e182;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e183;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e184;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e185;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e186;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e187;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e188;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e189;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e190;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e191;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e192;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e193;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e194;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e195;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e196;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e197;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e198;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e199;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e200;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e201;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e202;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e203;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e204;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e205;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e206;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e207;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e208;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e209;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e210;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e211;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e212;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e213;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e214;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e215;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e216;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e217;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e218;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e219;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e220;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e221;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e222;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e223;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e224;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e225;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e226;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e227;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e228;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e229;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e230;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e231;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e232;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e233;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e234;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e235;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e236;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e237;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e238;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e239;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e240;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e241;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e242;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e243;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e244;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e245;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e246;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e247;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e248;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e249;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e250;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e251;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e252;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e253;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e254;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e255;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e256;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e257;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e258;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e259;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e260;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e261;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e262;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e263;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e264;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e265;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e266;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e267;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e268;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e269;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e270;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e271;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e272;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e273;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e274;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e275;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e276;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e277;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e278;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e279;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e280;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e281;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e282;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e283;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e284;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e285;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e286;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e287;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e288;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e289;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e290;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e291;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e292;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e293;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e294;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e295;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e296;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e297;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e298;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e299;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e300;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e301;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e302;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e303;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e304;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e305;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e306;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e307;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e308;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e309;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e310;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e311;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e312;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e313;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e314;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e315;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e316;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e317;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e318;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e319;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e320;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e321;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e322;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e323;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e324;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e325;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e326;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e327;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e328;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e329;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e330;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e331;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e332;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e333;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e334;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e335;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e336;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e337;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e338;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e339;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e340;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e341;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e342;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e343;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e344;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e345;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e346;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e347;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e348;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e349;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e350;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e351;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e352;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e353;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e354;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e355;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e356;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e357;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e358;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e359;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e360;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e361;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e362;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e363;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e364;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e365;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e366;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e367;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e368;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e369;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e370;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e371;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e372;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e373;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e374;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e375;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e376;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e377;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e378;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e379;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e380;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e381;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e382;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e383;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e384;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e385;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e386;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e387;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e388;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e389;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e390;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e391;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e392;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e393;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e394;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e395;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e396;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e397;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e398;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e399;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e400;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e401;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e402;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e403;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e404;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e405;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e406;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e407;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e408;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e409;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e410;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e411;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e412;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e413;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e414;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e415;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e416;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e417;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e418;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e419;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e420;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e421;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e422;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e423;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e424;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e425;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e426;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e427;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e428;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e429;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e430;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e431;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e432;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e433;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e434;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e435;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e436;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e437;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e438;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e439;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e440;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e441;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e442;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e443;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e444;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e445;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e446;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e447;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e448;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e449;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e450;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e451;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e452;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e453;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e454;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e455;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e456;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e457;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e458;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e459;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e460;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e461;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e462;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e463;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e464;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e465;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e466;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e467;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e468;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e469;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e470;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e471;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e472;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e473;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e474;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e475;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e476;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e477;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e478;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e479;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e480;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e481;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e482;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e483;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e484;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e485;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e486;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e487;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e488;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e489;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e490;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e491;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e492;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e493;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e494;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e495;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e496;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e497;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e498;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e499;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e500;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e501;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e502;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e503;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e504;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e505;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e506;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e507;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e508;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e509;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e510;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e511;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e512;
};
struct _MLTable_e__FixedBuffer_t6413326ADA3E770CC5569126DA32B6E0D76992E3 
{
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e0;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e1;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e2;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e3;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e4;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e5;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e6;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e7;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e8;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e9;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e10;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e11;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e12;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e13;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e14;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e15;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e16;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e17;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e18;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e19;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e20;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e21;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e22;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e23;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e24;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e25;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e26;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e27;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e28;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e29;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e30;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e31;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e32;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e33;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e34;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e35;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e36;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e37;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e38;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e39;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e40;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e41;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e42;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e43;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e44;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e45;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e46;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e47;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e48;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e49;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e50;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e51;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e52;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e53;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e54;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e55;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e56;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e57;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e58;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e59;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e60;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e61;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e62;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e63;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e64;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e65;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e66;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e67;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e68;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e69;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e70;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e71;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e72;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e73;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e74;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e75;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e76;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e77;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e78;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e79;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e80;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e81;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e82;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e83;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e84;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e85;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e86;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e87;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e88;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e89;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e90;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e91;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e92;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e93;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e94;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e95;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e96;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e97;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e98;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e99;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e100;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e101;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e102;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e103;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e104;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e105;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e106;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e107;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e108;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e109;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e110;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e111;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e112;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e113;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e114;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e115;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e116;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e117;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e118;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e119;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e120;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e121;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e122;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e123;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e124;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e125;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e126;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e127;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e128;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e129;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e130;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e131;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e132;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e133;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e134;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e135;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e136;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e137;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e138;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e139;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e140;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e141;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e142;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e143;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e144;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e145;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e146;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e147;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e148;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e149;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e150;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e151;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e152;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e153;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e154;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e155;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e156;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e157;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e158;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e159;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e160;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e161;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e162;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e163;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e164;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e165;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e166;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e167;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e168;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e169;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e170;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e171;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e172;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e173;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e174;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e175;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e176;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e177;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e178;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e179;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e180;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e181;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e182;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e183;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e184;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e185;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e186;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e187;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e188;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e189;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e190;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e191;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e192;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e193;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e194;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e195;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e196;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e197;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e198;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e199;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e200;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e201;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e202;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e203;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e204;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e205;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e206;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e207;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e208;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e209;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e210;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e211;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e212;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e213;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e214;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e215;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e216;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e217;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e218;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e219;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e220;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e221;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e222;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e223;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e224;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e225;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e226;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e227;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e228;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e229;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e230;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e231;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e232;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e233;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e234;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e235;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e236;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e237;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e238;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e239;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e240;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e241;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e242;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e243;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e244;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e245;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e246;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e247;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e248;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e249;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e250;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e251;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e252;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e253;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e254;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e255;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e256;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e257;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e258;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e259;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e260;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e261;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e262;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e263;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e264;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e265;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e266;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e267;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e268;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e269;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e270;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e271;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e272;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e273;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e274;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e275;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e276;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e277;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e278;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e279;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e280;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e281;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e282;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e283;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e284;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e285;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e286;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e287;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e288;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e289;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e290;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e291;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e292;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e293;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e294;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e295;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e296;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e297;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e298;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e299;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e300;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e301;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e302;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e303;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e304;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e305;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e306;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e307;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e308;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e309;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e310;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e311;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e312;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e313;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e314;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e315;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e316;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e317;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e318;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e319;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e320;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e321;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e322;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e323;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e324;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e325;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e326;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e327;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e328;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e329;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e330;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e331;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e332;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e333;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e334;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e335;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e336;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e337;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e338;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e339;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e340;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e341;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e342;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e343;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e344;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e345;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e346;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e347;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e348;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e349;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e350;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e351;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e352;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e353;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e354;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e355;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e356;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e357;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e358;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e359;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e360;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e361;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e362;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e363;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e364;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e365;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e366;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e367;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e368;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e369;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e370;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e371;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e372;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e373;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e374;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e375;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e376;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e377;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e378;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e379;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e380;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e381;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e382;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e383;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e384;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e385;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e386;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e387;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e388;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e389;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e390;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e391;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e392;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e393;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e394;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e395;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e396;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e397;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e398;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e399;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e400;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e401;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e402;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e403;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e404;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e405;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e406;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e407;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e408;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e409;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e410;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e411;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e412;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e413;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e414;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e415;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e416;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e417;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e418;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e419;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e420;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e421;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e422;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e423;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e424;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e425;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e426;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e427;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e428;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e429;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e430;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e431;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e432;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e433;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e434;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e435;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e436;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e437;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e438;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e439;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e440;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e441;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e442;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e443;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e444;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e445;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e446;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e447;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e448;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e449;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e450;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e451;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e452;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e453;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e454;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e455;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e456;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e457;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e458;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e459;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e460;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e461;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e462;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e463;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e464;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e465;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e466;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e467;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e468;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e469;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e470;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e471;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e472;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e473;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e474;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e475;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e476;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e477;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e478;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e479;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e480;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e481;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e482;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e483;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e484;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e485;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e486;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e487;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e488;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e489;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e490;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e491;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e492;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e493;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e494;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e495;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e496;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e497;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e498;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e499;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e500;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e501;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e502;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e503;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e504;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e505;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e506;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e507;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e508;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e509;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e510;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e511;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e512;
};
struct _OFTable_e__FixedBuffer_tCE9EF395755D6D505A37EC5036443CA8CD5214DB 
{
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e0;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e1;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e2;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e3;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e4;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e5;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e6;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e7;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e8;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e9;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e10;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e11;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e12;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e13;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e14;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e15;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e16;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e17;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e18;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e19;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e20;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e21;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e22;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e23;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e24;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e25;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e26;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e27;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e28;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e29;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e30;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e31;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e32;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e33;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e34;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e35;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e36;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e37;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e38;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e39;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e40;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e41;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e42;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e43;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e44;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e45;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e46;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e47;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e48;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e49;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e50;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e51;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e52;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e53;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e54;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e55;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e56;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e57;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e58;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e59;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e60;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e61;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e62;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e63;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e64;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e65;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e66;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e67;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e68;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e69;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e70;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e71;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e72;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e73;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e74;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e75;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e76;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e77;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e78;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e79;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e80;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e81;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e82;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e83;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e84;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e85;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e86;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e87;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e88;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e89;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e90;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e91;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e92;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e93;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e94;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e95;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e96;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e97;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e98;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e99;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e100;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e101;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e102;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e103;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e104;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e105;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e106;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e107;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e108;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e109;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e110;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e111;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e112;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e113;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e114;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e115;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e116;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e117;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e118;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e119;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e120;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e121;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e122;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e123;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e124;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e125;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e126;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e127;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e128;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e129;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e130;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e131;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e132;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e133;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e134;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e135;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e136;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e137;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e138;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e139;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e140;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e141;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e142;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e143;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e144;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e145;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e146;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e147;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e148;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e149;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e150;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e151;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e152;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e153;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e154;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e155;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e156;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e157;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e158;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e159;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e160;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e161;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e162;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e163;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e164;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e165;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e166;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e167;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e168;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e169;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e170;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e171;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e172;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e173;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e174;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e175;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e176;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e177;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e178;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e179;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e180;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e181;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e182;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e183;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e184;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e185;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e186;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e187;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e188;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e189;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e190;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e191;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e192;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e193;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e194;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e195;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e196;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e197;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e198;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e199;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e200;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e201;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e202;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e203;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e204;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e205;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e206;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e207;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e208;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e209;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e210;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e211;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e212;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e213;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e214;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e215;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e216;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e217;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e218;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e219;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e220;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e221;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e222;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e223;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e224;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e225;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e226;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e227;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e228;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e229;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e230;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e231;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e232;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e233;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e234;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e235;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e236;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e237;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e238;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e239;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e240;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e241;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e242;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e243;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e244;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e245;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e246;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e247;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e248;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e249;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e250;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e251;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e252;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e253;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e254;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e255;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B ___e256;
};
struct _CTable_e__FixedBuffer_t781271D20A3DA7A7D42FD03598B380980B30FD29 
{
	uintptr_t ___e0;
	uintptr_t ___e1;
	uintptr_t ___e2;
	uintptr_t ___e3;
	uintptr_t ___e4;
	uintptr_t ___e5;
	uintptr_t ___e6;
	uintptr_t ___e7;
	uintptr_t ___e8;
	uintptr_t ___e9;
	uintptr_t ___e10;
	uintptr_t ___e11;
	uintptr_t ___e12;
	uintptr_t ___e13;
	uintptr_t ___e14;
	uintptr_t ___e15;
	uintptr_t ___e16;
	uintptr_t ___e17;
	uintptr_t ___e18;
	uintptr_t ___e19;
	uintptr_t ___e20;
	uintptr_t ___e21;
	uintptr_t ___e22;
	uintptr_t ___e23;
	uintptr_t ___e24;
	uintptr_t ___e25;
	uintptr_t ___e26;
	uintptr_t ___e27;
	uintptr_t ___e28;
	uintptr_t ___e29;
	uintptr_t ___e30;
	uintptr_t ___e31;
	uintptr_t ___e32;
	uintptr_t ___e33;
	uintptr_t ___e34;
	uintptr_t ___e35;
	uintptr_t ___e36;
	uintptr_t ___e37;
	uintptr_t ___e38;
	uintptr_t ___e39;
	uintptr_t ___e40;
	uintptr_t ___e41;
	uintptr_t ___e42;
	uintptr_t ___e43;
	uintptr_t ___e44;
	uintptr_t ___e45;
	uintptr_t ___e46;
	uintptr_t ___e47;
	uintptr_t ___e48;
	uintptr_t ___e49;
	uintptr_t ___e50;
	uintptr_t ___e51;
	uintptr_t ___e52;
	uintptr_t ___e53;
	uintptr_t ___e54;
	uintptr_t ___e55;
	uintptr_t ___e56;
	uintptr_t ___e57;
	uintptr_t ___e58;
	uintptr_t ___e59;
	uintptr_t ___e60;
	uintptr_t ___e61;
	uintptr_t ___e62;
	uintptr_t ___e63;
	uintptr_t ___e64;
	uintptr_t ___e65;
	uintptr_t ___e66;
	uintptr_t ___e67;
	uintptr_t ___e68;
	uintptr_t ___e69;
	uintptr_t ___e70;
	uintptr_t ___e71;
	uintptr_t ___e72;
	uintptr_t ___e73;
	uintptr_t ___e74;
	uintptr_t ___e75;
	uintptr_t ___e76;
	uintptr_t ___e77;
	uintptr_t ___e78;
	uintptr_t ___e79;
	uintptr_t ___e80;
	uintptr_t ___e81;
	uintptr_t ___e82;
	uintptr_t ___e83;
	uintptr_t ___e84;
	uintptr_t ___e85;
	uintptr_t ___e86;
	uintptr_t ___e87;
	uintptr_t ___e88;
	uintptr_t ___e89;
	uintptr_t ___e90;
	uintptr_t ___e91;
	uintptr_t ___e92;
	uintptr_t ___e93;
	uintptr_t ___e94;
	uintptr_t ___e95;
	uintptr_t ___e96;
	uintptr_t ___e97;
	uintptr_t ___e98;
	uintptr_t ___e99;
	uintptr_t ___e100;
	uintptr_t ___e101;
	uintptr_t ___e102;
	uintptr_t ___e103;
	uintptr_t ___e104;
	uintptr_t ___e105;
	uintptr_t ___e106;
	uintptr_t ___e107;
	uintptr_t ___e108;
	uintptr_t ___e109;
	uintptr_t ___e110;
	uintptr_t ___e111;
	uintptr_t ___e112;
	uintptr_t ___e113;
	uintptr_t ___e114;
	uintptr_t ___e115;
	uintptr_t ___e116;
	uintptr_t ___e117;
	uintptr_t ___e118;
	uintptr_t ___e119;
	uintptr_t ___e120;
	uintptr_t ___e121;
	uintptr_t ___e122;
	uintptr_t ___e123;
	uintptr_t ___e124;
	uintptr_t ___e125;
	uintptr_t ___e126;
	uintptr_t ___e127;
	uintptr_t ___e128;
	uintptr_t ___e129;
	uintptr_t ___e130;
	uintptr_t ___e131;
	uintptr_t ___e132;
	uintptr_t ___e133;
	uintptr_t ___e134;
	uintptr_t ___e135;
	uintptr_t ___e136;
	uintptr_t ___e137;
	uintptr_t ___e138;
	uintptr_t ___e139;
	uintptr_t ___e140;
	uintptr_t ___e141;
	uintptr_t ___e142;
	uintptr_t ___e143;
	uintptr_t ___e144;
	uintptr_t ___e145;
	uintptr_t ___e146;
	uintptr_t ___e147;
	uintptr_t ___e148;
	uintptr_t ___e149;
	uintptr_t ___e150;
	uintptr_t ___e151;
	uintptr_t ___e152;
	uintptr_t ___e153;
	uintptr_t ___e154;
	uintptr_t ___e155;
	uintptr_t ___e156;
	uintptr_t ___e157;
	uintptr_t ___e158;
	uintptr_t ___e159;
	uintptr_t ___e160;
	uintptr_t ___e161;
	uintptr_t ___e162;
	uintptr_t ___e163;
	uintptr_t ___e164;
	uintptr_t ___e165;
	uintptr_t ___e166;
	uintptr_t ___e167;
	uintptr_t ___e168;
	uintptr_t ___e169;
	uintptr_t ___e170;
	uintptr_t ___e171;
	uintptr_t ___e172;
	uintptr_t ___e173;
	uintptr_t ___e174;
	uintptr_t ___e175;
	uintptr_t ___e176;
	uintptr_t ___e177;
	uintptr_t ___e178;
	uintptr_t ___e179;
	uintptr_t ___e180;
	uintptr_t ___e181;
	uintptr_t ___e182;
	uintptr_t ___e183;
	uintptr_t ___e184;
	uintptr_t ___e185;
	uintptr_t ___e186;
	uintptr_t ___e187;
	uintptr_t ___e188;
	uintptr_t ___e189;
	uintptr_t ___e190;
	uintptr_t ___e191;
	uintptr_t ___e192;
	uintptr_t ___e193;
	uintptr_t ___e194;
	uintptr_t ___e195;
	uintptr_t ___e196;
	uintptr_t ___e197;
	uintptr_t ___e198;
	uintptr_t ___e199;
	uintptr_t ___e200;
	uintptr_t ___e201;
	uintptr_t ___e202;
	uintptr_t ___e203;
	uintptr_t ___e204;
	uintptr_t ___e205;
	uintptr_t ___e206;
	uintptr_t ___e207;
	uintptr_t ___e208;
	uintptr_t ___e209;
	uintptr_t ___e210;
	uintptr_t ___e211;
	uintptr_t ___e212;
	uintptr_t ___e213;
	uintptr_t ___e214;
	uintptr_t ___e215;
	uintptr_t ___e216;
	uintptr_t ___e217;
	uintptr_t ___e218;
	uintptr_t ___e219;
	uintptr_t ___e220;
	uintptr_t ___e221;
	uintptr_t ___e222;
	uintptr_t ___e223;
	uintptr_t ___e224;
	uintptr_t ___e225;
	uintptr_t ___e226;
	uintptr_t ___e227;
	uintptr_t ___e228;
	uintptr_t ___e229;
	uintptr_t ___e230;
	uintptr_t ___e231;
	uintptr_t ___e232;
	uintptr_t ___e233;
	uintptr_t ___e234;
	uintptr_t ___e235;
	uintptr_t ___e236;
	uintptr_t ___e237;
	uintptr_t ___e238;
	uintptr_t ___e239;
	uintptr_t ___e240;
	uintptr_t ___e241;
	uintptr_t ___e242;
	uintptr_t ___e243;
	uintptr_t ___e244;
	uintptr_t ___e245;
	uintptr_t ___e246;
	uintptr_t ___e247;
	uintptr_t ___e248;
	uintptr_t ___e249;
	uintptr_t ___e250;
	uintptr_t ___e251;
	uintptr_t ___e252;
	uintptr_t ___e253;
	uintptr_t ___e254;
	uintptr_t ___e255;
	uintptr_t ___e256;
};
struct _prevOffset_e__FixedBuffer_tD4FDF1F47333860A1B7661D9CCC2798B5E4196AF 
{
	uintptr_t ___e0;
	uintptr_t ___e1;
	uintptr_t ___e2;
};
struct AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 
{
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ____methodBuilder;
	int32_t ____result;
	bool ____haveResult;
	bool ____useBuilder;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer;
	int32_t ___inputBufferSize;
	bool ___preserveDecompressor;
	bool ___leaveOpen;
	bool ___checkEndOfStream;
	Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* ___decompressor;
	ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0 ___input;
	uintptr_t ___lastDecompressResult;
	bool ___contextDrained;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ZSTD_compressionParameters_t0FA603612ECCC1F72BDB653ED4E58EF152D93E0C 
{
	uint32_t ___windowLog;
	uint32_t ___chainLog;
	uint32_t ___hashLog;
	uint32_t ___searchLog;
	uint32_t ___minMatch;
	uint32_t ___targetLength;
	int32_t ___strategy;
};
struct ZSTD_entropyDTables_t_t22316B423B3D8D2635FC6CAD62EFBECBEEC9BC74 
{
	_LLTable_e__FixedBuffer_t50C5BC2CB0F7C517D20C3D5DEFBE05EF87E4E4E8 ___LLTable;
	_OFTable_e__FixedBuffer_tCE9EF395755D6D505A37EC5036443CA8CD5214DB ___OFTable;
	_MLTable_e__FixedBuffer_t6413326ADA3E770CC5569126DA32B6E0D76992E3 ___MLTable;
	U3ChufTableU3Ee__FixedBuffer_tC7CCFCA7245CAD4DB14388EBF005767BDFDA82B5 ___hufTable;
	U3CrepU3Ee__FixedBuffer_t91F4346909CB04C6F5B0DE5F5653A3DFB49F4BA7 ___rep;
	U3CworkspaceU3Ee__FixedBuffer_tD28D8976CCC689E93A52340A3361CCED76D04605 ___workspace;
};
struct ZSTD_frameHeader_tD555837E08C68F0025F7D6DD9D67DEB20A678F7A 
{
	uint64_t ___frameContentSize;
	uint64_t ___windowSize;
	uint32_t ___blockSizeMax;
	int32_t ___frameType;
	uint32_t ___headerSize;
	uint32_t ___dictID;
	uint32_t ___checksumFlag;
	uint32_t ____reserved1;
	uint32_t ____reserved2;
};
struct ZSTD_fseCTables_t_t321834F7438BE306EAE3152CB346FE13B5EE2464 
{
	U3CoffcodeCTableU3Ee__FixedBuffer_tEED8AA5722B94BF2DE9CEAA0EAEA8104F4CCB295 ___offcodeCTable;
	U3CmatchlengthCTableU3Ee__FixedBuffer_tADCFAB92E4EF203CC23BFDBE0BA563E7680B0068 ___matchlengthCTable;
	U3ClitlengthCTableU3Ee__FixedBuffer_tB101C74C0EC0E19857673749116CFAA2B44C3004 ___litlengthCTable;
	int32_t ___offcode_repeatMode;
	int32_t ___matchlength_repeatMode;
	int32_t ___litlength_repeatMode;
};
struct ZSTD_hufCTables_t_t63A819835150A254054D060B1AFAF7F8630DCFC5 
{
	_CTable_e__FixedBuffer_t781271D20A3DA7A7D42FD03598B380980B30FD29 ___CTable;
	int32_t ___repeatMode;
};
struct ZSTD_optLdm_t_t35B119C84985EA43A2C4AB8FA32340CDB3CCCAED 
{
	rawSeqStore_t_tD74D85B0204BCC997639F5FCF10C6B55FFC3BE6B ___seqStore;
	uint32_t ___startPosInBlock;
	uint32_t ___endPosInBlock;
	uint32_t ___offset;
};
struct ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1  : public Exception_t
{
	int32_t ___U3CCodeU3Ek__BackingField;
};
struct blockProperties_t_t536A1B80BC558DB140B30C4343CFD3E09C8B7F06 
{
	int32_t ___blockType;
	uint32_t ___lastBlock;
	uint32_t ___origSize;
};
struct optState_t_tCF004F516BD81A3BE1740C0213AE16D0D28425BF 
{
	uint32_t* ___litFreq;
	uint32_t* ___litLengthFreq;
	uint32_t* ___matchLengthFreq;
	uint32_t* ___offCodeFreq;
	ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315* ___matchTable;
	ZSTD_optimal_t_t97645D623275F367E35FED5731866D0332DF3415* ___priceTable;
	uint32_t ___litSum;
	uint32_t ___litLengthSum;
	uint32_t ___matchLengthSum;
	uint32_t ___offCodeSum;
	uint32_t ___litSumBasePrice;
	uint32_t ___litLengthSumBasePrice;
	uint32_t ___matchLengthSumBasePrice;
	uint32_t ___offCodeSumBasePrice;
	int32_t ___priceType;
	ZSTD_entropyCTables_t_t33A218D5FF7CE0C97EF7E61D975FC9D92A36FA78* ___symbolCosts;
	int32_t ___literalCompressionMode;
};
struct seqState_t_t95F23144DA3E7D6DF04B5689A4FB8948F7A37A1D 
{
	BIT_DStream_t_tEE09F97CFD294B0042C27043645EF090F85D68D6 ___DStream;
	ZSTD_fseState_tEE5F57D46FE10AEFA5756740FB41A79A40E0B8FB ___stateLL;
	ZSTD_fseState_tEE5F57D46FE10AEFA5756740FB41A79A40E0B8FB ___stateOffb;
	ZSTD_fseState_tEE5F57D46FE10AEFA5756740FB41A79A40E0B8FB ___stateML;
	_prevOffset_e__FixedBuffer_tD4FDF1F47333860A1B7661D9CCC2798B5E4196AF ___prevOffset;
};
struct seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5 
{
	seqDef_s_t65214A2D55070557AC056241E873CAF55B271257* ___sequencesStart;
	seqDef_s_t65214A2D55070557AC056241E873CAF55B271257* ___sequences;
	uint8_t* ___litStart;
	uint8_t* ___lit;
	uint8_t* ___llCode;
	uint8_t* ___mlCode;
	uint8_t* ___ofCode;
	uintptr_t ___maxNbSeq;
	uintptr_t ___maxNbLit;
	int32_t ___longLengthType;
	uint32_t ___longLengthPos;
};
struct _rankVal_e__FixedBuffer_tD92E7D644A7378096C2C152E8859A1857F202ACB 
{
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e0;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e1;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e2;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e3;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e4;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e5;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e6;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e7;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e8;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e9;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e10;
	rankValCol_t_t5C92EA0950FE2EC2580DF76926440D8F52947E16 ___e11;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct HUF_ReadDTableX2_Workspace_tEF44F0DE374C1EE935BB6D63CC045E1EE7BFF9D7 
{
	_rankVal_e__FixedBuffer_tD92E7D644A7378096C2C152E8859A1857F202ACB ___rankVal;
	U3CrankStatsU3Ee__FixedBuffer_tFD35AE29350706E24BD70D1A212C14FD360469C7 ___rankStats;
	U3CrankStart0U3Ee__FixedBuffer_tE8B4CEBB96C3B8D70F1CA16F4EAAC479B0B0CD3F ___rankStart0;
	_sortedSymbol_e__FixedBuffer_tAC607CD82D79E926540C74C9EC3262ED593EB204 ___sortedSymbol;
	U3CweightListU3Ee__FixedBuffer_t238BD26D03ED7967AD36F116171D4E7E80E51868 ___weightList;
	U3CcalleeWkspU3Ee__FixedBuffer_tDD6B21301F6EE69750D61525AB95EE6150EC90CD ___calleeWksp;
};
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D 
{
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B* ___LLTptr;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B* ___MLTptr;
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B* ___OFTptr;
	uint32_t* ___HUFptr;
	ZSTD_entropyDTables_t_t22316B423B3D8D2635FC6CAD62EFBECBEEC9BC74 ___entropy;
	U3CworkspaceU3Ee__FixedBuffer_t065EE13260C89EA1BEA5E852875B40E9113F0D92 ___workspace;
	void* ___previousDstEnd;
	void* ___prefixStart;
	void* ___virtualStart;
	void* ___dictEnd;
	uintptr_t ___expected;
	ZSTD_frameHeader_tD555837E08C68F0025F7D6DD9D67DEB20A678F7A ___fParams;
	uint64_t ___processedCSize;
	uint64_t ___decodedSize;
	int32_t ___bType;
	int32_t ___stage;
	uint32_t ___litEntropy;
	uint32_t ___fseEntropy;
	XXH64_state_s_tC9DE74FF89D57C7DE6794058A21AC01DCFB18D93 ___xxhState;
	uintptr_t ___headerSize;
	int32_t ___format;
	int32_t ___forceIgnoreChecksum;
	uint32_t ___validateChecksum;
	uint8_t* ___litPtr;
	ZSTD_customMem_t39C80B0D96D2ED78A882EA71088AE7517DFC7BC6 ___customMem;
	uintptr_t ___litSize;
	uintptr_t ___rleSize;
	uintptr_t ___staticSize;
	int32_t ___isFrameDecompression;
	ZSTD_DDict_s_tD1E2EC7606520D9ED737F276D9FC85242F80B1F3* ___ddictLocal;
	ZSTD_DDict_s_tD1E2EC7606520D9ED737F276D9FC85242F80B1F3* ___ddict;
	uint32_t ___dictID;
	int32_t ___ddictIsCold;
	int32_t ___dictUses;
	ZSTD_DDictHashSet_t9F76D20448D6AF7394C9ED8A0C35FDFB2DC87A6F* ___ddictSet;
	int32_t ___refMultipleDDicts;
	int32_t ___disableHufAsm;
	int32_t ___maxBlockSizeParam;
	int32_t ___streamStage;
	int8_t* ___inBuff;
	uintptr_t ___inBuffSize;
	uintptr_t ___inPos;
	uintptr_t ___maxWindowSize;
	int8_t* ___outBuff;
	uintptr_t ___outBuffSize;
	uintptr_t ___outStart;
	uintptr_t ___outEnd;
	uintptr_t ___lhSize;
	uint32_t ___hostageByte;
	int32_t ___noForwardProgress;
	int32_t ___outBufferMode;
	ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 ___expectedOutBuffer;
	uint8_t* ___litBuffer;
	uint8_t* ___litBufferEnd;
	int32_t ___litBufferLocation;
	U3ClitExtraBufferU3Ee__FixedBuffer_t74481051BD19C610049DCBE1F6344B93D20BE23C ___litExtraBuffer;
	U3CheaderBufferU3Ee__FixedBuffer_tD170365BA1E099CF86989E85760F525886080D13 ___headerBuffer;
	uintptr_t ___oversizedDuration;
};
struct ZSTD_DDict_s_tD1E2EC7606520D9ED737F276D9FC85242F80B1F3 
{
	void* ___dictBuffer;
	void* ___dictContent;
	uintptr_t ___dictSize;
	ZSTD_entropyDTables_t_t22316B423B3D8D2635FC6CAD62EFBECBEEC9BC74 ___entropy;
	uint32_t ___dictID;
	uint32_t ___entropyPresent;
	ZSTD_customMem_t39C80B0D96D2ED78A882EA71088AE7517DFC7BC6 ___cMem;
};
struct ZSTD_entropyCTables_t_t33A218D5FF7CE0C97EF7E61D975FC9D92A36FA78 
{
	ZSTD_hufCTables_t_t63A819835150A254054D060B1AFAF7F8630DCFC5 ___huf;
	ZSTD_fseCTables_t_t321834F7438BE306EAE3152CB346FE13B5EE2464 ___fse;
};
struct ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194 
{
	ZSTD_window_t_tA9D994C005704AFBA9A1C4CC0ECB0DCF5F922DCF ___window;
	uint32_t ___loadedDictEnd;
	uint32_t ___nextToUpdate;
	uint32_t ___hashLog3;
	uint32_t ___rowHashLog;
	uint8_t* ___tagTable;
	U3ChashCacheU3Ee__FixedBuffer_t95283D4BE63543C33924D93B5EBB077C8ED74923 ___hashCache;
	uint64_t ___hashSalt;
	uint32_t ___hashSaltEntropy;
	uint32_t* ___hashTable;
	uint32_t* ___hashTable3;
	uint32_t* ___chainTable;
	uint32_t ___forceNonContiguous;
	int32_t ___dedicatedDictSearch;
	optState_t_tCF004F516BD81A3BE1740C0213AE16D0D28425BF ___opt;
	ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___dictMatchState;
	ZSTD_compressionParameters_t0FA603612ECCC1F72BDB653ED4E58EF152D93E0C ___cParams;
	rawSeqStore_t_tD74D85B0204BCC997639F5FCF10C6B55FFC3BE6B* ___ldmSeqStore;
	int32_t ___prefetchCDictTables;
	int32_t ___lazySkipping;
};
struct U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1 
{
	int32_t ___U3CU3E1__state;
	AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 ___U3CU3Et__builder;
	DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* ___U3CU3E4__this;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 ___U3CoutputU3E5__2;
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ___U3CU3Eu__1;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87  : public MulticastDelegate_t
{
};
struct ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA  : public MulticastDelegate_t
{
};
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_StaticFields
{
	ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ___U3CSharedU3Ek__BackingField;
};
struct U3CPrivateImplementationDetailsU3E_tE8ADCDD5E555782EA16B0D83850F0F640D48C848_StaticFields
{
	__StaticArrayInitTypeSizeU3D128_t4B01E8309D7C15F8F467751D612CA6ACF9E0056F ___07795C09EEECADCB2F184E7485B6B0597CF6F586163107365752AC173DFF095E;
	__StaticArrayInitTypeSizeU3D32_t0A171CCC40E895FF482519F22C6D6AC9006811C2 ___08EAD3C2252123D5A896FD35896B025D5AD230A735611C5374FB4371425D9540;
	__StaticArrayInitTypeSizeU3D32_t0A171CCC40E895FF482519F22C6D6AC9006811C2 ___132437A6D6EF0CEA06DC6B306063282B418E2BAF1CB1860DDFA4C4C425787A68;
	__StaticArrayInitTypeSizeU3D32_t0A171CCC40E895FF482519F22C6D6AC9006811C2 ___31738AC619AB99DED708DF6300C88A911762AF9DE44B5C200E632E3CDF200881;
	__StaticArrayInitTypeSizeU3D128_t4B01E8309D7C15F8F467751D612CA6ACF9E0056F ___381D7612177F6F5024F1D5A68CDB994E1F4F19DC66C05B0E49EF5B9410096479;
	__StaticArrayInitTypeSizeU3D32_t0A171CCC40E895FF482519F22C6D6AC9006811C2 ___3BF63951626584EB1653F9B8DBB590A5EE1EAE1135A904B9317C3773896DF076;
	__StaticArrayInitTypeSizeU3D12_tE79B0D8EEDC3A64891CA5FB0BDA1A5BBE3F90572 ___3FC14AB156C107B48E5C225BD646EC717ACF73DBD6323E134E15A1348829B3B0;
	__StaticArrayInitTypeSizeU3D32_t0A171CCC40E895FF482519F22C6D6AC9006811C2 ___4BCD43D478B9229AB7A13406353712C7944B60348C36B4D0E6B789D10F697652;
	__StaticArrayInitTypeSizeU3D1024_tBBD8B7AD8F53668DE714D8B86B621358F7D216A3 ___5401E9E34DEB987D752A5783C54C3FE9936D4ABBC62E487C080B73702EB0FA64;
	__StaticArrayInitTypeSizeU3D106_tA91B01C9A7FD1041A8DF87BE1EEC55A5F62DF58B ___5EE9669BF54E83038DC313CDC336394456DAB67A3F789543DF0F2A772E691516;
	__StaticArrayInitTypeSizeU3D32_t0A171CCC40E895FF482519F22C6D6AC9006811C2 ___630DCD2966C4336691125448BBB25B4FF412A49C732DB2C8ABC1B8581BD710DD;
	__StaticArrayInitTypeSizeU3D2048_tC865B7BB3E33389521510C4F44EC3934900BC48E ___7D93A8E3E0BFAE0AB98570B772EC8BE8E672BFC463B955B286B06A5B1AAB650A;
	__StaticArrayInitTypeSizeU3D212_tF53FDE4DCCAC190CD6AA3B1E239974A67DA70F82 ___A3D913E3B062CFDDD6602CD5E776FE452E49A9407F59C0D359D672FFBFF725F2;
	__StaticArrayInitTypeSizeU3D72_tC32A03CF686EF08522698CE3A370BAC062CD320B ___B6D52002F2C4DCD233AF1DE1876035F91420D7A88E8702D6DC8D58518C87FBA4;
	__StaticArrayInitTypeSizeU3D128_t4B01E8309D7C15F8F467751D612CA6ACF9E0056F ___BB5219493F2CEACA6768557910DE0EA7EB84D1483288B8CCD23B067097D9E1AF;
	__StaticArrayInitTypeSizeU3D53_t6113DCE0677CB96E5A6F46A6A832D7743BC0B697 ___C0F37EC314867F0F18E8E557B842771D47267DF4AB3BBCD7EF0B3A8DB9BA5B3F;
	__StaticArrayInitTypeSizeU3D144_t5E6D9C8C4474708B853F0451BCF7E79BE4522215 ___CAC9B4ACC62725C542568AB4785D958C3E1ECF63CBA8B88B78C6FE5899CB2C41;
	__StaticArrayInitTypeSizeU3D36_t1C67799375E5141797ECCA0A7E511DF5A22A5D6D ___DFACFEED3F3DD5A1EC86B90317845F71C6969158BAFAC2A2D7E02B78A18D5A07;
	__StaticArrayInitTypeSizeU3D64_t6B27B5577AD90B09BABDD5685A4D38B3F2909C7F ___E164BDF885F38AB586BDD4922E55668E593D74E75ADEB2B6777C74774259054D;
	__StaticArrayInitTypeSizeU3D32_t0A171CCC40E895FF482519F22C6D6AC9006811C2 ___E690934A6CA2004E0E00A1CED1C91319A2E87D3A44F316325206A493A9859146;
	__StaticArrayInitTypeSizeU3D144_t5E6D9C8C4474708B853F0451BCF7E79BE4522215 ___EA464FFB7BAA424AF0AE92C1F136499C95CA87CA563A2BF5D70CD3E86EF190F5;
	__StaticArrayInitTypeSizeU3D128_t4B01E8309D7C15F8F467751D612CA6ACF9E0056F ___EB86EC1D31BBE6D59EE3D949EB5D8D7A832289518F7EE42DE0E69E737EE09FAA;
	__StaticArrayInitTypeSizeU3D58_t4BFC8E25229BDA4B9B08BD63FAED2A86675E3672 ___FCFA897982B75C158544033528196873B58E2466C1D7886ED44DA29E34334720;
};
struct BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_StaticFields
{
	uint8_t* ___TrailingZeroCountDeBruijn;
	uint8_t* ___Log2DeBruijn;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory;
};
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21_StaticFields
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_canceledTask;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_StaticFields
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_defaultResultTask;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeHelper_GetArrayPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF8E70FC0E4E1F7746BD18EC98F55B1D93F53FFF2_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1_gshared (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m2FC58AE60948818D3134F32B502343786ED320E9_gshared_inline (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_gshared_inline (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_gshared (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m755841EBC940E8ACABE0248C0B2806C89ACD0E87_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_gshared (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_mCB561E1D151F158556323F272B0D0DCA2196ED26_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitOperations_TrailingZeroCount_m661217BE5FA61113655BFF30B02419B7F633D474_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitOperations_LeadingZeroCount_mCC89863CA332F4C2DC790602888B02B3F97FF961_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
inline uint8_t* UnsafeHelper_GetArrayPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF8E70FC0E4E1F7746BD18EC98F55B1D93F53FFF2_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))UnsafeHelper_GetArrayPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF8E70FC0E4E1F7746BD18EC98F55B1D93F53FFF2_gshared_inline)(___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor__ctor_mA53C7276B2E2376FA75C1C3F60D6918170FF5AA8 (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream__ctor_m010B775356FE26A3B9F8A1B2A6E7FB2B8A31E2B3 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* ___1_decompressor, int32_t ___2_bufferSize, bool ___3_checkEndOfStream, bool ___4_preserveDecompressor, bool ___5_leaveOpen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Methods_ZSTD_DStreamInSize_m036E7B8C04997630B3DE4B059976B082B6D9CD6B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ThrowHelper_EnsureZstdSuccess_m6E804CAFC91C95C063962542B2E6759F050F5508 (uintptr_t ___0_returnValue, const RuntimeMethod* method) ;
inline ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor_Dispose_mE6773116457662AE30BFFD293FF81F6B39838D82 (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_EnsureNotDisposed_m82536AB7CA15A930030FED19989075C4F6FD902B (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t DecompressionStream_DecompressStream_m0E36631BF573E7487429099467A3D9D649BEC707 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* ___0_output, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_outputBuffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1 (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21*, const RuntimeMethod*))ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1_gshared)(__this, method);
}
inline AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E (const RuntimeMethod* method)
{
	return ((  AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 (*) (const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E_gshared)(method);
}
inline void AsyncValueTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m2FC58AE60948818D3134F32B502343786ED320E9_inline (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m2FC58AE60948818D3134F32B502343786ED320E9_gshared_inline)(__this, ___0_stateMachine, method);
}
inline ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3 (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, const RuntimeMethod* method)
{
	return ((  ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3_gshared)(__this, method);
}
inline uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Decompressor_DecompressStream_m88A8A7A2C9AB0B6F4A94EF7384D49A3FF8F72411 (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* __this, ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* ___0_input, ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
inline int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared)(__this, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline)(__this, method);
}
inline ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_gshared)(__this, ___0_continueOnCapturedContext, method);
}
inline ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_inline (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 (*) (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_gshared_inline)(__this, method);
}
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3 (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_gshared)(__this, method);
}
inline void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m755841EBC940E8ACABE0248C0B2806C89ACD0E87 (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m755841EBC940E8ACABE0248C0B2806C89ACD0E87_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline int32_t ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_gshared)(__this, method);
}
inline void AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9 (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, Exception_t*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9_gshared)(__this, ___0_exception, method);
}
inline void AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7 (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, int32_t, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7_gshared)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__20_MoveNext_m26873545E3D9D13D5921843237211531BC0559D0 (U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* __this, const RuntimeMethod* method) ;
inline void AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, RuntimeObject*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D_gshared)(__this, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__20_SetStateMachine_m50C5FDCE14DA32D00B9C54457964DA8C1F08213C (U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D* Methods_ZSTD_createDCtx_m9749AC369F86ABB4B09187DF130B1C6B2CDB8F5D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZstdException__ctor_mEEE4CA66301B271759D9148446DC006BC8F4D92D (ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1* __this, int32_t ___0_code, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor_ReleaseUnmanagedResources_mB361975CD457DA97D088BD225C10246FFDE79C96 (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Methods_ZSTD_freeDCtx_mAB23D7B2EAF9F922388FAFE525C44E26E998AD00 (ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D* ___0_dctx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Methods_ZSTD_decompressStream_m37DB23FCE43D6CFE552AC7E7B3EEEFD1541145FF (ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D* ___0_zds, ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* ___1_output, ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* ___2_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_m53833ADCAF719294E5D1DA13B067E31472C762F9 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Methods_ZSTD_isError_mB340D387777112FEC323625775D08A7B30313450 (uintptr_t ___0_code, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Methods_ZSTD_getErrorName_m501E3BDB1B0B39566D8FE6C3B2130B18FF2DBFC4 (uintptr_t ___0_code, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowException_mC30FF384648BDD8FCD6C4251684B517C2F99D268 (uintptr_t ___0_returnValue, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___0_hglobal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_MemoryCopy_m6D886A0A1E11D7C00FD36A4CD0930BA9DC715C7F (void* ___0_source, void* ___1_destination, uint64_t ___2_destinationSizeInBytes, uint64_t ___3_sourceBytesToCopy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void algo_time_t__ctor_mF68C12610BF93A2727A38E265A945BB64B91234A (algo_time_t_tA71FCBF3E097CDAD66262D9628EB1985670362C4* __this, uint32_t ___0_tableTime, uint32_t ___1_decode256Time, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void buffer_s__ctor_mEDF95AE8650FAEEB9E1FA68840AB7F94B0C935FE (buffer_s_t54EBBFFA9598D43B559A84B057AD0BF664CE07BA* __this, void* ___0_start, uintptr_t ___1_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FASTCOVER_accel_t__ctor_mDC7B1C66B8EAE5DBE9DDB91C8BF289D966F24A4C (FASTCOVER_accel_t_t27A703CC1BA9FD6ED9F2ACF714EE2FB4E6FA4ABD* __this, uint32_t ___0_finalize, uint32_t ___1_skip, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void range_t__ctor_m97118DCA3B34BD28325469A000E3338175F48813 (range_t_t4B0B895F0D41EA59A669D782E6F37D2E41498B5A* __this, void* ___0_start, uintptr_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rawSeqStore_t__ctor_mC6D196A8FE984D4E81B4843F91ED96A97B76DC0B (rawSeqStore_t_tD74D85B0204BCC997639F5FCF10C6B55FFC3BE6B* __this, rawSeq_tA340213B43F955E1913AD36E0F35C2F3D12AAE02* ___0_seq, uintptr_t ___1_pos, uintptr_t ___2_posInSequence, uintptr_t ___3_size, uintptr_t ___4_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void roundBuff_t__ctor_mB77FAD40144CC8E7FA985B4ABFE242EA4AEE7DE1 (roundBuff_t_t96B695500C6B1E53CF98E32227CDAD8DC922E15F* __this, uint8_t* ___0_buffer, uintptr_t ___1_capacity, uintptr_t ___2_pos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZSTD_compressionParameters__ctor_m969AF739468F3A729A35C47C6276C82585F77A8B (ZSTD_compressionParameters_t0FA603612ECCC1F72BDB653ED4E58EF152D93E0C* __this, uint32_t ___0_windowLog, uint32_t ___1_chainLog, uint32_t ___2_hashLog, uint32_t ___3_searchLog, uint32_t ___4_minMatch, uint32_t ___5_targetLength, int32_t ___6_strategy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZSTD_customMem__ctor_mD6DD0260090AA774131BA5EAEE509B6CBB799268 (ZSTD_customMem_t39C80B0D96D2ED78A882EA71088AE7517DFC7BC6* __this, void* ___0_customAlloc, void* ___1_customFree, void* ___2_opaque, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZSTD_seqSymbol__ctor_m27DD921BAF1F2400EAC06E64F856474ABDAEEF4E (ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B* __this, uint16_t ___0_nextState, uint8_t ___1_nbAdditionalBits, uint8_t ___2_nbBits, uint32_t ___3_baseValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeHelper_malloc_mCC908C6E5DE0BA0DF8B7E9358EB71FC71DC1A365_inline (uint32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A_inline (void* ___0_destination, void* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_mCB561E1D151F158556323F272B0D0DCA2196ED26 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_mCB561E1D151F158556323F272B0D0DCA2196ED26_gshared)(__this, ___0_stateMachine, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline)(__this, ___0_start, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78696
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m97A3C559BC8CE420E51B4CD872F1EEAF0634DA5C (EmbeddedAttribute_t4AD8808DB460AA96FC8941021F08CA93FE4A88A3* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78697
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m760A5FD4873A1C47FD4E86592E078F648C93AAFF (IsUnmanagedAttribute_t42EC11EF01CA5D066C3F0C7898B63FD0AC6AAC27* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78698
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeIntegerAttribute__ctor_m19B9659FB3A12147295718C9A147970C92BB5A66 (NativeIntegerAttribute_t67D4B65865505089F4F79BFD064B59504EBF8BD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)1);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)1);
		__this->___TransformFlags = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TransformFlags), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78699
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipLocalsInitAttribute__ctor_m307F0A4E63136122BB409ED53552528CDCF8736C (SkipLocalsInitAttribute_tC789F2CD3DA3EC9BC3C0CF26AF2F8464C3706C36* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78700
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitOperations_Log2_mB47C06FDBEA9B294DC07111AEA78779D3AC63316 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_0|1));
		uint32_t L_1 = ___0_value;
		uint32_t L_2 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_1|((int32_t)((uint32_t)L_2>>1))));
		uint32_t L_3 = ___0_value;
		uint32_t L_4 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_3|((int32_t)((uint32_t)L_4>>2))));
		uint32_t L_5 = ___0_value;
		uint32_t L_6 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_5|((int32_t)((uint32_t)L_6>>4))));
		uint32_t L_7 = ___0_value;
		uint32_t L_8 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_7|((int32_t)((uint32_t)L_8>>8))));
		uint32_t L_9 = ___0_value;
		uint32_t L_10 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_9|((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		il2cpp_codegen_runtime_class_init_inline(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		uint8_t* L_11 = ((BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_StaticFields*)il2cpp_codegen_static_fields_for(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var))->___Log2DeBruijn;
		uint32_t L_12 = ___0_value;
		int32_t L_13 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)130329821)))>>((int32_t)27)))))));
		return L_13;
	}
}
// Method Definition Index: 78701
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitOperations_TrailingZeroCount_m661217BE5FA61113655BFF30B02419B7F633D474 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return ((int32_t)32);
	}

IL_0006:
	{
		il2cpp_codegen_runtime_class_init_inline(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		uint8_t* L_1 = ((BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_StaticFields*)il2cpp_codegen_static_fields_for(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var))->___TrailingZeroCountDeBruijn;
		uint32_t L_2 = ___0_value;
		uint32_t L_3 = ___0_value;
		int32_t L_4 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_2&((-((int32_t)L_3))))), ((int32_t)125613361)))>>((int32_t)27)))))));
		return L_4;
	}
}
// Method Definition Index: 78702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitOperations_TrailingZeroCount_m7CB2AB39E2B37F0D78002865EC79217196E9DA56 (uint64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint64_t L_0 = ___0_value;
		V_0 = ((int32_t)(uint32_t)L_0);
		uint32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		uint64_t L_2 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = BitOperations_TrailingZeroCount_m661217BE5FA61113655BFF30B02419B7F633D474_inline(((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))), NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)32), L_3));
	}

IL_0014:
	{
		uint32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = BitOperations_TrailingZeroCount_m661217BE5FA61113655BFF30B02419B7F633D474_inline(L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 78703
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitOperations_RotateLeft_m19604B570643F6F132AD4DB765AD213833FA0002 (uint64_t ___0_value, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		int32_t L_1 = ___1_offset;
		uint64_t L_2 = ___0_value;
		int32_t L_3 = ___1_offset;
		return ((int64_t)(((int64_t)((int64_t)L_0<<((int32_t)(L_1&((int32_t)63)))))|((int64_t)((uint64_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_3))&((int32_t)63)))))));
	}
}
// Method Definition Index: 78704
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitOperations_RotateRight_mAC56B953E8FE526533DE9D156AB89C61D393FEC1 (uint32_t ___0_value, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		int32_t L_1 = ___1_offset;
		uint32_t L_2 = ___0_value;
		int32_t L_3 = ___1_offset;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))|((int32_t)((int32_t)L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// Method Definition Index: 78705
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitOperations_RotateRight_m3A82E3F264539811838A29FAB8E6C4B298733533 (uint64_t ___0_value, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		int32_t L_1 = ___1_offset;
		uint64_t L_2 = ___0_value;
		int32_t L_3 = ___1_offset;
		return ((int64_t)(((int64_t)((uint64_t)L_0>>((int32_t)(L_1&((int32_t)63)))))|((int64_t)((int64_t)L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_3))&((int32_t)63)))))));
	}
}
// Method Definition Index: 78706
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitOperations_LeadingZeroCount_mCC89863CA332F4C2DC790602888B02B3F97FF961 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return ((int32_t)32);
	}

IL_0006:
	{
		uint32_t L_1 = ___0_value;
		uint32_t L_2 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_1|((int32_t)((uint32_t)L_2>>1))));
		uint32_t L_3 = ___0_value;
		uint32_t L_4 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_3|((int32_t)((uint32_t)L_4>>2))));
		uint32_t L_5 = ___0_value;
		uint32_t L_6 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_5|((int32_t)((uint32_t)L_6>>4))));
		uint32_t L_7 = ___0_value;
		uint32_t L_8 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_7|((int32_t)((uint32_t)L_8>>8))));
		uint32_t L_9 = ___0_value;
		uint32_t L_10 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_9|((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		il2cpp_codegen_runtime_class_init_inline(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		uint8_t* L_11 = ((BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_StaticFields*)il2cpp_codegen_static_fields_for(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var))->___Log2DeBruijn;
		uint32_t L_12 = ___0_value;
		int32_t L_13 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)130329821)))>>((int32_t)27)))))));
		return ((int32_t)(((int32_t)31)^L_13));
	}
}
// Method Definition Index: 78707
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitOperations_LeadingZeroCount_m1D32F35C1292393AFD4B420ECEDB0CD598784288 (uint64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint64_t L_0 = ___0_value;
		V_0 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_0>>((int32_t)32))));
		uint32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		uint64_t L_2 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = BitOperations_LeadingZeroCount_mCC89863CA332F4C2DC790602888B02B3F97FF961_inline(((int32_t)(uint32_t)L_2), NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)32), L_3));
	}

IL_0014:
	{
		uint32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = BitOperations_LeadingZeroCount_mCC89863CA332F4C2DC790602888B02B3F97FF961_inline(L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 78708
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitOperations__cctor_m534EE30957A408BA45DAB0DBC4B08F7787E7A58C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tE8ADCDD5E555782EA16B0D83850F0F640D48C848____3BF63951626584EB1653F9B8DBB590A5EE1EAE1135A904B9317C3773896DF076_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tE8ADCDD5E555782EA16B0D83850F0F640D48C848____4BCD43D478B9229AB7A13406353712C7944B60348C36B4D0E6B789D10F697652_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHelper_GetArrayPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF8E70FC0E4E1F7746BD18EC98F55B1D93F53FFF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tE8ADCDD5E555782EA16B0D83850F0F640D48C848____3BF63951626584EB1653F9B8DBB590A5EE1EAE1135A904B9317C3773896DF076_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		uint8_t* L_3;
		L_3 = UnsafeHelper_GetArrayPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF8E70FC0E4E1F7746BD18EC98F55B1D93F53FFF2_inline(L_1, UnsafeHelper_GetArrayPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF8E70FC0E4E1F7746BD18EC98F55B1D93F53FFF2_RuntimeMethod_var);
		((BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_StaticFields*)il2cpp_codegen_static_fields_for(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var))->___TrailingZeroCountDeBruijn = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tE8ADCDD5E555782EA16B0D83850F0F640D48C848____4BCD43D478B9229AB7A13406353712C7944B60348C36B4D0E6B789D10F697652_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		uint8_t* L_7;
		L_7 = UnsafeHelper_GetArrayPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF8E70FC0E4E1F7746BD18EC98F55B1D93F53FFF2_inline(L_5, UnsafeHelper_GetArrayPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF8E70FC0E4E1F7746BD18EC98F55B1D93F53FFF2_RuntimeMethod_var);
		((BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_StaticFields*)il2cpp_codegen_static_fields_for(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var))->___Log2DeBruijn = L_7;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78709
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream__ctor_mC88235D55B0355458D77E698B4346C197E04CE7B (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_bufferSize, bool ___2_checkEndOfStream, bool ___3_leaveOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decompressor_tD5B8F289D15B325087615896699694454B25ED8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* L_1 = (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F*)il2cpp_codegen_object_new(Decompressor_tD5B8F289D15B325087615896699694454B25ED8F_il2cpp_TypeInfo_var);
		Decompressor__ctor_mA53C7276B2E2376FA75C1C3F60D6918170FF5AA8(L_1, NULL);
		int32_t L_2 = ___1_bufferSize;
		bool L_3 = ___2_checkEndOfStream;
		bool L_4 = ___3_leaveOpen;
		DecompressionStream__ctor_m010B775356FE26A3B9F8A1B2A6E7FB2B8A31E2B3(__this, L_0, L_1, L_2, L_3, (bool)0, L_4, NULL);
		return;
	}
}
// Method Definition Index: 78710
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream__ctor_m010B775356FE26A3B9F8A1B2A6E7FB2B8A31E2B3 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* ___1_decompressor, int32_t ___2_bufferSize, bool ___3_checkEndOfStream, bool ___4_preserveDecompressor, bool ___5_leaveOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* G_B8_0 = NULL;
	DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* G_B9_1 = NULL;
	{
		__this->___contextDrained = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream__ctor_m010B775356FE26A3B9F8A1B2A6E7FB2B8A31E2B3_RuntimeMethod_var)));
	}

IL_001b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_2);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7, L_2);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEDCF37206A03E4CE4438C517B164F328C678509)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream__ctor_m010B775356FE26A3B9F8A1B2A6E7FB2B8A31E2B3_RuntimeMethod_var)));
	}

IL_0033:
	{
		int32_t L_5 = ___2_bufferSize;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream__ctor_m010B775356FE26A3B9F8A1B2A6E7FB2B8A31E2B3_RuntimeMethod_var)));
	}

IL_0042:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___0_stream;
		__this->___innerStream = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___innerStream), (void*)L_7);
		Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* L_8 = ___1_decompressor;
		__this->___decompressor = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___decompressor), (void*)L_8);
		bool L_9 = ___4_preserveDecompressor;
		__this->___preserveDecompressor = L_9;
		bool L_10 = ___5_leaveOpen;
		__this->___leaveOpen = L_10;
		bool L_11 = ___3_checkEndOfStream;
		__this->___checkEndOfStream = L_11;
		int32_t L_12 = ___2_bufferSize;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			G_B8_0 = __this;
			goto IL_007a;
		}
		G_B7_0 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		uintptr_t L_13;
		L_13 = Methods_ZSTD_DStreamInSize_m036E7B8C04997630B3DE4B059976B082B6D9CD6B(NULL);
		uintptr_t L_14;
		L_14 = ThrowHelper_EnsureZstdSuccess_m6E804CAFC91C95C063962542B2E6759F050F5508(L_13, NULL);
		G_B9_0 = ((int32_t)L_14);
		G_B9_1 = G_B7_0;
		goto IL_007b;
	}

IL_007a:
	{
		int32_t L_15 = ___2_bufferSize;
		G_B9_0 = L_15;
		G_B9_1 = G_B8_0;
	}

IL_007b:
	{
		NullCheck(G_B9_1);
		G_B9_1->___inputBufferSize = G_B9_0;
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_16;
		L_16 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		int32_t L_17 = __this->___inputBufferSize;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4, L_16, L_17);
		__this->___inputBuffer = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputBuffer), (void*)L_18);
		il2cpp_codegen_initobj((&V_0), sizeof(ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0));
		int32_t L_19 = __this->___inputBufferSize;
		(&V_0)->___pos = ((intptr_t)L_19);
		int32_t L_20 = __this->___inputBufferSize;
		(&V_0)->___size = ((intptr_t)L_20);
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0 L_21 = V_0;
		__this->___input = L_21;
		return;
	}
}
// Method Definition Index: 78711
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_Finalize_m8C4C5E3D37E5A9D28C50BC3D67413356C3C1025C (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			VirtualActionInvoker1< bool >::Invoke(20, __this, (bool)0);
			goto IL_0010;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// Method Definition Index: 78712
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_Dispose_mC6C5DCB0A509C7F72D81D47C80EE07DEE805627E (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* L_0 = __this->___decompressor;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = __this->___preserveDecompressor;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* L_2 = __this->___decompressor;
		NullCheck(L_2);
		Decompressor_Dispose_mE6773116457662AE30BFFD293FF81F6B39838D82(L_2, NULL);
	}

IL_001c:
	{
		__this->___decompressor = (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___decompressor), (void*)(Decompressor_tD5B8F289D15B325087615896699694454B25ED8F*)NULL);
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_3;
		L_3 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___inputBuffer;
		NullCheck(L_3);
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(5, L_3, L_4, (bool)0);
		bool L_5 = __this->___leaveOpen;
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___innerStream;
		NullCheck(L_6);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_6, NULL);
	}

IL_0047:
	{
		return;
	}
}
// Method Definition Index: 78713
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecompressionStream_Read_m6D23349ACA36F5F15A5B33D5E3619EFB7C632315 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_3), L_0, L_1, L_2, Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(33, __this, L_3);
		return L_4;
	}
}
// Method Definition Index: 78714
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecompressionStream_Read_mD980BDD1001EB912C0F4EFA6631B1E856C650627 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	uintptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	uintptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		DecompressionStream_EnsureNotDisposed_m82536AB7CA15A930030FED19989075C4F6FD902B(__this, NULL);
		int32_t L_0;
		L_0 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_buffer), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89));
		(&V_1)->___pos = ((intptr_t)0);
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_buffer), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		(&V_1)->___size = ((intptr_t)L_1);
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 L_2 = V_1;
		V_0 = L_2;
		goto IL_0092;
	}

IL_0035:
	{
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_3 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)(&__this->___input);
		uintptr_t L_4 = L_3->___pos;
		V_3 = L_4;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5 = ___0_buffer;
		uintptr_t L_6;
		L_6 = DecompressionStream_DecompressStream_m0E36631BF573E7487429099467A3D9D649BEC707(__this, (&V_0), L_5, NULL);
		V_4 = L_6;
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 L_7 = V_0;
		uintptr_t L_8 = L_7.___pos;
		if ((!(((uintptr_t)L_8) <= ((uintptr_t)((intptr_t)0)))))
		{
			goto IL_0064;
		}
	}
	{
		uintptr_t L_9 = V_3;
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_10 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)(&__this->___input);
		uintptr_t L_11 = L_10->___pos;
		if ((((intptr_t)L_9) == ((intptr_t)L_11)))
		{
			goto IL_006c;
		}
	}

IL_0064:
	{
		uintptr_t L_12 = V_4;
		__this->___lastDecompressResult = L_12;
	}

IL_006c:
	{
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 L_13 = V_0;
		uintptr_t L_14 = L_13.___pos;
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 L_15 = V_0;
		uintptr_t L_16 = L_15.___size;
		__this->___contextDrained = (bool)((!(((uintptr_t)L_14) >= ((uintptr_t)L_16)))? 1 : 0);
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 L_17 = V_0;
		uintptr_t L_18 = L_17.___pos;
		if ((!(((uintptr_t)L_18) > ((uintptr_t)((intptr_t)0)))))
		{
			goto IL_0092;
		}
	}
	{
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 L_19 = V_0;
		uintptr_t L_20 = L_19.___pos;
		return ((int32_t)L_20);
	}

IL_0092:
	{
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_21 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)(&__this->___input);
		uintptr_t L_22 = L_21->___pos;
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_23 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)(&__this->___input);
		uintptr_t L_24 = L_23->___size;
		if ((!(((uintptr_t)L_22) >= ((uintptr_t)L_24))))
		{
			goto IL_0035;
		}
	}
	{
		bool L_25 = __this->___contextDrained;
		if (!L_25)
		{
			goto IL_0035;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_26 = __this->___innerStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___inputBuffer;
		int32_t L_28 = __this->___inputBufferSize;
		NullCheck(L_26);
		int32_t L_29;
		L_29 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32, L_26, L_27, 0, L_28);
		int32_t L_30 = L_29;
		V_2 = L_30;
		if (L_30)
		{
			goto IL_00eb;
		}
	}
	{
		bool L_31 = __this->___checkEndOfStream;
		if (!L_31)
		{
			goto IL_00e9;
		}
	}
	{
		uintptr_t L_32 = __this->___lastDecompressResult;
		if (!L_32)
		{
			goto IL_00e9;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_33 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8805F3D3C146BF682A73B1A3ED1C4294C8C98E58)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_Read_mD980BDD1001EB912C0F4EFA6631B1E856C650627_RuntimeMethod_var)));
	}

IL_00e9:
	{
		return 0;
	}

IL_00eb:
	{
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_34 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)(&__this->___input);
		int32_t L_35 = V_2;
		L_34->___size = ((intptr_t)L_35);
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_36 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)(&__this->___input);
		L_36->___pos = ((intptr_t)0);
		goto IL_0092;
	}
}
// Method Definition Index: 78715
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* DecompressionStream_ReadAsync_m3913C7BBF7334C1BE73AFBC98DE4005BBB097BF8 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_inline((&L_3), L_0, L_1, L_2, Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___3_cancellationToken;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_5;
		L_5 = VirtualFuncInvoker2< ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(25, __this, L_3, L_4);
		V_0 = L_5;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_6;
		L_6 = ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1((&V_0), ValueTask_1_AsTask_m8EE16A07AEE04F342242F2A0490F5EE7323AE5B1_RuntimeMethod_var);
		return L_6;
	}
}
// Method Definition Index: 78716
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 DecompressionStream_ReadAsync_mDE9F2574CC6E1ED2D4611D7E47049D509E5D4560 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m2FC58AE60948818D3134F32B502343786ED320E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 L_0;
		L_0 = AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E(AsyncValueTaskMethodBuilder_1_Create_m90C5E6D6FD44313AF9B3AE8C56B0253B73C8215E_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder))->____methodBuilder))->___m_coreState))->___m_stateMachine), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder))->____methodBuilder))->___m_coreState))->___m_defaultContextAction), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder))->____methodBuilder))->___m_task), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_1 = ___0_buffer;
		(&V_0)->___buffer = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___buffer))->____object), (void*)NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___1_cancellationToken;
		(&V_0)->___cancellationToken = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken))->____source), (void*)NULL);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_3 = (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*)(&(&V_0)->___U3CU3Et__builder);
		AsyncValueTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m2FC58AE60948818D3134F32B502343786ED320E9_inline(L_3, (&V_0), AsyncValueTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m2FC58AE60948818D3134F32B502343786ED320E9_RuntimeMethod_var);
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_4 = (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*)(&(&V_0)->___U3CU3Et__builder);
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_5;
		L_5 = AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3(L_4, AsyncValueTaskMethodBuilder_1_get_Task_mE8F30EAC01A13C6860AE916AED97280DEDD875D3_RuntimeMethod_var);
		return L_5;
	}
}
// Method Definition Index: 78717
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t DecompressionStream_DecompressStream_m0E36631BF573E7487429099467A3D9D649BEC707 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* ___0_output, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_outputBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___inputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		uint8_t* L_4;
		L_4 = Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C((&___1_outputBuffer), Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		V_3 = L_4;
		uint8_t* L_5 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_6 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)(&__this->___input);
		uint8_t* L_7 = V_0;
		L_6->___src = (void*)L_7;
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_8 = ___0_output;
		uint8_t* L_9 = V_2;
		L_8->___dst = (void*)L_9;
		Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* L_10 = __this->___decompressor;
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_11 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)(&__this->___input);
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_12 = ___0_output;
		NullCheck(L_10);
		uintptr_t L_13;
		L_13 = Decompressor_DecompressStream_m88A8A7A2C9AB0B6F4A94EF7384D49A3FF8F72411(L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// Method Definition Index: 78718
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecompressionStream_get_CanRead_m554FB4C6641E6F760FF55A712E4BBDE9E49BE5C5 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// Method Definition Index: 78719
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecompressionStream_get_CanSeek_m18F70E9E8CC413432A0491182AE10F316B000967 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 78720
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecompressionStream_get_CanWrite_mCE52D85DA38052B274227AE9EC7BD33BF2549E07 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 78721
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DecompressionStream_get_Length_mA7E384893E061FE9566298642207CFDC2D862363 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_get_Length_mA7E384893E061FE9566298642207CFDC2D862363_RuntimeMethod_var)));
	}
}
// Method Definition Index: 78722
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DecompressionStream_get_Position_m5991AD9E11CED4860A70F82609EB7B4A65CB624E (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_get_Position_m5991AD9E11CED4860A70F82609EB7B4A65CB624E_RuntimeMethod_var)));
	}
}
// Method Definition Index: 78723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_set_Position_m6F39E87A28B8A4F2A1F035A224D5C6F681EE21B3 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_set_Position_m6F39E87A28B8A4F2A1F035A224D5C6F681EE21B3_RuntimeMethod_var)));
	}
}
// Method Definition Index: 78724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_Flush_m5B1E5F188036E7AEF342522C089B30C04B4265C2 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_Flush_m5B1E5F188036E7AEF342522C089B30C04B4265C2_RuntimeMethod_var)));
	}
}
// Method Definition Index: 78725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DecompressionStream_Seek_m345781B91F94952A1CA52ADA99A17E0EF92C43C4 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_Seek_m345781B91F94952A1CA52ADA99A17E0EF92C43C4_RuntimeMethod_var)));
	}
}
// Method Definition Index: 78726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_SetLength_m4A941A697DBFDE3558B3535B1D4CA221CA8E1408 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_SetLength_m4A941A697DBFDE3558B3535B1D4CA221CA8E1408_RuntimeMethod_var)));
	}
}
// Method Definition Index: 78727
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_Write_m63C7B9A0BF5B53554E3AB0F25046F3B032990A26 (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_Write_m63C7B9A0BF5B53554E3AB0F25046F3B032990A26_RuntimeMethod_var)));
	}
}
// Method Definition Index: 78728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_EnsureNotDisposed_m82536AB7CA15A930030FED19989075C4F6FD902B (DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* __this, const RuntimeMethod* method) 
{
	{
		Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* L_0 = __this->___decompressor;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D5F51C341264B91EFC88E49B7FF6B69E238B25A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_EnsureNotDisposed_m82536AB7CA15A930030FED19989075C4F6FD902B_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78729
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__20_MoveNext_m26873545E3D9D13D5921843237211531BC0559D0 (U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m755841EBC940E8ACABE0248C0B2806C89ACD0E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* V_1 = NULL;
	int32_t V_2 = 0;
	ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uintptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	uintptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 V_7;
	memset((&V_7), 0, sizeof(V_7));
	ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_016b_1;
			}
		}
		{
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_3 = V_1;
			NullCheck(L_3);
			DecompressionStream_EnsureNotDisposed_m82536AB7CA15A930030FED19989075C4F6FD902B(L_3, NULL);
			Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->___buffer);
			int32_t L_5;
			L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_002e_1;
			}
		}
		{
			V_2 = 0;
			goto IL_01ec;
		}

IL_002e_1:
		{
			il2cpp_codegen_initobj((&V_3), sizeof(ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89));
			(&V_3)->___pos = ((intptr_t)0);
			Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_6 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->___buffer);
			int32_t L_7;
			L_7 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_6, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
			(&V_3)->___size = ((intptr_t)L_7);
			ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89 L_8 = V_3;
			__this->___U3CoutputU3E5__2 = L_8;
			goto IL_00e9_1;
		}

IL_005e_1:
		{
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_9 = V_1;
			NullCheck(L_9);
			ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0 L_10 = L_9->___input;
			uintptr_t L_11 = L_10.___pos;
			V_5 = L_11;
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_12 = V_1;
			ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_13 = (ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89*)(&__this->___U3CoutputU3E5__2);
			Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_14 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->___buffer);
			Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_15;
			L_15 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_14, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
			NullCheck(L_12);
			uintptr_t L_16;
			L_16 = DecompressionStream_DecompressStream_m0E36631BF573E7487429099467A3D9D649BEC707(L_12, L_13, L_15, NULL);
			V_6 = L_16;
			ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_17 = (ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89*)(&__this->___U3CoutputU3E5__2);
			uintptr_t L_18 = L_17->___pos;
			if ((!(((uintptr_t)L_18) <= ((uintptr_t)((intptr_t)0)))))
			{
				goto IL_00a2_1;
			}
		}
		{
			uintptr_t L_19 = V_5;
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_20 = V_1;
			NullCheck(L_20);
			ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0 L_21 = L_20->___input;
			uintptr_t L_22 = L_21.___pos;
			if ((((intptr_t)L_19) == ((intptr_t)L_22)))
			{
				goto IL_00aa_1;
			}
		}

IL_00a2_1:
		{
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_23 = V_1;
			uintptr_t L_24 = V_6;
			NullCheck(L_23);
			L_23->___lastDecompressResult = L_24;
		}

IL_00aa_1:
		{
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_25 = V_1;
			ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_26 = (ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89*)(&__this->___U3CoutputU3E5__2);
			uintptr_t L_27 = L_26->___pos;
			ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_28 = (ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89*)(&__this->___U3CoutputU3E5__2);
			uintptr_t L_29 = L_28->___size;
			NullCheck(L_25);
			L_25->___contextDrained = (bool)((!(((uintptr_t)L_27) >= ((uintptr_t)L_29)))? 1 : 0);
			ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_30 = (ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89*)(&__this->___U3CoutputU3E5__2);
			uintptr_t L_31 = L_30->___pos;
			if ((!(((uintptr_t)L_31) > ((uintptr_t)((intptr_t)0)))))
			{
				goto IL_00e9_1;
			}
		}
		{
			ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_32 = (ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89*)(&__this->___U3CoutputU3E5__2);
			uintptr_t L_33 = L_32->___pos;
			V_2 = ((int32_t)L_33);
			goto IL_01ec;
		}

IL_00e9_1:
		{
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_34 = V_1;
			NullCheck(L_34);
			ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0 L_35 = L_34->___input;
			uintptr_t L_36 = L_35.___pos;
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_37 = V_1;
			NullCheck(L_37);
			ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0 L_38 = L_37->___input;
			uintptr_t L_39 = L_38.___size;
			if ((!(((uintptr_t)L_36) >= ((uintptr_t)L_39))))
			{
				goto IL_005e_1;
			}
		}
		{
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_40 = V_1;
			NullCheck(L_40);
			bool L_41 = L_40->___contextDrained;
			if (!L_41)
			{
				goto IL_005e_1;
			}
		}
		{
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_42 = V_1;
			NullCheck(L_42);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_43 = L_42->___innerStream;
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_44 = V_1;
			NullCheck(L_44);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = L_44->___inputBuffer;
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_46 = V_1;
			NullCheck(L_46);
			int32_t L_47 = L_46->___inputBufferSize;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_48 = __this->___cancellationToken;
			NullCheck(L_43);
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_49;
			L_49 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(24, L_43, L_45, 0, L_47, L_48);
			NullCheck(L_49);
			ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A L_50;
			L_50 = Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209(L_49, (bool)0, Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_RuntimeMethod_var);
			V_8 = L_50;
			ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_51;
			L_51 = ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_inline((&V_8), ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_RuntimeMethod_var);
			V_7 = L_51;
			bool L_52;
			L_52 = ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3((&V_7), ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_RuntimeMethod_var);
			if (L_52)
			{
				goto IL_0188_1;
			}
		}
		{
			int32_t L_53 = 0;
			V_0 = L_53;
			__this->___U3CU3E1__state = L_53;
			ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_54 = V_7;
			__this->___U3CU3Eu__1 = L_54;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1))->___m_task), (void*)NULL);
			AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_55 = (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*)(&__this->___U3CU3Et__builder);
			AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m755841EBC940E8ACABE0248C0B2806C89ACD0E87(L_55, (&V_7), __this, AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m755841EBC940E8ACABE0248C0B2806C89ACD0E87_RuntimeMethod_var);
			goto IL_0200;
		}

IL_016b_1:
		{
			ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_56 = __this->___U3CU3Eu__1;
			V_7 = L_56;
			ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* L_57 = (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_57, sizeof(ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80));
			int32_t L_58 = (-1);
			V_0 = L_58;
			__this->___U3CU3E1__state = L_58;
		}

IL_0188_1:
		{
			int32_t L_59;
			L_59 = ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC((&V_7), ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_RuntimeMethod_var);
			int32_t L_60 = L_59;
			V_4 = L_60;
			if (L_60)
			{
				goto IL_01b3_1;
			}
		}
		{
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_61 = V_1;
			NullCheck(L_61);
			bool L_62 = L_61->___checkEndOfStream;
			if (!L_62)
			{
				goto IL_01af_1;
			}
		}
		{
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_63 = V_1;
			NullCheck(L_63);
			uintptr_t L_64 = L_63->___lastDecompressResult;
			if (!L_64)
			{
				goto IL_01af_1;
			}
		}
		{
			EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_65 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
			EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_65, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8805F3D3C146BF682A73B1A3ED1C4294C8C98E58)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadAsyncU3Ed__20_MoveNext_m26873545E3D9D13D5921843237211531BC0559D0_RuntimeMethod_var)));
		}

IL_01af_1:
		{
			V_2 = 0;
			goto IL_01ec;
		}

IL_01b3_1:
		{
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_66 = V_1;
			NullCheck(L_66);
			ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_67 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)(&L_66->___input);
			int32_t L_68 = V_4;
			L_67->___size = ((intptr_t)L_68);
			DecompressionStream_tFE9394BFB5B356F5EA15BD39556F7B7A935DDA66* L_69 = V_1;
			NullCheck(L_69);
			ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_70 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)(&L_69->___input);
			L_70->___pos = ((intptr_t)0);
			goto IL_00e9_1;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01d3;
		}
		throw e;
	}

CATCH_01d3:
	{
		Exception_t* L_71 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_9 = L_71;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_72 = (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*)(&__this->___U3CU3Et__builder);
		Exception_t* L_73 = V_9;
		AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9(L_72, L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncValueTaskMethodBuilder_1_SetException_mC02E4660E8F62965805B5F5F4BFB2A18A5513AE9_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0200;
	}

IL_01ec:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_74 = (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*)(&__this->___U3CU3Et__builder);
		int32_t L_75 = V_2;
		AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7(L_74, L_75, AsyncValueTaskMethodBuilder_1_SetResult_mB979FA77C610CA56DDA62E7996D8C527E00F91E7_RuntimeMethod_var);
	}

IL_0200:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAsyncU3Ed__20_MoveNext_m26873545E3D9D13D5921843237211531BC0559D0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1*>(__this + _offset);
	U3CReadAsyncU3Ed__20_MoveNext_m26873545E3D9D13D5921843237211531BC0559D0(_thisAdjusted, method);
}
// Method Definition Index: 78730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__20_SetStateMachine_m50C5FDCE14DA32D00B9C54457964DA8C1F08213C (U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* L_0 = (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D(L_0, L_1, AsyncValueTaskMethodBuilder_1_SetStateMachine_m8B8B5736CE1E2528BDFDAE1C72E206C8D530CB5D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAsyncU3Ed__20_SetStateMachine_m50C5FDCE14DA32D00B9C54457964DA8C1F08213C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1*>(__this + _offset);
	U3CReadAsyncU3Ed__20_SetStateMachine_m50C5FDCE14DA32D00B9C54457964DA8C1F08213C(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor__ctor_mA53C7276B2E2376FA75C1C3F60D6918170FF5AA8 (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D* L_0;
		L_0 = Methods_ZSTD_createDCtx_m9749AC369F86ABB4B09187DF130B1C6B2CDB8F5D(NULL);
		__this->___dctx = L_0;
		ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D* L_1 = __this->___dctx;
		if ((!(((uintptr_t)L_1) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0027;
		}
	}
	{
		ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1* L_2 = (ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1_il2cpp_TypeInfo_var)));
		ZstdException__ctor_mEEE4CA66301B271759D9148446DC006BC8F4D92D(L_2, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral65FF4FAD1F15BBF8D6F3492DA2EB0527907358F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decompressor__ctor_mA53C7276B2E2376FA75C1C3F60D6918170FF5AA8_RuntimeMethod_var)));
	}

IL_0027:
	{
		return;
	}
}
// Method Definition Index: 78732
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor_Finalize_m95FF4270D3C8F43D160776E9EE2220D37B17E4A7 (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			Decompressor_ReleaseUnmanagedResources_mB361975CD457DA97D088BD225C10246FFDE79C96(__this, NULL);
			goto IL_000f;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
// Method Definition Index: 78733
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor_ReleaseUnmanagedResources_mB361975CD457DA97D088BD225C10246FFDE79C96 (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D* L_0 = __this->___dctx;
		if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_001e;
		}
	}
	{
		ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D* L_1 = __this->___dctx;
		il2cpp_codegen_runtime_class_init_inline(Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		uintptr_t L_2;
		L_2 = Methods_ZSTD_freeDCtx_mAB23D7B2EAF9F922388FAFE525C44E26E998AD00(L_1, NULL);
		__this->___dctx = (ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D*)((uintptr_t)0);
	}

IL_001e:
	{
		return;
	}
}
// Method Definition Index: 78734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor_Dispose_mE6773116457662AE30BFFD293FF81F6B39838D82 (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decompressor_ReleaseUnmanagedResources_mB361975CD457DA97D088BD225C10246FFDE79C96(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// Method Definition Index: 78735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Decompressor_DecompressStream_m88A8A7A2C9AB0B6F4A94EF7384D49A3FF8F72411 (Decompressor_tD5B8F289D15B325087615896699694454B25ED8F* __this, ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* ___0_input, ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* ___1_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* V_0 = NULL;
	ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* V_1 = NULL;
	ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* V_2 = NULL;
	ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* V_3 = NULL;
	{
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_0 = ___0_input;
		V_1 = L_0;
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_1 = V_1;
		V_0 = (ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0*)((uintptr_t)L_1);
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_2 = ___1_output;
		V_3 = L_2;
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_3 = V_3;
		V_2 = (ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89*)((uintptr_t)L_3);
		ZSTD_DCtx_s_t56BD5AA3C395191CA714F3CE4FC0ED828102466D* L_4 = __this->___dctx;
		ZSTD_outBuffer_s_tE96F51F9B30413D53AFFB5ED3C0357089D4DAF89* L_5 = V_2;
		ZSTD_inBuffer_s_t9B8A8E629610B6F35F8B18E0FE650235714C01F0* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		uintptr_t L_7;
		L_7 = Methods_ZSTD_decompressStream_m37DB23FCE43D6CFE552AC7E7B3EEEFD1541145FF(L_4, L_5, L_6, NULL);
		uintptr_t L_8;
		L_8 = ThrowHelper_EnsureZstdSuccess_m6E804CAFC91C95C063962542B2E6759F050F5508(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_KeepAlive_m53833ADCAF719294E5D1DA13B067E31472C762F9(__this, NULL);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ThrowHelper_EnsureZstdSuccess_m6E804CAFC91C95C063962542B2E6759F050F5508 (uintptr_t ___0_returnValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0 = ___0_returnValue;
		il2cpp_codegen_runtime_class_init_inline(Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Methods_ZSTD_isError_mB340D387777112FEC323625775D08A7B30313450(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		uintptr_t L_2 = ___0_returnValue;
		uintptr_t L_3 = ___0_returnValue;
		il2cpp_codegen_runtime_class_init_inline(Methods_t429038785C774D0DC949971D03387FF2F295EEA4_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Methods_ZSTD_getErrorName_m501E3BDB1B0B39566D8FE6C3B2130B18FF2DBFC4(L_3, NULL);
		ThrowHelper_ThrowException_mC30FF384648BDD8FCD6C4251684B517C2F99D268(L_2, L_4, NULL);
	}

IL_0014:
	{
		uintptr_t L_5 = ___0_returnValue;
		return L_5;
	}
}
// Method Definition Index: 78737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowException_mC30FF384648BDD8FCD6C4251684B517C2F99D268 (uintptr_t ___0_returnValue, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		uintptr_t L_0 = ___0_returnValue;
		String_t* L_1 = ___1_message;
		ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1* L_2 = (ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1_il2cpp_TypeInfo_var)));
		ZstdException__ctor_mEEE4CA66301B271759D9148446DC006BC8F4D92D(L_2, ((int32_t)((intptr_t)il2cpp_codegen_subtract(((intptr_t)0), (intptr_t)L_0))), L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowException_mC30FF384648BDD8FCD6C4251684B517C2F99D268_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeHelper_malloc_mCC908C6E5DE0BA0DF8B7E9358EB71FC71DC1A365 (uint32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_0, NULL);
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 78739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeHelper_malloc_m39ABA6CD755D8D0E93D330F884C40718B6F21030 (uint64_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___0_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)L_0), NULL);
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 78740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeHelper_free_mE3101BACFA65D14C376F90A2FCD5B67B4C81762A (void* ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___0_ptr;
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_1, NULL);
		return;
	}
}
// Method Definition Index: 78742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeHelper_memmove_m9C1543E19114CFB013F45BC034A0DFF000CD3CFA (void* ___0_destination, void* ___1_source, uint64_t ___2_size, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___1_source;
		void* L_1 = ___0_destination;
		uint64_t L_2 = ___2_size;
		uint64_t L_3 = ___2_size;
		Buffer_MemoryCopy_m6D886A0A1E11D7C00FD36A4CD0930BA9DC715C7F(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZstdException__ctor_mEEE4CA66301B271759D9148446DC006BC8F4D92D (ZstdException_t472E3DD11427DC682CA0C17CC251CF9471E89FA1* __this, int32_t ___0_code, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		int32_t L_1 = ___0_code;
		__this->___U3CCodeU3Ek__BackingField = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 78744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void algo_time_t__ctor_mF68C12610BF93A2727A38E265A945BB64B91234A (algo_time_t_tA71FCBF3E097CDAD66262D9628EB1985670362C4* __this, uint32_t ___0_tableTime, uint32_t ___1_decode256Time, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_tableTime;
		__this->___tableTime = L_0;
		uint32_t L_1 = ___1_decode256Time;
		__this->___decode256Time = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void algo_time_t__ctor_mF68C12610BF93A2727A38E265A945BB64B91234A_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_tableTime, uint32_t ___1_decode256Time, const RuntimeMethod* method)
{
	algo_time_t_tA71FCBF3E097CDAD66262D9628EB1985670362C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<algo_time_t_tA71FCBF3E097CDAD66262D9628EB1985670362C4*>(__this + _offset);
	algo_time_t__ctor_mF68C12610BF93A2727A38E265A945BB64B91234A(_thisAdjusted, ___0_tableTime, ___1_decode256Time, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 79134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void buffer_s__ctor_mEDF95AE8650FAEEB9E1FA68840AB7F94B0C935FE (buffer_s_t54EBBFFA9598D43B559A84B057AD0BF664CE07BA* __this, void* ___0_start, uintptr_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_start;
		__this->___start = L_0;
		uintptr_t L_1 = ___1_capacity;
		__this->___capacity = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void buffer_s__ctor_mEDF95AE8650FAEEB9E1FA68840AB7F94B0C935FE_AdjustorThunk (RuntimeObject* __this, void* ___0_start, uintptr_t ___1_capacity, const RuntimeMethod* method)
{
	buffer_s_t54EBBFFA9598D43B559A84B057AD0BF664CE07BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<buffer_s_t54EBBFFA9598D43B559A84B057AD0BF664CE07BA*>(__this + _offset);
	buffer_s__ctor_mEDF95AE8650FAEEB9E1FA68840AB7F94B0C935FE(_thisAdjusted, ___0_start, ___1_capacity, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 79135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FASTCOVER_accel_t__ctor_mDC7B1C66B8EAE5DBE9DDB91C8BF289D966F24A4C (FASTCOVER_accel_t_t27A703CC1BA9FD6ED9F2ACF714EE2FB4E6FA4ABD* __this, uint32_t ___0_finalize, uint32_t ___1_skip, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_finalize;
		__this->___finalize = L_0;
		uint32_t L_1 = ___1_skip;
		__this->___skip = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void FASTCOVER_accel_t__ctor_mDC7B1C66B8EAE5DBE9DDB91C8BF289D966F24A4C_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_finalize, uint32_t ___1_skip, const RuntimeMethod* method)
{
	FASTCOVER_accel_t_t27A703CC1BA9FD6ED9F2ACF714EE2FB4E6FA4ABD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FASTCOVER_accel_t_t27A703CC1BA9FD6ED9F2ACF714EE2FB4E6FA4ABD*>(__this + _offset);
	FASTCOVER_accel_t__ctor_mDC7B1C66B8EAE5DBE9DDB91C8BF289D966F24A4C(_thisAdjusted, ___0_finalize, ___1_skip, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 79136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void range_t__ctor_m97118DCA3B34BD28325469A000E3338175F48813 (range_t_t4B0B895F0D41EA59A669D782E6F37D2E41498B5A* __this, void* ___0_start, uintptr_t ___1_size, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_start;
		__this->___start = L_0;
		uintptr_t L_1 = ___1_size;
		__this->___size = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void range_t__ctor_m97118DCA3B34BD28325469A000E3338175F48813_AdjustorThunk (RuntimeObject* __this, void* ___0_start, uintptr_t ___1_size, const RuntimeMethod* method)
{
	range_t_t4B0B895F0D41EA59A669D782E6F37D2E41498B5A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<range_t_t4B0B895F0D41EA59A669D782E6F37D2E41498B5A*>(__this + _offset);
	range_t__ctor_m97118DCA3B34BD28325469A000E3338175F48813(_thisAdjusted, ___0_start, ___1_size, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 79137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rawSeqStore_t__ctor_mC6D196A8FE984D4E81B4843F91ED96A97B76DC0B (rawSeqStore_t_tD74D85B0204BCC997639F5FCF10C6B55FFC3BE6B* __this, rawSeq_tA340213B43F955E1913AD36E0F35C2F3D12AAE02* ___0_seq, uintptr_t ___1_pos, uintptr_t ___2_posInSequence, uintptr_t ___3_size, uintptr_t ___4_capacity, const RuntimeMethod* method) 
{
	{
		rawSeq_tA340213B43F955E1913AD36E0F35C2F3D12AAE02* L_0 = ___0_seq;
		__this->___seq = L_0;
		uintptr_t L_1 = ___1_pos;
		__this->___pos = L_1;
		uintptr_t L_2 = ___2_posInSequence;
		__this->___posInSequence = L_2;
		uintptr_t L_3 = ___3_size;
		__this->___size = L_3;
		uintptr_t L_4 = ___4_capacity;
		__this->___capacity = L_4;
		return;
	}
}
IL2CPP_EXTERN_C  void rawSeqStore_t__ctor_mC6D196A8FE984D4E81B4843F91ED96A97B76DC0B_AdjustorThunk (RuntimeObject* __this, rawSeq_tA340213B43F955E1913AD36E0F35C2F3D12AAE02* ___0_seq, uintptr_t ___1_pos, uintptr_t ___2_posInSequence, uintptr_t ___3_size, uintptr_t ___4_capacity, const RuntimeMethod* method)
{
	rawSeqStore_t_tD74D85B0204BCC997639F5FCF10C6B55FFC3BE6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<rawSeqStore_t_tD74D85B0204BCC997639F5FCF10C6B55FFC3BE6B*>(__this + _offset);
	rawSeqStore_t__ctor_mC6D196A8FE984D4E81B4843F91ED96A97B76DC0B(_thisAdjusted, ___0_seq, ___1_pos, ___2_posInSequence, ___3_size, ___4_capacity, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 79138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void roundBuff_t__ctor_mB77FAD40144CC8E7FA985B4ABFE242EA4AEE7DE1 (roundBuff_t_t96B695500C6B1E53CF98E32227CDAD8DC922E15F* __this, uint8_t* ___0_buffer, uintptr_t ___1_capacity, uintptr_t ___2_pos, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_buffer;
		__this->___buffer = L_0;
		uintptr_t L_1 = ___1_capacity;
		__this->___capacity = L_1;
		uintptr_t L_2 = ___2_pos;
		__this->___pos = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void roundBuff_t__ctor_mB77FAD40144CC8E7FA985B4ABFE242EA4AEE7DE1_AdjustorThunk (RuntimeObject* __this, uint8_t* ___0_buffer, uintptr_t ___1_capacity, uintptr_t ___2_pos, const RuntimeMethod* method)
{
	roundBuff_t_t96B695500C6B1E53CF98E32227CDAD8DC922E15F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<roundBuff_t_t96B695500C6B1E53CF98E32227CDAD8DC922E15F*>(__this + _offset);
	roundBuff_t__ctor_mB77FAD40144CC8E7FA985B4ABFE242EA4AEE7DE1(_thisAdjusted, ___0_buffer, ___1_capacity, ___2_pos, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uintptr_t ZSTD_blockCompressor_Invoke_mABA74C111CCEF3450292CD1E3F2B0AC8055BAA5E_Multicast(ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87* __this, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___0_bs, seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5* ___1_seqStore, uint32_t* ___2_rep, void* ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	uintptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87* currentDelegate = reinterpret_cast<ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87*>(delegatesToInvoke[i]);
		typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194*, seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5*, uint32_t*, void*, uintptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_bs, ___1_seqStore, ___2_rep, ___3_src, ___4_srcSize, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
uintptr_t ZSTD_blockCompressor_Invoke_mABA74C111CCEF3450292CD1E3F2B0AC8055BAA5E_OpenInst(ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87* __this, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___0_bs, seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5* ___1_seqStore, uint32_t* ___2_rep, void* ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method)
{
	NullCheck(___0_bs);
	typedef uintptr_t (*FunctionPointerType) (ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194*, seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5*, uint32_t*, void*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_bs, ___1_seqStore, ___2_rep, ___3_src, ___4_srcSize, method);
}
uintptr_t ZSTD_blockCompressor_Invoke_mABA74C111CCEF3450292CD1E3F2B0AC8055BAA5E_OpenStatic(ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87* __this, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___0_bs, seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5* ___1_seqStore, uint32_t* ___2_rep, void* ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194*, seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5*, uint32_t*, void*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_bs, ___1_seqStore, ___2_rep, ___3_src, ___4_srcSize, method);
}
IL2CPP_EXTERN_C  uintptr_t DelegatePInvokeWrapper_ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87 (ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87* __this, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___0_bs, seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5* ___1_seqStore, uint32_t* ___2_rep, void* ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method)
{
	typedef uintptr_t (CDECL *PInvokeFunc)(ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194*, seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5*, uint32_t*, void*, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	uintptr_t returnValue = il2cppPInvokeFunc(___0_bs, ___1_seqStore, ___2_rep, ___3_src, ___4_srcSize);

	return returnValue;
}
// Method Definition Index: 79139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZSTD_blockCompressor__ctor_mF6E7C2613366576D321018DBDB98507EE5364244 (ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZSTD_blockCompressor_Invoke_mABA74C111CCEF3450292CD1E3F2B0AC8055BAA5E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&ZSTD_blockCompressor_Invoke_mABA74C111CCEF3450292CD1E3F2B0AC8055BAA5E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ZSTD_blockCompressor_Invoke_mABA74C111CCEF3450292CD1E3F2B0AC8055BAA5E_Multicast;
}
// Method Definition Index: 79140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ZSTD_blockCompressor_Invoke_mABA74C111CCEF3450292CD1E3F2B0AC8055BAA5E (ZSTD_blockCompressor_tB23EFBD975BA70E61AEB0B469927F044A69A4B87* __this, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___0_bs, seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5* ___1_seqStore, uint32_t* ___2_rep, void* ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194*, seqStore_t_tE9BC843E00438964E2567B814FEB5A90A6D7B8C5*, uint32_t*, void*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_bs, ___1_seqStore, ___2_rep, ___3_src, ___4_srcSize, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 79141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZSTD_compressionParameters__ctor_m969AF739468F3A729A35C47C6276C82585F77A8B (ZSTD_compressionParameters_t0FA603612ECCC1F72BDB653ED4E58EF152D93E0C* __this, uint32_t ___0_windowLog, uint32_t ___1_chainLog, uint32_t ___2_hashLog, uint32_t ___3_searchLog, uint32_t ___4_minMatch, uint32_t ___5_targetLength, int32_t ___6_strategy, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_windowLog;
		__this->___windowLog = L_0;
		uint32_t L_1 = ___1_chainLog;
		__this->___chainLog = L_1;
		uint32_t L_2 = ___2_hashLog;
		__this->___hashLog = L_2;
		uint32_t L_3 = ___3_searchLog;
		__this->___searchLog = L_3;
		uint32_t L_4 = ___4_minMatch;
		__this->___minMatch = L_4;
		uint32_t L_5 = ___5_targetLength;
		__this->___targetLength = L_5;
		int32_t L_6 = ___6_strategy;
		__this->___strategy = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void ZSTD_compressionParameters__ctor_m969AF739468F3A729A35C47C6276C82585F77A8B_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_windowLog, uint32_t ___1_chainLog, uint32_t ___2_hashLog, uint32_t ___3_searchLog, uint32_t ___4_minMatch, uint32_t ___5_targetLength, int32_t ___6_strategy, const RuntimeMethod* method)
{
	ZSTD_compressionParameters_t0FA603612ECCC1F72BDB653ED4E58EF152D93E0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZSTD_compressionParameters_t0FA603612ECCC1F72BDB653ED4E58EF152D93E0C*>(__this + _offset);
	ZSTD_compressionParameters__ctor_m969AF739468F3A729A35C47C6276C82585F77A8B(_thisAdjusted, ___0_windowLog, ___1_chainLog, ___2_hashLog, ___3_searchLog, ___4_minMatch, ___5_targetLength, ___6_strategy, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 79142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZSTD_customMem__ctor_mD6DD0260090AA774131BA5EAEE509B6CBB799268 (ZSTD_customMem_t39C80B0D96D2ED78A882EA71088AE7517DFC7BC6* __this, void* ___0_customAlloc, void* ___1_customFree, void* ___2_opaque, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_customAlloc;
		__this->___customAlloc = L_0;
		void* L_1 = ___1_customFree;
		__this->___customFree = L_1;
		void* L_2 = ___2_opaque;
		__this->___opaque = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void ZSTD_customMem__ctor_mD6DD0260090AA774131BA5EAEE509B6CBB799268_AdjustorThunk (RuntimeObject* __this, void* ___0_customAlloc, void* ___1_customFree, void* ___2_opaque, const RuntimeMethod* method)
{
	ZSTD_customMem_t39C80B0D96D2ED78A882EA71088AE7517DFC7BC6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZSTD_customMem_t39C80B0D96D2ED78A882EA71088AE7517DFC7BC6*>(__this + _offset);
	ZSTD_customMem__ctor_mD6DD0260090AA774131BA5EAEE509B6CBB799268(_thisAdjusted, ___0_customAlloc, ___1_customFree, ___2_opaque, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint32_t ZSTD_getAllMatchesFn_Invoke_m5BB8EA89A07EB3B008669050F923DDA2A829A1E0_Multicast(ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA* __this, ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315* ___0_param0, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___1_param1, uint32_t* ___2_param2, uint8_t* ___3_param3, uint8_t* ___4_param4, uint32_t* ___5_rep, uint32_t ___6_ll0, uint32_t ___7_lengthToBeat, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA* currentDelegate = reinterpret_cast<ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315*, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194*, uint32_t*, uint8_t*, uint8_t*, uint32_t*, uint32_t, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_param0, ___1_param1, ___2_param2, ___3_param3, ___4_param4, ___5_rep, ___6_ll0, ___7_lengthToBeat, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
uint32_t ZSTD_getAllMatchesFn_Invoke_m5BB8EA89A07EB3B008669050F923DDA2A829A1E0_OpenInst(ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA* __this, ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315* ___0_param0, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___1_param1, uint32_t* ___2_param2, uint8_t* ___3_param3, uint8_t* ___4_param4, uint32_t* ___5_rep, uint32_t ___6_ll0, uint32_t ___7_lengthToBeat, const RuntimeMethod* method)
{
	NullCheck(___0_param0);
	typedef uint32_t (*FunctionPointerType) (ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315*, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194*, uint32_t*, uint8_t*, uint8_t*, uint32_t*, uint32_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_param0, ___1_param1, ___2_param2, ___3_param3, ___4_param4, ___5_rep, ___6_ll0, ___7_lengthToBeat, method);
}
uint32_t ZSTD_getAllMatchesFn_Invoke_m5BB8EA89A07EB3B008669050F923DDA2A829A1E0_OpenStatic(ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA* __this, ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315* ___0_param0, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___1_param1, uint32_t* ___2_param2, uint8_t* ___3_param3, uint8_t* ___4_param4, uint32_t* ___5_rep, uint32_t ___6_ll0, uint32_t ___7_lengthToBeat, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315*, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194*, uint32_t*, uint8_t*, uint8_t*, uint32_t*, uint32_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_param0, ___1_param1, ___2_param2, ___3_param3, ___4_param4, ___5_rep, ___6_ll0, ___7_lengthToBeat, method);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA (ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA* __this, ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315* ___0_param0, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___1_param1, uint32_t* ___2_param2, uint8_t* ___3_param3, uint8_t* ___4_param4, uint32_t* ___5_rep, uint32_t ___6_ll0, uint32_t ___7_lengthToBeat, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315*, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194*, uint32_t*, uint8_t*, uint8_t*, uint32_t*, uint32_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	uint32_t returnValue = il2cppPInvokeFunc(___0_param0, ___1_param1, ___2_param2, ___3_param3, ___4_param4, ___5_rep, ___6_ll0, ___7_lengthToBeat);

	return returnValue;
}
// Method Definition Index: 79143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZSTD_getAllMatchesFn__ctor_m2EC3E0338B938103A5B4FCF539453F97C980BEAC (ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 8;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZSTD_getAllMatchesFn_Invoke_m5BB8EA89A07EB3B008669050F923DDA2A829A1E0_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 7;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&ZSTD_getAllMatchesFn_Invoke_m5BB8EA89A07EB3B008669050F923DDA2A829A1E0_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ZSTD_getAllMatchesFn_Invoke_m5BB8EA89A07EB3B008669050F923DDA2A829A1E0_Multicast;
}
// Method Definition Index: 79144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ZSTD_getAllMatchesFn_Invoke_m5BB8EA89A07EB3B008669050F923DDA2A829A1E0 (ZSTD_getAllMatchesFn_tC373AFC980DA6879A6CC90DC7C5623D9BA7821FA* __this, ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315* ___0_param0, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194* ___1_param1, uint32_t* ___2_param2, uint8_t* ___3_param3, uint8_t* ___4_param4, uint32_t* ___5_rep, uint32_t ___6_ll0, uint32_t ___7_lengthToBeat, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, ZSTD_match_t_t50B581BF14D73563874100A2F0FE5217C0617315*, ZSTD_matchState_t_tFB941B49944DE7D4C2D6AD7B10CE51E96014A194*, uint32_t*, uint8_t*, uint8_t*, uint32_t*, uint32_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_param0, ___1_param1, ___2_param2, ___3_param3, ___4_param4, ___5_rep, ___6_ll0, ___7_lengthToBeat, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 79145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZSTD_seqSymbol__ctor_m27DD921BAF1F2400EAC06E64F856474ABDAEEF4E (ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B* __this, uint16_t ___0_nextState, uint8_t ___1_nbAdditionalBits, uint8_t ___2_nbBits, uint32_t ___3_baseValue, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_nextState;
		__this->___nextState = L_0;
		uint8_t L_1 = ___1_nbAdditionalBits;
		__this->___nbAdditionalBits = L_1;
		uint8_t L_2 = ___2_nbBits;
		__this->___nbBits = L_2;
		uint32_t L_3 = ___3_baseValue;
		__this->___baseValue = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void ZSTD_seqSymbol__ctor_m27DD921BAF1F2400EAC06E64F856474ABDAEEF4E_AdjustorThunk (RuntimeObject* __this, uint16_t ___0_nextState, uint8_t ___1_nbAdditionalBits, uint8_t ___2_nbBits, uint32_t ___3_baseValue, const RuntimeMethod* method)
{
	ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZSTD_seqSymbol_tB8D24A461EFCF6405DF729C4E828423ED0BC8D0B*>(__this + _offset);
	ZSTD_seqSymbol__ctor_m27DD921BAF1F2400EAC06E64F856474ABDAEEF4E(_thisAdjusted, ___0_nextState, ___1_nbAdditionalBits, ___2_nbBits, ___3_baseValue, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 78701
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitOperations_TrailingZeroCount_m661217BE5FA61113655BFF30B02419B7F633D474_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return ((int32_t)32);
	}

IL_0006:
	{
		il2cpp_codegen_runtime_class_init_inline(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		uint8_t* L_1 = ((BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_StaticFields*)il2cpp_codegen_static_fields_for(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var))->___TrailingZeroCountDeBruijn;
		uint32_t L_2 = ___0_value;
		uint32_t L_3 = ___0_value;
		int32_t L_4 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_2&((-((int32_t)L_3))))), ((int32_t)125613361)))>>((int32_t)27)))))));
		return L_4;
	}
}
// Method Definition Index: 78706
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitOperations_LeadingZeroCount_mCC89863CA332F4C2DC790602888B02B3F97FF961_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return ((int32_t)32);
	}

IL_0006:
	{
		uint32_t L_1 = ___0_value;
		uint32_t L_2 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_1|((int32_t)((uint32_t)L_2>>1))));
		uint32_t L_3 = ___0_value;
		uint32_t L_4 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_3|((int32_t)((uint32_t)L_4>>2))));
		uint32_t L_5 = ___0_value;
		uint32_t L_6 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_5|((int32_t)((uint32_t)L_6>>4))));
		uint32_t L_7 = ___0_value;
		uint32_t L_8 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_7|((int32_t)((uint32_t)L_8>>8))));
		uint32_t L_9 = ___0_value;
		uint32_t L_10 = ___0_value;
		___0_value = ((int32_t)((int32_t)L_9|((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		il2cpp_codegen_runtime_class_init_inline(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var);
		uint8_t* L_11 = ((BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_StaticFields*)il2cpp_codegen_static_fields_for(BitOperations_tBA036D5A7FE6E4D2C8252308970B829E76575F24_il2cpp_TypeInfo_var))->___Log2DeBruijn;
		uint32_t L_12 = ___0_value;
		int32_t L_13 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)130329821)))>>((int32_t)27)))))));
		return ((int32_t)(((int32_t)31)^L_13));
	}
}
// Method Definition Index: 78741
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeHelper_GetArrayPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF8E70FC0E4E1F7746BD18EC98F55B1D93F53FFF2_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	void* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		uint32_t L_0 = sizeof(uint8_t);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		NullCheck(L_1);
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length))));
		uint32_t L_2 = V_0;
		void* L_3;
		L_3 = UnsafeHelper_malloc_mCC908C6E5DE0BA0DF8B7E9358EB71FC71DC1A365_inline(L_2, NULL);
		V_1 = (uint8_t*)L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		V_3 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		uint8_t* L_5 = V_3;
		V_2 = (void*)((uintptr_t)L_5);
		uint8_t* L_6 = V_1;
		void* L_7 = V_2;
		uint32_t L_8 = V_0;
		Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A_inline((void*)L_6, L_7, L_8, NULL);
		V_3 = (uint8_t*)((uintptr_t)0);
		uint8_t* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 11642
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_0 = ((ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CSharedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 2497
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = ___1_start;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2512
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2148
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		__this->____object = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_9);
		int32_t L_10 = ___1_start;
		__this->____index = L_10;
		int32_t L_11 = ___2_length;
		__this->____length = L_11;
		return;
	}
}
// Method Definition Index: 8288
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_m2FC58AE60948818D3134F32B502343786ED320E9_gshared_inline (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* ___0_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_0 = (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*)(&__this->____methodBuilder);
		U3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncU3Ed__20_tD3619CAF5275142FB665FF74E85ABDC88D84C9E1_mCB561E1D151F158556323F272B0D0DCA2196ED26(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 2156
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(5, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_5;
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_11 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, il2cpp_defaults.string_class));
		String_t* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_13 = V_1;
		NullCheck(L_13);
		Il2CppChar* L_14;
		L_14 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_13, NULL);
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_as_ref<uint8_t>(L_14);
		String_t* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_18), L_15, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		V_0 = L_18;
		int32_t L_19 = __this->____index;
		int32_t L_20 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_21;
	}

IL_0089:
	{
		RuntimeObject* L_22 = __this->____object;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_23 = __this->____object;
		int32_t L_24 = __this->____index;
		int32_t L_25 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_26), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))), L_24, ((int32_t)(L_25&((int32_t)2147483647LL))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_26;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_27 = V_0;
		return L_27;
	}
}
// Method Definition Index: 8372
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_gshared_inline (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_0 = __this->___m_configuredTaskAwaiter;
		return L_0;
	}
}
// Method Definition Index: 78738
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeHelper_malloc_mCC908C6E5DE0BA0DF8B7E9358EB71FC71DC1A365_inline (uint32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_0, NULL);
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 92396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A_inline (void* ___0_destination, void* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		void* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 3277
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
// Method Definition Index: 713
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 2510
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2499
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
