#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConfirmationDialogButton.WBP_ConfirmationDialogButton_C
// (None)

class UClass* UWBP_ConfirmationDialogButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConfirmationDialogButton_C");

	return Clss;
}


// WBP_ConfirmationDialogButton_C WBP_ConfirmationDialogButton.Default__WBP_ConfirmationDialogButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConfirmationDialogButton_C* UWBP_ConfirmationDialogButton_C::GetDefaultObj()
{
	static class UWBP_ConfirmationDialogButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConfirmationDialogButton_C*>(UWBP_ConfirmationDialogButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConfirmationDialogButton.WBP_ConfirmationDialogButton_C.BndEvt__WBP_ConfirmationDialogButton_Root_Button_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ConfirmationDialogButton_C::BndEvt__WBP_ConfirmationDialogButton_Root_Button_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationDialogButton_C", "BndEvt__WBP_ConfirmationDialogButton_Root_Button_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConfirmationDialogButton.WBP_ConfirmationDialogButton_C.ExecuteUbergraph_WBP_ConfirmationDialogButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConfirmationDialogButton_C::ExecuteUbergraph_WBP_ConfirmationDialogButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationDialogButton_C", "ExecuteUbergraph_WBP_ConfirmationDialogButton");

	Params::UWBP_ConfirmationDialogButton_C_ExecuteUbergraph_WBP_ConfirmationDialogButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


