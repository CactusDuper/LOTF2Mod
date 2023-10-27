#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SyncAnimReq_LanternRaisedOrUmbralRealm.SyncAnimReq_LanternRaisedOrUmbralRealm_C
class USyncAnimReq_LanternRaisedOrUmbralRealm_C : public UHexSyncedAnimStartRequirement
{
public:

	static class UClass* StaticClass();
	static class USyncAnimReq_LanternRaisedOrUmbralRealm_C* GetDefaultObj();

	bool CanStartSyncAnim(class AActor* ActiveParticipant, class AActor* PassiveParticipant, bool Temp_bool_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue);
};

}


