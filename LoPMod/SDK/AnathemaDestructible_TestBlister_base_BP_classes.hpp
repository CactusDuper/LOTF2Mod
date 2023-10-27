#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x4A0 - 0x468)
// BlueprintGeneratedClass AnathemaDestructible_TestBlister_base_BP.AnathemaDestructible_TestBlister_base_BP_C
class AAnathemaDestructible_TestBlister_base_BP_C : public ABase_AnathemaDestructible_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDualRealmBehaviourComponent*          DualRealmBehaviour;                                // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SyphoningCollisionSphere;                          // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVigorComponent*                       Vigor;                                             // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMojoComponent*                        Mojo;                                              // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsResetting;                                       // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_440E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LootPercentage;                                    // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAnathemaDestructible_TestBlister_base_BP_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__AnathemaDestructible_TestBlister_base_BP_HealthComponent_K2Node_ComponentBoundEvent_0_HealthComponentOnDeathDelegate__DelegateSignature(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved);
	void BndEvt__AnathemaDestructible_TestBlister_base_BP_Mojo_K2Node_ComponentBoundEvent_1_OnMojoChanged__DelegateSignature(float NewMojo, class AActor* MojoChangeInstigator);
	void BndEvt__AnathemaDestructible_TestBlister_base_BP_Vigor_K2Node_ComponentBoundEvent_2_OnVigorChanged__DelegateSignature(int32 NewVigor);
	void OnDestructibleReset_BP();
	void ExecuteUbergraph_AnathemaDestructible_TestBlister_base_BP(int32 EntryPoint, class AActor* K2Node_ComponentBoundEvent_InstigatorActor, const struct FGameplayTagContainer& K2Node_ComponentBoundEvent_InstigatorTags, bool K2Node_ComponentBoundEvent_bDeathWasObserved, const struct FGameplayAbilitySpecHandle& CallFunc_K2_GiveAbility_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UInventoryComponent* CallFunc_GetInventoryComponent_ReturnValue, class AAnathemaPlayerCharacterController_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP, bool K2Node_DynamicCast_bSuccess_1, class UVigorDrop_InventoryItem_BP_C* CallFunc_SpawnObject_ReturnValue, class UMojoDrop_InventoryItem_BP_C* CallFunc_SpawnObject_ReturnValue_1, float K2Node_ComponentBoundEvent_newMojo, class AActor* K2Node_ComponentBoundEvent_mojoChangeInstigator, int32 K2Node_ComponentBoundEvent_newVigor, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetVigor_ReturnValue, float CallFunc_GetMojo_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetVigorCapacity_ReturnValue, float CallFunc_GetMojoCapacity_ReturnValue, int32 CallFunc_GetVigor_ReturnValue_1, float CallFunc_GetMojo_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_GetVigor_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetMojo_ReturnValue_2, int32 CallFunc_FCeil_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetMojoQuantity_value_ImplicitCast);
};

}


