#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x120 - 0x108)
// BlueprintGeneratedClass BP_TumorParasiteTetheringComponent.BP_TumorParasiteTetheringComponent_C
class UBP_TumorParasiteTetheringComponent_C : public UBP_AIParasiteTetheringComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEffectsWithParamsContainer   EffectsToApplyOnTetheredCharacterDeath;            // 0x110(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_TumorParasiteTetheringComponent_C* GetDefaultObj();

	void OnStartedTethering_BP();
	void OnDeath_Event_0(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved);
	void DespawnOwnerParasite();
	void ExecuteUbergraph_BP_TumorParasiteTetheringComponent(int32 EntryPoint, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ALOTF2Character* CallFunc_GetLinkedCharacter_ReturnValue, class AActor* K2Node_CustomEvent_InstigatorActor, const struct FGameplayTagContainer& K2Node_CustomEvent_InstigatorTags, bool K2Node_CustomEvent_bDeathWasObserved, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectsContainerToSelf_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


