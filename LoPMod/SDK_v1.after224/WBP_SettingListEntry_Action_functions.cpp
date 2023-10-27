#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingListEntry_Action.WBP_SettingListEntry_Action_C
// (None)

class UClass* UWBP_SettingListEntry_Action_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingListEntry_Action_C");

	return Clss;
}


// WBP_SettingListEntry_Action_C WBP_SettingListEntry_Action.Default__WBP_SettingListEntry_Action_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingListEntry_Action_C* UWBP_SettingListEntry_Action_C::GetDefaultObj()
{
	static class UWBP_SettingListEntry_Action_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingListEntry_Action_C*>(UWBP_SettingListEntry_Action_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingListEntry_Action.WBP_SettingListEntry_Action_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_SettingListEntry_Action_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Action_C", "GetPrimaryGamepadFocusWidget");

	Params::UWBP_SettingListEntry_Action_C_GetPrimaryGamepadFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SettingListEntry_Action.WBP_SettingListEntry_Action_C.OnSettingAssigned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SettingListEntry_Action_C::OnSettingAssigned(class FText& ActionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Action_C", "OnSettingAssigned");

	Params::UWBP_SettingListEntry_Action_C_OnSettingAssigned_Params Parms{};

	Parms.ActionText = ActionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingListEntry_Action.WBP_SettingListEntry_Action_C.ExecuteUbergraph_WBP_SettingListEntry_Action
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_actionText                                          (ConstParm)

void UWBP_SettingListEntry_Action_C::ExecuteUbergraph_WBP_SettingListEntry_Action(int32 EntryPoint, class FText K2Node_Event_actionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Action_C", "ExecuteUbergraph_WBP_SettingListEntry_Action");

	Params::UWBP_SettingListEntry_Action_C_ExecuteUbergraph_WBP_SettingListEntry_Action_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_actionText = K2Node_Event_actionText;

	UObject::ProcessEvent(Func, &Parms);

}

}


