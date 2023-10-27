#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SmallCharStats.W_SmallCharStats_C
// (None)

class UClass* UW_SmallCharStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SmallCharStats_C");

	return Clss;
}


// W_SmallCharStats_C W_SmallCharStats.Default__W_SmallCharStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SmallCharStats_C* UW_SmallCharStats_C::GetDefaultObj()
{
	static class UW_SmallCharStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SmallCharStats_C*>(UW_SmallCharStats_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SmallCharStats.W_SmallCharStats_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SmallCharStats_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SmallCharStats_C", "PreConstruct");

	Params::UW_SmallCharStats_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SmallCharStats.W_SmallCharStats_C.ExecuteUbergraph_W_SmallCharStats
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SmallCharStats_C::ExecuteUbergraph_W_SmallCharStats(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SmallCharStats_C", "ExecuteUbergraph_W_SmallCharStats");

	Params::UW_SmallCharStats_C_ExecuteUbergraph_W_SmallCharStats_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


