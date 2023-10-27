#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Preset_Name.W_Preset_Name_C
// (None)

class UClass* UW_Preset_Name_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Preset_Name_C");

	return Clss;
}


// W_Preset_Name_C W_Preset_Name.Default__W_Preset_Name_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Preset_Name_C* UW_Preset_Name_C::GetDefaultObj()
{
	static class UW_Preset_Name_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Preset_Name_C*>(UW_Preset_Name_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Preset_Name.W_Preset_Name_C.SetPresetName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PresetName                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Preset_Name_C::SetPresetName(class FText& PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Preset_Name_C", "SetPresetName");

	Params::UW_Preset_Name_C_SetPresetName_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Preset_Name.W_Preset_Name_C.ExecuteUbergraph_W_Preset_Name
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_presetName                                          (ConstParm)

void UW_Preset_Name_C::ExecuteUbergraph_W_Preset_Name(int32 EntryPoint, class FText K2Node_Event_presetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Preset_Name_C", "ExecuteUbergraph_W_Preset_Name");

	Params::UW_Preset_Name_C_ExecuteUbergraph_W_Preset_Name_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_presetName = K2Node_Event_presetName;

	UObject::ProcessEvent(Func, &Parms);

}

}


