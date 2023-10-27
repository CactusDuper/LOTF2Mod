#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_DLC_OwnedConfirmation.W_DLC_OwnedConfirmation_C
// (None)

class UClass* UW_DLC_OwnedConfirmation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_DLC_OwnedConfirmation_C");

	return Clss;
}


// W_DLC_OwnedConfirmation_C W_DLC_OwnedConfirmation.Default__W_DLC_OwnedConfirmation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_DLC_OwnedConfirmation_C* UW_DLC_OwnedConfirmation_C::GetDefaultObj()
{
	static class UW_DLC_OwnedConfirmation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_DLC_OwnedConfirmation_C*>(UW_DLC_OwnedConfirmation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_DLC_OwnedConfirmation.W_DLC_OwnedConfirmation_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHexConfirmationDialogButton*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_DLC_OwnedConfirmation_C::BP_GetDesiredFocusTarget(class UHexConfirmationDialogButton* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DLC_OwnedConfirmation_C", "BP_GetDesiredFocusTarget");

	Params::UW_DLC_OwnedConfirmation_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_DLC_OwnedConfirmation.W_DLC_OwnedConfirmation_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_DLC_OwnedConfirmation_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DLC_OwnedConfirmation_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DLC_OwnedConfirmation.W_DLC_OwnedConfirmation_C.Focus Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DLC_OwnedConfirmation_C::Focus_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DLC_OwnedConfirmation_C", "Focus Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DLC_OwnedConfirmation.W_DLC_OwnedConfirmation_C.ExecuteUbergraph_W_DLC_OwnedConfirmation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexConfirmationDialogButton*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ConfirmationDialogButton_C*K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAndFocus_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DLC_OwnedConfirmation_C::ExecuteUbergraph_W_DLC_OwnedConfirmation(int32 EntryPoint, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UHexConfirmationDialogButton* CallFunc_Array_Get_Item, class UWBP_ConfirmationDialogButton_C* K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SelectAndFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DLC_OwnedConfirmation_C", "ExecuteUbergraph_W_DLC_OwnedConfirmation");

	Params::UW_DLC_OwnedConfirmation_C_ExecuteUbergraph_W_DLC_OwnedConfirmation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button = K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SelectAndFocus_ReturnValue = CallFunc_SelectAndFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


