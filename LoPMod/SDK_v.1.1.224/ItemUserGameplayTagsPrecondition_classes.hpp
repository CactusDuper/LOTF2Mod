#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// BlueprintGeneratedClass ItemUserGameplayTagsPrecondition.ItemUserGameplayTagsPrecondition_C
class UItemUserGameplayTagsPrecondition_C : public UItemActivationPrecondition
{
public:
	struct FGameplayTagQuery                     CanUseQuey;                                        // 0x28(0x48)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UItemUserGameplayTagsPrecondition_C* GetDefaultObj();

	bool CanBeUsedBy_BP(class APlayerCharacter* PlayerCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTagQueryEmpty_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue);
};

}


