#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x450 - 0x448)
// BlueprintGeneratedClass GA_Enemy_NPC_DissolveOnBossDead.GA_Enemy_NPC_DissolveOnBossDead_C
class UGA_Enemy_NPC_DissolveOnBossDead_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Enemy_NPC_DissolveOnBossDead_C* GetDefaultObj();

	void OnFinish_AB593B16486EFCD83D257EBEAE5BA37C();
	void K2_ActivateAbility();
	void Reset();
	void ExecuteUbergraph_GA_Enemy_NPC_DissolveOnBossDead(int32 EntryPoint, TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput, class UGameplayTask_WaitDelay* CallFunc_TaskWaitDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


