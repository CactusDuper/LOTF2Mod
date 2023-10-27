#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xE08 - 0xDE8)
// BlueprintGeneratedClass BP_Summon_RhogarHound_Alarm.BP_Summon_RhogarHound_Alarm_C
class ABP_Summon_RhogarHound_Alarm_C : public ABP_Enemy_RhogarHound_WithAlarmMove_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDissolveFXComponent_C*                DissolveFXComponent;                               // 0xDF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         AkAudioEventOnDissolve_Start;                      // 0xDF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         AkAudioEventOnDissolve_End;                        // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Summon_RhogarHound_Alarm_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__BP_Summon_RhogarHound_Alarm_DissolveFXComponent_K2Node_ComponentBoundEvent_0_OnDissolveStart__DelegateSignature(bool IsReverse);
	void ExecuteUbergraph_BP_Summon_RhogarHound_Alarm(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, bool K2Node_ComponentBoundEvent_IsReverse, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1);
};

}


