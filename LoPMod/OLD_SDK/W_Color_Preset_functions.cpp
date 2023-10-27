#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Color_Preset.W_Color_Preset_C
// (None)

class UClass* UW_Color_Preset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Color_Preset_C");

	return Clss;
}


// W_Color_Preset_C W_Color_Preset.Default__W_Color_Preset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Color_Preset_C* UW_Color_Preset_C::GetDefaultObj()
{
	static class UW_Color_Preset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Color_Preset_C*>(UW_Color_Preset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Color_Preset.W_Color_Preset_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Color_Preset_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Color_Preset_C", "PreConstruct");

	Params::UW_Color_Preset_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Color_Preset.W_Color_Preset_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Selected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Color_Preset_C::Set_Selected(bool Is_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Color_Preset_C", "Set Selected");

	Params::UW_Color_Preset_C_Set_Selected_Params Parms{};

	Parms.Is_Selected = Is_Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Color_Preset.W_Color_Preset_C.On Focus In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Color_Preset_C::On_Focus_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Color_Preset_C", "On Focus In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Color_Preset.W_Color_Preset_C.On Focus Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Color_Preset_C::On_Focus_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Color_Preset_C", "On Focus Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Color_Preset.W_Color_Preset_C.ExecuteUbergraph_W_Color_Preset
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Selected                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Color_Preset_C::ExecuteUbergraph_W_Color_Preset(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_Is_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Color_Preset_C", "ExecuteUbergraph_W_Color_Preset");

	Params::UW_Color_Preset_C_ExecuteUbergraph_W_Color_Preset_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Is_Selected = K2Node_CustomEvent_Is_Selected;

	UObject::ProcessEvent(Func, &Parms);

}

}


