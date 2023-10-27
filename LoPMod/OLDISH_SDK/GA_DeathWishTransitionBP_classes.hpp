#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x560 - 0x550)
// BlueprintGeneratedClass GA_DeathWishTransitionBP.GA_DeathWishTransitionBP_C
class UGA_DeathWishTransitionBP_C : public UGA_DeathWishTransition
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       TranscendDelay;                                    // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_DeathWishTransitionBP_C* GetDefaultObj();

	void OnTranscendInterrupted();
	void OnTranscendBegin();
	void ExecuteUbergraph_GA_DeathWishTransitionBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, class ATranscendLookController_C* K2Node_DynamicCast_AsTranscend_Look_Controller, bool K2Node_DynamicCast_bSuccess_2, class ATranscendLookController_C* K2Node_DynamicCast_AsTranscend_Look_Controller_1, bool K2Node_DynamicCast_bSuccess_3);
};

}


