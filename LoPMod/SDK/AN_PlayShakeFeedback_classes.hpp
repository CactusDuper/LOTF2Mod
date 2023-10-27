#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x51 - 0x38)
// BlueprintGeneratedClass AN_PlayShakeFeedback.AN_PlayShakeFeedback_C
class UAN_PlayShakeFeedback_C : public UAnimNotify
{
public:
	double                                       Radius;                                            // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ShakeFeedbackRowHandle;                            // 0x40(0x10)(Edit, BlueprintVisible, NoDestructor)
	bool                                         bLocalControllerOnly;                              // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_PlayShakeFeedback_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_PlayWorldShakeFeedback_radius_ImplicitCast);
};

}


