#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingListEntry_ControllerPreview.WBP_SettingListEntry_ControllerPreview_C
// (None)

class UClass* UWBP_SettingListEntry_ControllerPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingListEntry_ControllerPreview_C");

	return Clss;
}


// WBP_SettingListEntry_ControllerPreview_C WBP_SettingListEntry_ControllerPreview.Default__WBP_SettingListEntry_ControllerPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingListEntry_ControllerPreview_C* UWBP_SettingListEntry_ControllerPreview_C::GetDefaultObj()
{
	static class UWBP_SettingListEntry_ControllerPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingListEntry_ControllerPreview_C*>(UWBP_SettingListEntry_ControllerPreview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingListEntry_ControllerPreview.WBP_SettingListEntry_ControllerPreview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingListEntry_ControllerPreview_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_ControllerPreview_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingListEntry_ControllerPreview.WBP_SettingListEntry_ControllerPreview_C.ExecuteUbergraph_WBP_SettingListEntry_ControllerPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingListEntry_ControllerPreview_C::ExecuteUbergraph_WBP_SettingListEntry_ControllerPreview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_ControllerPreview_C", "ExecuteUbergraph_WBP_SettingListEntry_ControllerPreview");

	Params::UWBP_SettingListEntry_ControllerPreview_C_ExecuteUbergraph_WBP_SettingListEntry_ControllerPreview_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


