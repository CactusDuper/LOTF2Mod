#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x5CC - 0x5A8)
// BlueprintGeneratedClass GA_SoulsLanternShining_TranscendToUmbral.GA_SoulsLanternShining_TranscendToUmbral_C
class UGA_SoulsLanternShining_TranscendToUmbral_C : public UGA_SoulsLanternShining_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EGameRealm                        RealmToTranscend;                                  // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitDelay*                DisplacementTask;                                  // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      PlayerCharacter;                                   // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeActivatingLanternPlayerLogic;           // 0x5C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SoulsLanternShining_TranscendToUmbral_C* GetDefaultObj();

	void OnFinish_B7A0F99545D6B1CF09A9BCA551DAAECF();
	void OnFinish_E5C7421E41EFCA5EDCA78482ACBC4DB6();
	void OnFinish_4A67ED1B429600A0908AA48B7E52F751();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnShiningInhibited();
	void OnShiningActivated();
	void ExecuteUbergraph_GA_SoulsLanternShining_TranscendToUmbral(int32 EntryPoint, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool K2Node_Event_bWasCancelled, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6);
};

}


