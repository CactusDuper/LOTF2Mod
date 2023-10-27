#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Row_Spells.W_Row_Spells_C
// (None)

class UClass* UW_Row_Spells_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Row_Spells_C");

	return Clss;
}


// W_Row_Spells_C W_Row_Spells.Default__W_Row_Spells_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Row_Spells_C* UW_Row_Spells_C::GetDefaultObj()
{
	static class UW_Row_Spells_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Row_Spells_C*>(UW_Row_Spells_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Row_Spells.W_Row_Spells_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Row_Spells_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Row_Spells_C", "PreConstruct");

	Params::UW_Row_Spells_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Row_Spells.W_Row_Spells_C.ExecuteUbergraph_W_Row_Spells
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Row_Spells_C::ExecuteUbergraph_W_Row_Spells(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Row_Spells_C", "ExecuteUbergraph_W_Row_Spells");

	Params::UW_Row_Spells_C_ExecuteUbergraph_W_Row_Spells_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


