#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x5B8 - 0x558)
// BlueprintGeneratedClass GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C
class UGA_LanternSyphoningTarget_ExtractGeneric_C : public UGA_LanternSyphoning_TargetAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          CueTag_Syphoning;                                  // 0x560(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayAttribute, struct FGameplayTag> ExtractionVFXGameplayCueTags;                      // 0x568(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_LanternSyphoningTarget_ExtractGeneric_C* GetDefaultObj();

	void SetAllowedRealmForSyphoning(enum class EDualRealmState AllowedRealm);
	void SpawnSyphoningTrailVFX(const struct FGameplayAttribute& GameplayAttribute, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ASoulsLanternActor* CallFunc_GetSyphoningPlayerSoulsLanternActor_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	class ASoulsLanternActor* GetSyphoningPlayerSoulsLanternActor(class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class ASoulsLanternActor* CallFunc_GetSpawnedSoulsLanternActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnBeginSyphoning_BP();
	void OnEndSyphoning_BP();
	void OnSyphoningExtractionTick_BP(const struct FGameplayAttribute& ExtractedAttribute, float ExtractedAmount);
	void ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractGeneric(int32 EntryPoint, const struct FGameplayAttribute& K2Node_Event_extractedAttribute, float K2Node_Event_extractedAmount);
};

}


