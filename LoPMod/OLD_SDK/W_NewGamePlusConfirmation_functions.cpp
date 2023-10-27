#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_NewGamePlusConfirmation.W_NewGamePlusConfirmation_C
// (None)

class UClass* UW_NewGamePlusConfirmation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_NewGamePlusConfirmation_C");

	return Clss;
}


// W_NewGamePlusConfirmation_C W_NewGamePlusConfirmation.Default__W_NewGamePlusConfirmation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_NewGamePlusConfirmation_C* UW_NewGamePlusConfirmation_C::GetDefaultObj()
{
	static class UW_NewGamePlusConfirmation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_NewGamePlusConfirmation_C*>(UW_NewGamePlusConfirmation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_NewGamePlusConfirmation.W_NewGamePlusConfirmation_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHexConfirmationDialogButton*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_NewGamePlusConfirmation_C::BP_GetDesiredFocusTarget(class UHexConfirmationDialogButton* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewGamePlusConfirmation_C", "BP_GetDesiredFocusTarget");

	Params::UW_NewGamePlusConfirmation_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_NewGamePlusConfirmation.W_NewGamePlusConfirmation_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_NewGamePlusConfirmation_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewGamePlusConfirmation_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NewGamePlusConfirmation.W_NewGamePlusConfirmation_C.ExecuteUbergraph_W_NewGamePlusConfirmation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexConfirmationDialogButton*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ConfirmationDialogButton_Hold_C*K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button_Hold         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAndFocus_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NewGamePlusConfirmation_C::ExecuteUbergraph_W_NewGamePlusConfirmation(int32 EntryPoint, class UHexConfirmationDialogButton* CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UWBP_ConfirmationDialogButton_Hold_C* K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button_Hold, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SelectAndFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewGamePlusConfirmation_C", "ExecuteUbergraph_W_NewGamePlusConfirmation");

	Params::UW_NewGamePlusConfirmation_C_ExecuteUbergraph_W_NewGamePlusConfirmation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button_Hold = K2Node_DynamicCast_AsWBP_Confirmation_Dialog_Button_Hold;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SelectAndFocus_ReturnValue = CallFunc_SelectAndFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


