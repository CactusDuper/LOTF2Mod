#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2F8 - 0x2D0)
// BlueprintGeneratedClass BP_Boss_Corpse.BP_Boss_Corpse_C
class ABP_Boss_Corpse_C : public AAbilitySystemActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDissolveFXComponent_C*                DissolveFXComponent;                               // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DissolvedGameplayTag;                              // 0x2E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DeadGameplayTag;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Boss_Corpse_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnLamphunterDead(struct FGameplayTagContainer& Tags);
	void OnDissolveEnd_Event();
	void ExecuteUbergraph_BP_Boss_Corpse(int32 EntryPoint, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& K2Node_CustomEvent_tags, bool CallFunc_HasTag_ReturnValue, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasGeneralTag_ReturnValue, bool CallFunc_HasGeneralTag_ReturnValue_1);
};

}


