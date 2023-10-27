#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SimpleStatsPanel.W_SimpleStatsPanel_C
// (None)

class UClass* UW_SimpleStatsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SimpleStatsPanel_C");

	return Clss;
}


// W_SimpleStatsPanel_C W_SimpleStatsPanel.Default__W_SimpleStatsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SimpleStatsPanel_C* UW_SimpleStatsPanel_C::GetDefaultObj()
{
	static class UW_SimpleStatsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SimpleStatsPanel_C*>(UW_SimpleStatsPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SimpleStatsPanel.W_SimpleStatsPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SimpleStatsPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SimpleStatsPanel_C", "PreConstruct");

	Params::UW_SimpleStatsPanel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SimpleStatsPanel.W_SimpleStatsPanel_C.ExecuteUbergraph_W_SimpleStatsPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SimpleStatsPanel_C::ExecuteUbergraph_W_SimpleStatsPanel(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SimpleStatsPanel_C", "ExecuteUbergraph_W_SimpleStatsPanel");

	Params::UW_SimpleStatsPanel_C_ExecuteUbergraph_W_SimpleStatsPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


