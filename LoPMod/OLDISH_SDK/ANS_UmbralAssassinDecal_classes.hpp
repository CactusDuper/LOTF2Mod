#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0xA1 - 0xA0)
// BlueprintGeneratedClass ANS_UmbralAssassinDecal.ANS_UmbralAssassinDecal_C
class UANS_UmbralAssassinDecal_C : public UAnimNotifyState_BaseConditionalTag
{
public:
	bool                                         Show;                                              // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_UmbralAssassinDecal_C* GetDefaultObj();

	void BP_NotifyEndImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class UObject* CustomData, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_FOE_UmbralAssassin_C* K2Node_DynamicCast_AsBP_FOE_Umbral_Assassin, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void BP_NotifyBeginImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, float TotalDuration, int32 MontageInstanceID, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_FOE_UmbralAssassin_C* K2Node_DynamicCast_AsBP_FOE_Umbral_Assassin, bool K2Node_DynamicCast_bSuccess);
};

}


