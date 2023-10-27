#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C
// (Actor)

class UClass* ABP_Collider_LanternSoulsucking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Collider_LanternSoulsucking_C");

	return Clss;
}


// BP_Collider_LanternSoulsucking_C BP_Collider_LanternSoulsucking.Default__BP_Collider_LanternSoulsucking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Collider_LanternSoulsucking_C* ABP_Collider_LanternSoulsucking_C::GetDefaultObj()
{
	static class ABP_Collider_LanternSoulsucking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Collider_LanternSoulsucking_C*>(ABP_Collider_LanternSoulsucking_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.ActivateLanternSoulsucking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldActivate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_C::ActivateLanternSoulsucking(bool ShouldActivate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "ActivateLanternSoulsucking");

	Params::ABP_Collider_LanternSoulsucking_C_ActivateLanternSoulsucking_Params Parms{};

	Parms.ShouldActivate = ShouldActivate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.GetTimeSinceDropDetection
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABaseAbsorbablePickup_BP_C*  DropToAbsorb                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                             ReturnSeconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_C::GetTimeSinceDropDetection(class ABaseAbsorbablePickup_BP_C*& DropToAbsorb, double* ReturnSeconds, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "GetTimeSinceDropDetection");

	Params::ABP_Collider_LanternSoulsucking_C_GetTimeSinceDropDetection_Params Parms{};

	Parms.DropToAbsorb = DropToAbsorb;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnSeconds != nullptr)
		*ReturnSeconds = Parms.ReturnSeconds;

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.StartPreAbsorb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseAbsorbablePickup_BP_C*  Pickup                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_C::StartPreAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "StartPreAbsorb");

	Params::ABP_Collider_LanternSoulsucking_C_StartPreAbsorb_Params Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.StopPreAbsorb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseAbsorbablePickup_BP_C*  Pickup                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_C::StopPreAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "StopPreAbsorb");

	Params::ABP_Collider_LanternSoulsucking_C_StopPreAbsorb_Params Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.StopAllTriggeredPreAbsorbingDrops
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Collider_LanternSoulsucking_C::StopAllTriggeredPreAbsorbingDrops()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "StopAllTriggeredPreAbsorbingDrops");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "ReceiveTick");

	Params::ABP_Collider_LanternSoulsucking_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.DoAbsorb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseAbsorbablePickup_BP_C*  Pickup                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_C::DoAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "DoAbsorb");

	Params::ABP_Collider_LanternSoulsucking_C_DoAbsorb_Params Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.FindNewAbsorbablePickups
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Collider_LanternSoulsucking_C::FindNewAbsorbablePickups()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "FindNewAbsorbablePickups");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.UpdateDropsToAbsorb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Collider_LanternSoulsucking_C::UpdateDropsToAbsorb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "UpdateDropsToAbsorb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.CheckPreAbsorbStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseAbsorbablePickup_BP_C*  DropToAbsorb                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_C::CheckPreAbsorbStart(class ABaseAbsorbablePickup_BP_C*& DropToAbsorb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "CheckPreAbsorbStart");

	Params::ABP_Collider_LanternSoulsucking_C_CheckPreAbsorbStart_Params Parms{};

	Parms.DropToAbsorb = DropToAbsorb;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.CheckFinishAbsorb
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseAbsorbablePickup_BP_C*  DropToAbsorb                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_C::CheckFinishAbsorb(class ABaseAbsorbablePickup_BP_C*& DropToAbsorb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "CheckFinishAbsorb");

	Params::ABP_Collider_LanternSoulsucking_C_CheckFinishAbsorb_Params Parms{};

	Parms.DropToAbsorb = DropToAbsorb;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking.BP_Collider_LanternSoulsucking_C.ExecuteUbergraph_BP_Collider_LanternSoulsucking
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2PlayerState*           K2Node_DynamicCast_AsLOTF2Player_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetMultiplayerRoleAsBitmask_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  K2Node_CustomEvent_Pickup_2                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  K2Node_CustomEvent_Pickup_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABaseAbsorbablePickup_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABaseAbsorbablePickup_BP_C*  K2Node_CustomEvent_Pickup                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenAbsorbed_bValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetMultiplayerVisibilityMask_ReturnValue                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenAbsorbed_bValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShowingPreAbsorbFeedback_bValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenAbsorbed_bValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  K2Node_CustomEvent_DropToAbsorb_1                                (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  K2Node_CustomEvent_DropToAbsorb                                  (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSinceDropDetection_ReturnSeconds                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSinceDropDetection_ReturnSeconds_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_C::ExecuteUbergraph_BP_Collider_LanternSoulsucking(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class ALOTF2PlayerState* K2Node_DynamicCast_AsLOTF2Player_State, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetMultiplayerRoleAsBitmask_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup_2, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, class ABaseAbsorbablePickup_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, TArray<class ABaseAbsorbablePickup_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup, class ABaseAbsorbablePickup_BP_C* CallFunc_Array_Get_Item_1, bool CallFunc_HasBeenAbsorbed_bValue, uint8 CallFunc_GetMultiplayerVisibilityMask_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_HasBeenAbsorbed_bValue_1, int32 CallFunc_And_IntInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, class ABaseAbsorbablePickup_BP_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsShowingPreAbsorbFeedback_bValue, bool CallFunc_HasBeenAbsorbed_bValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_DropToAbsorb_1, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_DropToAbsorb, float CallFunc_GetDistanceTo_ReturnValue, double CallFunc_GetTimeSinceDropDetection_ReturnSeconds, float CallFunc_GetDistanceTo_ReturnValue_1, double CallFunc_GetTimeSinceDropDetection_ReturnSeconds_1, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_2, bool CallFunc_Map_Remove_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_C", "ExecuteUbergraph_BP_Collider_LanternSoulsucking");

	Params::ABP_Collider_LanternSoulsucking_C_ExecuteUbergraph_BP_Collider_LanternSoulsucking_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsLOTF2Player_State = K2Node_DynamicCast_AsLOTF2Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMultiplayerRoleAsBitmask_ReturnValue = CallFunc_GetMultiplayerRoleAsBitmask_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_Pickup_2 = K2Node_CustomEvent_Pickup_2;
	Parms.K2Node_CustomEvent_Pickup_1 = K2Node_CustomEvent_Pickup_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_CustomEvent_Pickup = K2Node_CustomEvent_Pickup;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_HasBeenAbsorbed_bValue = CallFunc_HasBeenAbsorbed_bValue;
	Parms.CallFunc_GetMultiplayerVisibilityMask_ReturnValue = CallFunc_GetMultiplayerVisibilityMask_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_HasBeenAbsorbed_bValue_1 = CallFunc_HasBeenAbsorbed_bValue_1;
	Parms.CallFunc_And_IntInt_ReturnValue = CallFunc_And_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsShowingPreAbsorbFeedback_bValue = CallFunc_IsShowingPreAbsorbFeedback_bValue;
	Parms.CallFunc_HasBeenAbsorbed_bValue_2 = CallFunc_HasBeenAbsorbed_bValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_DropToAbsorb_1 = K2Node_CustomEvent_DropToAbsorb_1;
	Parms.K2Node_CustomEvent_DropToAbsorb = K2Node_CustomEvent_DropToAbsorb;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_GetTimeSinceDropDetection_ReturnSeconds = CallFunc_GetTimeSinceDropDetection_ReturnSeconds;
	Parms.CallFunc_GetDistanceTo_ReturnValue_1 = CallFunc_GetDistanceTo_ReturnValue_1;
	Parms.CallFunc_GetTimeSinceDropDetection_ReturnSeconds_1 = CallFunc_GetTimeSinceDropDetection_ReturnSeconds_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_Map_Remove_ReturnValue_1 = CallFunc_Map_Remove_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


