#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LegendaryEdition_Panel.W_LegendaryEdition_Panel_C
// (None)

class UClass* UW_LegendaryEdition_Panel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LegendaryEdition_Panel_C");

	return Clss;
}


// W_LegendaryEdition_Panel_C W_LegendaryEdition_Panel.Default__W_LegendaryEdition_Panel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LegendaryEdition_Panel_C* UW_LegendaryEdition_Panel_C::GetDefaultObj()
{
	static class UW_LegendaryEdition_Panel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LegendaryEdition_Panel_C*>(UW_LegendaryEdition_Panel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LegendaryEdition_Panel.W_LegendaryEdition_Panel_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_LegendaryEdition_Panel_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LegendaryEdition_Panel_C", "GetDesiredFocusTarget");

	Params::UW_LegendaryEdition_Panel_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


