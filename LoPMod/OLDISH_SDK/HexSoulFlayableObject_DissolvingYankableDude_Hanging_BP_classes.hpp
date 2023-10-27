#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3D8 - 0x3B0)
// BlueprintGeneratedClass HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP.HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C
class AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C : public AHexSoulFlayableObject_DissolvingYankableDude_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     PNS_SoulFlayDude_Socet_Dissolve_VFX;               // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Dissolve_Socket_Timeline_NewTrack_0_7C5093CE450F8B3020C033BD374F88AD; // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Dissolve_Socket_Timeline__Direction_7C5093CE450F8B3020C033BD374F88AD; // 0x3C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4365[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Dissolve_Socket_Timeline;                          // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       DissolveRadiusSocket;                              // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C* GetDefaultObj();

	void UserConstructionScript();
	void Dissolve_Socket_Timeline__FinishedFunc();
	void Dissolve_Socket_Timeline__UpdateFunc();
	void OnDissolveStart_Event(bool IsReverse);
	void ExecuteUbergraph_HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP(int32 EntryPoint, bool K2Node_Event_IsReverse, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


