#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Row_Ranged.W_Row_Ranged_C
// (None)

class UClass* UW_Row_Ranged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Row_Ranged_C");

	return Clss;
}


// W_Row_Ranged_C W_Row_Ranged.Default__W_Row_Ranged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Row_Ranged_C* UW_Row_Ranged_C::GetDefaultObj()
{
	static class UW_Row_Ranged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Row_Ranged_C*>(UW_Row_Ranged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Row_Ranged.W_Row_Ranged_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Row_Ranged_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Row_Ranged_C", "PreConstruct");

	Params::UW_Row_Ranged_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Row_Ranged.W_Row_Ranged_C.ExecuteUbergraph_W_Row_Ranged
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Row_Ranged_C::ExecuteUbergraph_W_Row_Ranged(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Row_Ranged_C", "ExecuteUbergraph_W_Row_Ranged");

	Params::UW_Row_Ranged_C_ExecuteUbergraph_W_Row_Ranged_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


