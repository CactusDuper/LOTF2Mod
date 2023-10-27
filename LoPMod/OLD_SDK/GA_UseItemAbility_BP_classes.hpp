#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4B0 - 0x4B0)
// BlueprintGeneratedClass GA_UseItemAbility_BP.GA_UseItemAbility_BP_C
class UGA_UseItemAbility_BP_C : public UGA_UseInventoryItem
{
public:

	static class UClass* StaticClass();
	static class UGA_UseItemAbility_BP_C* GetDefaultObj();

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool Temp_bool_Variable, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
};

}


