#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x460 - 0x458)
// BlueprintGeneratedClass GA_KickBridgeActivation_BP.GA_KickBridgeActivation_BP_C
class UGA_KickBridgeActivation_BP_C : public UGA_GenericActivation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_KickBridgeActivation_BP_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_KickBridgeActivation_BP(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class UInteractionContext* CallFunc_GetInteractionContextFromTargetData_ReturnValue, class AActor* CallFunc_GetInteractor_ReturnValue, class AActor* CallFunc_GetInteractableObject_ReturnValue, class ABP_KickableBridge_C* K2Node_DynamicCast_AsBP_Kickable_Bridge, bool K2Node_DynamicCast_bSuccess);
};

}


