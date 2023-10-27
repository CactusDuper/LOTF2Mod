#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x328 - 0x2A0)
// BlueprintGeneratedClass BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C
class ABP_Collider_LanternSoulsucking_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AController*                           OwningCharacterController;                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class ABaseAbsorbablePickup_BP_C*>    DropsToAbsorb;                                     // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TMap<class ABaseAbsorbablePickup_BP_C*, double> DropsDetectionTimestamp;                           // 0x2C8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UCurveFloat*                           AbsorbStartTimeByDistanceCurve;                    // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           AbsorbDurationByDistanceCurve;                     // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Collider_LanternSoulsucking_C* GetDefaultObj();

	void ActivateLanternSoulsucking(bool ShouldActivate);
	void GetTimeSinceDropDetection(class ABaseAbsorbablePickup_BP_C*& DropToAbsorb, double* ReturnSeconds, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void StartPreAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup);
	void StopPreAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup);
	void StopAllTriggeredPreAbsorbingDrops();
	void ReceiveTick(float DeltaSeconds);
	void DoAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup);
	void FindNewAbsorbablePickups();
	void UpdateDropsToAbsorb();
	void CheckPreAbsorbStart(class ABaseAbsorbablePickup_BP_C*& DropToAbsorb);
	void CheckFinishAbsorb(class ABaseAbsorbablePickup_BP_C*& DropToAbsorb);
	void ExecuteUbergraph_BP_Collider_LanternSoulsucking(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class ALOTF2PlayerState* K2Node_DynamicCast_AsLOTF2Player_State, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetMultiplayerRoleAsBitmask_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup_2, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, class ABaseAbsorbablePickup_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, TArray<class ABaseAbsorbablePickup_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup, class ABaseAbsorbablePickup_BP_C* CallFunc_Array_Get_Item_1, bool CallFunc_HasBeenAbsorbed_bValue, uint8 CallFunc_GetMultiplayerVisibilityMask_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_HasBeenAbsorbed_bValue_1, int32 CallFunc_And_IntInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, class ABaseAbsorbablePickup_BP_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsShowingPreAbsorbFeedback_bValue, bool CallFunc_HasBeenAbsorbed_bValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_DropToAbsorb_1, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_DropToAbsorb, float CallFunc_GetDistanceTo_ReturnValue, double CallFunc_GetTimeSinceDropDetection_ReturnSeconds, float CallFunc_GetDistanceTo_ReturnValue_1, double CallFunc_GetTimeSinceDropDetection_ReturnSeconds_1, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_2, bool CallFunc_Map_Remove_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
};

}


