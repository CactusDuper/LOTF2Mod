#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingsTabButton.WBP_SettingsTabButton_C
// (None)

class UClass* UWBP_SettingsTabButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingsTabButton_C");

	return Clss;
}


// WBP_SettingsTabButton_C WBP_SettingsTabButton.Default__WBP_SettingsTabButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingsTabButton_C* UWBP_SettingsTabButton_C::GetDefaultObj()
{
	static class UWBP_SettingsTabButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingsTabButton_C*>(UWBP_SettingsTabButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingsTabButton.WBP_SettingsTabButton_C.OnRefreshVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_SettingsTabButton_C::OnRefreshVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsTabButton_C", "OnRefreshVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsTabButton.WBP_SettingsTabButton_C.ExecuteUbergraph_WBP_SettingsTabButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsTabButton_C::ExecuteUbergraph_WBP_SettingsTabButton(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsTabButton_C", "ExecuteUbergraph_WBP_SettingsTabButton");

	Params::UWBP_SettingsTabButton_C_ExecuteUbergraph_WBP_SettingsTabButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


