#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AN_BlueprintFunctionLibrary.AN_BlueprintFunctionLibrary_C
class UAN_BlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAN_BlueprintFunctionLibrary_C* GetDefaultObj();

	void AnimationViewerAkDebug(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAkSwitchValue* AkSwitch, class UObject* __WorldContext, bool CallFunc_GetAkComponent_ComponentCreated, class UAkComponent* CallFunc_GetAkComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEditor_ReturnValue);
	bool AI_Noise_Event(class USkeletalMeshComponent* Mesh, double Loudness, double Radius, class FName Tag, class UObject* __WorldContext, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_ReportNoiseEvent_Loudness_ImplicitCast, float CallFunc_ReportNoiseEvent_MaxRange_ImplicitCast);
};

}


