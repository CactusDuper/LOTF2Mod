#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingListEntry_Discrete_SubCollection.WBP_SettingListEntry_Discrete_SubCollection_C
// (None)

class UClass* UWBP_SettingListEntry_Discrete_SubCollection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingListEntry_Discrete_SubCollection_C");

	return Clss;
}


// WBP_SettingListEntry_Discrete_SubCollection_C WBP_SettingListEntry_Discrete_SubCollection.Default__WBP_SettingListEntry_Discrete_SubCollection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingListEntry_Discrete_SubCollection_C* UWBP_SettingListEntry_Discrete_SubCollection_C::GetDefaultObj()
{
	static class UWBP_SettingListEntry_Discrete_SubCollection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingListEntry_Discrete_SubCollection_C*>(UWBP_SettingListEntry_Discrete_SubCollection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingListEntry_Discrete_SubCollection.WBP_SettingListEntry_Discrete_SubCollection_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_SettingListEntry_Discrete_SubCollection_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Discrete_SubCollection_C", "GetPrimaryGamepadFocusWidget");

	Params::UWBP_SettingListEntry_Discrete_SubCollection_C_GetPrimaryGamepadFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


