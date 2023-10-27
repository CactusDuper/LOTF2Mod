#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Panel_Equipment.W_Panel_Equipment_C
// (None)

class UClass* UW_Panel_Equipment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Panel_Equipment_C");

	return Clss;
}


// W_Panel_Equipment_C W_Panel_Equipment.Default__W_Panel_Equipment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Panel_Equipment_C* UW_Panel_Equipment_C::GetDefaultObj()
{
	static class UW_Panel_Equipment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Panel_Equipment_C*>(UW_Panel_Equipment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Panel_Equipment.W_Panel_Equipment_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Panel_Equipment_C::GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Equipment_C", "GetDesiredFocusTarget");

	Params::UW_Panel_Equipment_C_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_ReturnValue = CallFunc_GetFocusTarget_ReturnValue;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Panel_Equipment.W_Panel_Equipment_C.BP_SelectItem
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryGridItem*          Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Equipment_C::BP_SelectItem(class UInventoryGridItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Equipment_C", "BP_SelectItem");

	Params::UW_Panel_Equipment_C_BP_SelectItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Panel_Equipment.W_Panel_Equipment_C.BP_SelectGrid
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Panel_Equipment_C::BP_SelectGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Equipment_C", "BP_SelectGrid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Panel_Equipment.W_Panel_Equipment_C.BP_EnableGrid
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bItemEquipped                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Equipment_C::BP_EnableGrid(bool bEnabled, bool bItemEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Equipment_C", "BP_EnableGrid");

	Params::UW_Panel_Equipment_C_BP_EnableGrid_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.bItemEquipped = bItemEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Panel_Equipment.W_Panel_Equipment_C.BP_OnUnequipItem
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Panel_Equipment_C::BP_OnUnequipItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Equipment_C", "BP_OnUnequipItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Panel_Equipment.W_Panel_Equipment_C.BP_UpdateWeight
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MediumThreshold                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HeavyThreshold                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EncumberedThreshold                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                WeightColor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Equipment_C::BP_UpdateWeight(float Percent, float MediumThreshold, float HeavyThreshold, float EncumberedThreshold, struct FLinearColor& WeightColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Equipment_C", "BP_UpdateWeight");

	Params::UW_Panel_Equipment_C_BP_UpdateWeight_Params Parms{};

	Parms.Percent = Percent;
	Parms.MediumThreshold = MediumThreshold;
	Parms.HeavyThreshold = HeavyThreshold;
	Parms.EncumberedThreshold = EncumberedThreshold;
	Parms.WeightColor = WeightColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Panel_Equipment.W_Panel_Equipment_C.ExecuteUbergraph_W_Panel_Equipment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryGridItem*          K2Node_Event_item                                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAndFocus_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bItemEquipped                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAkAnathemaEvent            K2Node_MakeStruct_AkAnathemaEvent                                (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_percent                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_mediumThreshold                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_heavyThreshold                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_encumberedThreshold                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_weightColor                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Equipment_C::ExecuteUbergraph_W_Panel_Equipment(int32 EntryPoint, class UInventoryGridItem* K2Node_Event_item, bool CallFunc_SelectAndFocus_ReturnValue, bool K2Node_Event_bEnabled, bool K2Node_Event_bItemEquipped, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FAkAnathemaEvent& K2Node_MakeStruct_AkAnathemaEvent, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_percent, float K2Node_Event_mediumThreshold, float K2Node_Event_heavyThreshold, float K2Node_Event_encumberedThreshold, const struct FLinearColor& K2Node_Event_weightColor, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Equipment_C", "ExecuteUbergraph_W_Panel_Equipment");

	Params::UW_Panel_Equipment_C_ExecuteUbergraph_W_Panel_Equipment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_item = K2Node_Event_item;
	Parms.CallFunc_SelectAndFocus_ReturnValue = CallFunc_SelectAndFocus_ReturnValue;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Event_bItemEquipped = K2Node_Event_bItemEquipped;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_MakeStruct_AkAnathemaEvent = K2Node_MakeStruct_AkAnathemaEvent;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_Event_percent = K2Node_Event_percent;
	Parms.K2Node_Event_mediumThreshold = K2Node_Event_mediumThreshold;
	Parms.K2Node_Event_heavyThreshold = K2Node_Event_heavyThreshold;
	Parms.K2Node_Event_encumberedThreshold = K2Node_Event_encumberedThreshold;
	Parms.K2Node_Event_weightColor = K2Node_Event_weightColor;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast_1 = CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast_1 = CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


