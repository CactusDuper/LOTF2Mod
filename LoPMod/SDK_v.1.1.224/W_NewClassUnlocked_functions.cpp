#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_NewClassUnlocked.W_NewClassUnlocked_C
// (None)

class UClass* UW_NewClassUnlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_NewClassUnlocked_C");

	return Clss;
}


// W_NewClassUnlocked_C W_NewClassUnlocked.Default__W_NewClassUnlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_NewClassUnlocked_C* UW_NewClassUnlocked_C::GetDefaultObj()
{
	static class UW_NewClassUnlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_NewClassUnlocked_C*>(UW_NewClassUnlocked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_NewClassUnlocked.W_NewClassUnlocked_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHexConfirmationDialogButton*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_NewClassUnlocked_C::BP_GetDesiredFocusTarget(class UHexConfirmationDialogButton* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewClassUnlocked_C", "BP_GetDesiredFocusTarget");

	Params::UW_NewClassUnlocked_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_NewClassUnlocked.W_NewClassUnlocked_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_NewClassUnlocked_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewClassUnlocked_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NewClassUnlocked.W_NewClassUnlocked_C.ExecuteUbergraph_W_NewClassUnlocked
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexConfirmationDialogButton*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ConfirmationDialogButton_C*K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAndFocus_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NewClassUnlocked_C::ExecuteUbergraph_W_NewClassUnlocked(int32 EntryPoint, class UHexConfirmationDialogButton* CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UWBP_ConfirmationDialogButton_C* K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SelectAndFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewClassUnlocked_C", "ExecuteUbergraph_W_NewClassUnlocked");

	Params::UW_NewClassUnlocked_C_ExecuteUbergraph_W_NewClassUnlocked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button = K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SelectAndFocus_ReturnValue = CallFunc_SelectAndFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


