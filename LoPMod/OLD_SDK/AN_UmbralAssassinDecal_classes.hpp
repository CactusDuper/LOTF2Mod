#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x99 - 0x98)
// BlueprintGeneratedClass AN_UmbralAssassinDecal.AN_UmbralAssassinDecal_C
class UAN_UmbralAssassinDecal_C : public UAnimNotify_BaseConditionalTag
{
public:
	bool                                         Show;                                              // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_UmbralAssassinDecal_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_FOE_UmbralAssassin_C* K2Node_DynamicCast_AsBP_FOE_Umbral_Assassin, bool K2Node_DynamicCast_bSuccess);
};

}


