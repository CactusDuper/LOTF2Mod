#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingListEntry_Scalar_OneIndentation.WBP_SettingListEntry_Scalar_OneIndentation_C
// (None)

class UClass* UWBP_SettingListEntry_Scalar_OneIndentation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingListEntry_Scalar_OneIndentation_C");

	return Clss;
}


// WBP_SettingListEntry_Scalar_OneIndentation_C WBP_SettingListEntry_Scalar_OneIndentation.Default__WBP_SettingListEntry_Scalar_OneIndentation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingListEntry_Scalar_OneIndentation_C* UWBP_SettingListEntry_Scalar_OneIndentation_C::GetDefaultObj()
{
	static class UWBP_SettingListEntry_Scalar_OneIndentation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingListEntry_Scalar_OneIndentation_C*>(UWBP_SettingListEntry_Scalar_OneIndentation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingListEntry_Scalar_OneIndentation.WBP_SettingListEntry_Scalar_OneIndentation_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingListEntry_Scalar_OneIndentation_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Scalar_OneIndentation_C", "PreConstruct");

	Params::UWBP_SettingListEntry_Scalar_OneIndentation_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingListEntry_Scalar_OneIndentation.WBP_SettingListEntry_Scalar_OneIndentation_C.ExecuteUbergraph_WBP_SettingListEntry_Scalar_OneIndentation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingListEntry_Scalar_OneIndentation_C::ExecuteUbergraph_WBP_SettingListEntry_Scalar_OneIndentation(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Scalar_OneIndentation_C", "ExecuteUbergraph_WBP_SettingListEntry_Scalar_OneIndentation");

	Params::UWBP_SettingListEntry_Scalar_OneIndentation_C_ExecuteUbergraph_WBP_SettingListEntry_Scalar_OneIndentation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


