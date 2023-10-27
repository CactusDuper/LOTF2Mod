#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_IngameBottomBar.W_IngameBottomBar_C
// (None)

class UClass* UW_IngameBottomBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_IngameBottomBar_C");

	return Clss;
}


// W_IngameBottomBar_C W_IngameBottomBar.Default__W_IngameBottomBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_IngameBottomBar_C* UW_IngameBottomBar_C::GetDefaultObj()
{
	static class UW_IngameBottomBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_IngameBottomBar_C*>(UW_IngameBottomBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_IngameBottomBar.W_IngameBottomBar_C.SetNavigationBoxOptions
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              InNavigationOptions                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_IngameBottomBar_C::SetNavigationBoxOptions(uint8 InNavigationOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameBottomBar_C", "SetNavigationBoxOptions");

	Params::UW_IngameBottomBar_C_SetNavigationBoxOptions_Params Parms{};

	Parms.InNavigationOptions = InNavigationOptions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameBottomBar.W_IngameBottomBar_C.SetSwitchPercent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENavigationBoxOptions   NavOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_IngameBottomBar_C::SetSwitchPercent(enum class ENavigationBoxOptions NavOption, float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameBottomBar_C", "SetSwitchPercent");

	Params::UW_IngameBottomBar_C_SetSwitchPercent_Params Parms{};

	Parms.NavOption = NavOption;
	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameBottomBar.W_IngameBottomBar_C.ExecuteUbergraph_W_IngameBottomBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_inNavigationOptions                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENavigationBoxOptions   K2Node_Event_navOption                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_progress                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_IngameBottomBar_C::ExecuteUbergraph_W_IngameBottomBar(int32 EntryPoint, uint8 K2Node_Event_inNavigationOptions, enum class ENavigationBoxOptions K2Node_Event_navOption, float K2Node_Event_progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameBottomBar_C", "ExecuteUbergraph_W_IngameBottomBar");

	Params::UW_IngameBottomBar_C_ExecuteUbergraph_W_IngameBottomBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_inNavigationOptions = K2Node_Event_inNavigationOptions;
	Parms.K2Node_Event_navOption = K2Node_Event_navOption;
	Parms.K2Node_Event_progress = K2Node_Event_progress;

	UObject::ProcessEvent(Func, &Parms);

}

}


