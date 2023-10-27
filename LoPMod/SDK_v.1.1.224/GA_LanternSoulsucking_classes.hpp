#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x450 - 0x448)
// BlueprintGeneratedClass GA_LanternSoulsucking.GA_LanternSoulsucking_C
class UGA_LanternSoulsucking_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_LanternSoulsucking_C* GetDefaultObj();

	class ASoulsLanternActor* GetOwningPlayerSoulsLanternActor(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class ASoulsLanternActor* CallFunc_GetSpawnedSoulsLanternActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_LanternSoulsucking(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, bool K2Node_Event_bWasCancelled, class ASoulsLanternActor* CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue, class ASoulsLanternActor* CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ADualRealmSoulsLanternActor_BP_C* K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP, bool K2Node_DynamicCast_bSuccess, class ADualRealmSoulsLanternActor_BP_C* K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


