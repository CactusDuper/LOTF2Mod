#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingListEntry_Scalar_ScreenCalibration.WBP_SettingListEntry_Scalar_ScreenCalibration_C
// (None)

class UClass* UWBP_SettingListEntry_Scalar_ScreenCalibration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingListEntry_Scalar_ScreenCalibration_C");

	return Clss;
}


// WBP_SettingListEntry_Scalar_ScreenCalibration_C WBP_SettingListEntry_Scalar_ScreenCalibration.Default__WBP_SettingListEntry_Scalar_ScreenCalibration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingListEntry_Scalar_ScreenCalibration_C* UWBP_SettingListEntry_Scalar_ScreenCalibration_C::GetDefaultObj()
{
	static class UWBP_SettingListEntry_Scalar_ScreenCalibration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingListEntry_Scalar_ScreenCalibration_C*>(UWBP_SettingListEntry_Scalar_ScreenCalibration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingListEntry_Scalar_ScreenCalibration.WBP_SettingListEntry_Scalar_ScreenCalibration_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_SettingListEntry_Scalar_ScreenCalibration_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Scalar_ScreenCalibration_C", "GetPrimaryGamepadFocusWidget");

	Params::UWBP_SettingListEntry_Scalar_ScreenCalibration_C_GetPrimaryGamepadFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SettingListEntry_Scalar_ScreenCalibration.WBP_SettingListEntry_Scalar_ScreenCalibration_C.BndEvt__WBP_SettingListEntry_Scalar_ScreenCalibration_Decrement_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SettingListEntry_Scalar_ScreenCalibration_C::BndEvt__WBP_SettingListEntry_Scalar_ScreenCalibration_Decrement_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Scalar_ScreenCalibration_C", "BndEvt__WBP_SettingListEntry_Scalar_ScreenCalibration_Decrement_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingListEntry_Scalar_ScreenCalibration.WBP_SettingListEntry_Scalar_ScreenCalibration_C.BndEvt__WBP_SettingListEntry_Scalar_ScreenCalibration_Increment_Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SettingListEntry_Scalar_ScreenCalibration_C::BndEvt__WBP_SettingListEntry_Scalar_ScreenCalibration_Increment_Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Scalar_ScreenCalibration_C", "BndEvt__WBP_SettingListEntry_Scalar_ScreenCalibration_Increment_Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingListEntry_Scalar_ScreenCalibration.WBP_SettingListEntry_Scalar_ScreenCalibration_C.ExecuteUbergraph_WBP_SettingListEntry_Scalar_ScreenCalibration
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingListEntry_Scalar_ScreenCalibration_C::ExecuteUbergraph_WBP_SettingListEntry_Scalar_ScreenCalibration(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Scalar_ScreenCalibration_C", "ExecuteUbergraph_WBP_SettingListEntry_Scalar_ScreenCalibration");

	Params::UWBP_SettingListEntry_Scalar_ScreenCalibration_C_ExecuteUbergraph_WBP_SettingListEntry_Scalar_ScreenCalibration_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


