#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x598 - 0x568)
// BlueprintGeneratedClass BossCombatEvent.BossCombatEvent_C
class ABossCombatEvent_C : public AHexBossCombatEvent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CombatEndedEvent;                                  // 0x578(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                          GameplayEventCinematicTrigger;                     // 0x588(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class AActor*                                GameplayEventCinematicBossNewPosition;             // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABossCombatEvent_C* GetDefaultObj();

	void EventReceived_6CF13909441C156BB1685FA44381BE19(const struct FGameplayEventData& Payload);
	void BP_CombatStarted();
	void BP_CombatEventEnded();
	void CustomEvent_0();
	void ExecuteUbergraph_BossCombatEvent(int32 EntryPoint, TArray<class ALOTF2Character*>& CallFunc_GetAllSpawnedBosses_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGameplayEventData& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, bool Temp_bool_IsClosed_Variable, class ALOTF2Character* CallFunc_Array_Get_Item, class UBossComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, TArray<class ALOTF2Character*>& CallFunc_GetAllSpawnedBosses_ReturnValue_1, class ALOTF2Character* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UBossComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TArray<class ALOTF2Character*>& CallFunc_GetAllSpawnedBosses_ReturnValue_2, class ALOTF2Character* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class ALOTF2Character*>& CallFunc_GetAllSpawnedBosses_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, class ALOTF2Character* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3);
	void CombatEndedEvent__DelegateSignature();
};

}


