#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SummaryText.W_SummaryText_C
// (None)

class UClass* UW_SummaryText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SummaryText_C");

	return Clss;
}


// W_SummaryText_C W_SummaryText.Default__W_SummaryText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SummaryText_C* UW_SummaryText_C::GetDefaultObj()
{
	static class UW_SummaryText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SummaryText_C*>(UW_SummaryText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SummaryText.W_SummaryText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SummaryText_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SummaryText_C", "PreConstruct");

	Params::UW_SummaryText_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SummaryText.W_SummaryText_C.ExecuteUbergraph_W_SummaryText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SummaryText_C::ExecuteUbergraph_W_SummaryText(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SummaryText_C", "ExecuteUbergraph_W_SummaryText");

	Params::UW_SummaryText_C_ExecuteUbergraph_W_SummaryText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

