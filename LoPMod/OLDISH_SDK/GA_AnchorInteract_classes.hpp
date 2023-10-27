#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x510 - 0x508)
// BlueprintGeneratedClass GA_AnchorInteract.GA_AnchorInteract_C
class UGA_AnchorInteract_C : public UGA_AnchorInteraction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_AnchorInteract_C* GetDefaultObj();

	void OnTriggerFirstTimeAnchorActivationVFX_BP();
	void OnTriggerAnchorActivation_BP();
	void ExecuteUbergraph_GA_AnchorInteract(int32 EntryPoint, class ADualRealmAnchorActor* CallFunc_GetInteractionAnchor_ReturnValue, class ADualRealmAnchorActor* CallFunc_GetInteractionAnchor_ReturnValue_1, class ADualRealmAnchorActorBase_BP_C* K2Node_DynamicCast_AsDual_Realm_Anchor_Actor_Base_BP, bool K2Node_DynamicCast_bSuccess);
};

}


