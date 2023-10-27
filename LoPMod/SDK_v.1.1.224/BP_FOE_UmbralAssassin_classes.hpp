#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0xE28 - 0xDF9)
// BlueprintGeneratedClass BP_FOE_UmbralAssassin.BP_FOE_UmbralAssassin_C
class ABP_FOE_UmbralAssassin_C : public ABP_UmbrieBase_C
{
public:
	uint8                                        Pad_3BF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInterface*                    Decal_Material;                                    // 0xE08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Decal_Scale;                                       // 0xE10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DecalTimer;                                        // 0xE18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    DecalDynamicMat;                                   // 0xE20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FOE_UmbralAssassin_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ShowShadowSmoke();
	void HideShadowSmoke();
	void ActivateDecalSpawn();
	void ExecuteUbergraph_BP_FOE_UmbralAssassin(int32 EntryPoint, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, double CallFunc_RandomFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast);
};

}


