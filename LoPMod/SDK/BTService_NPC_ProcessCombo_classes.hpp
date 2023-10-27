#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x440 (0x4D8 - 0x98)
// BlueprintGeneratedClass BTService_NPC_ProcessCombo.BTService_NPC_ProcessCombo_C
class UBTService_NPC_ProcessCombo_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         __DoOneTimeProcess;                                // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 ControlledPawn;                                    // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         WaitingForEvent;                                   // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BB_Self;                                           // 0xB8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Target;                                         // 0xE0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_AttackAmount;                             // 0x108(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_IsInCombo;                                // 0x130(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_IsInSimpleCombo;                          // 0x158(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_ComboPacing;                              // 0x180(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_CanLink;                                  // 0x1A8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_LinkFrequency;                            // 0x1D0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_DoubleLinkFrequency;                      // 0x1F8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_LinkAmount;                               // 0x220(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_LinkPacing;                               // 0x248(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_CanLinkDuringStrings;                     // 0x270(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_IsInLink;                                 // 0x298(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_AttackCycleCount;                         // 0x2C0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_IsInAttackCycle;                          // 0x2E8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_SetAttackPacing;                          // 0x310(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_ProcessCombo;                             // 0x338(0x28)(Edit, BlueprintVisible)
	struct FGameplayTag                          Tag_Combo_ComboCooldown;                           // 0x360(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag_Combo_ComboString;                             // 0x368(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag_Combo_ComboStringCount;                        // 0x370(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag_Combo_ComboStringEnd;                          // 0x378(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag_Combo_LinkCooldown;                            // 0x380(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag_Combo_FreeAttack;                              // 0x388(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag_Combo_InLinkAction;                            // 0x390(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Combo_AttackAmount;                                // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Combo_AttackCycleAmount;                           // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combo_IsInCombo;                                   // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combo_IsInSimpleCombo;                             // 0x3A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combo_CanLink;                                     // 0x3A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combo_CanLinkDuringStrings;                        // 0x3A3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combo_IsInLink;                                    // 0x3A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combo_IsInAttackCycle;                             // 0x3A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BEF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BB_Combo_StringInterruptFrequency;                 // 0x3A8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_InterruptString;                          // 0x3D0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_CanLinkAfterString2;                      // 0x3F8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_CanInterruptStrings;                      // 0x420(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_CanInterruptAfterString2;                 // 0x448(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BB_Combo_NoInterruptOnLastString;                  // 0x470(0x28)(Edit, BlueprintVisible)
	bool                                         Combo_CanLinkAfterString2;                         // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combo_CanInterruptStrings;                         // 0x499(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combo_CanInterruptAfterString2;                    // 0x49A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combo_NoInterruptOnLastString;                     // 0x49B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combo_IsInInterrupt;                               // 0x49C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BB_Combo_AlwaysLinkOnStringEnd;                    // 0x4A0(0x28)(Edit, BlueprintVisible)
	bool                                         Combo_AlwaysLinkOnStringEnd;                       // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DistanceForLinkCheck;                              // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTService_NPC_ProcessCombo_C* GetDefaultObj();

	bool GetRandom(double Chance, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	bool HasTag(const struct FGameplayTag& TagToCheck, bool Temp_bool_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void GetDistanceToTarget(double* Distance, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, double K2Node_FunctionResult_Distance_ImplicitCast);
	void GetRandomCooldown(double BaseCD, double MinRandom, double MaxRandom, double* CD, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void SetTagCooldown(const struct FGameplayTag& Tag, double Float, bool Add_to_Existing_Duration, class UBehaviorTreeComponent* CallFunc_GetOwnerComponent_ReturnValue, float CallFunc_AddCooldownTagDuration_CooldownDuration_ImplicitCast);
	void EventReceived_234AC3824AD96854342D3783CE1460A4(const struct FGameplayEventData& Payload);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void DoProcess();
	void ExecuteUbergraph_BTService_NPC_ProcessCombo(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_1, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, double CallFunc_GetRandomCooldown_CD, double CallFunc_GetRandomCooldown_CD_1, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_GetRandomCooldown_CD_2, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_2, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, class UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue, double CallFunc_GetDistanceToTarget_Distance, bool CallFunc_IsValid_ReturnValue, class UBehaviorTreeComponent* CallFunc_GetOwnerComponent_ReturnValue, float CallFunc_GetTagCooldownEndTime_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_GetRandom_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_GetRandom_ReturnValue_1, bool CallFunc_GetRandom_ReturnValue_2, double CallFunc_GetRandomCooldown_CD_3, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_2, double CallFunc_GetRandomCooldown_CD_4, double CallFunc_GetRandomCooldown_CD_5, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_4, int32 CallFunc_GetBlackboardValueAsInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_5, bool CallFunc_HasTag_ReturnValue_3, int32 CallFunc_GetBlackboardValueAsInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_4, bool CallFunc_HasTag_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_6, bool CallFunc_HasTag_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_6, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_3, bool CallFunc_GetRandom_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_GetRandom_ReturnValue_4, bool CallFunc_GetRandom_ReturnValue_5, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_6, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_7, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_8, bool CallFunc_HasTag_ReturnValue_8, bool CallFunc_HasTag_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_HasTag_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_HasTag_ReturnValue_11, bool CallFunc_Not_PreBool_ReturnValue_6, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_10, uint8 CallFunc_GetValidValue_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_HasTag_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_11, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FGameplayEventData& Temp_struct_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, double CallFunc_RandomFloatInRange_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_13, double CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_13, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_14, const struct FGameplayEventData& K2Node_CustomEvent_Payload, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_15, bool CallFunc_HasTag_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue_16, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
};

}


