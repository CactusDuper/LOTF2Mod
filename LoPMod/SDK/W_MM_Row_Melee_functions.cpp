#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MM_Row_Melee.W_MM_Row_Melee_C
// (None)

class UClass* UW_MM_Row_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MM_Row_Melee_C");

	return Clss;
}


// W_MM_Row_Melee_C W_MM_Row_Melee.Default__W_MM_Row_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MM_Row_Melee_C* UW_MM_Row_Melee_C::GetDefaultObj()
{
	static class UW_MM_Row_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MM_Row_Melee_C*>(UW_MM_Row_Melee_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MM_Row_Melee.W_MM_Row_Melee_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MM_Row_Melee_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_Row_Melee_C", "PreConstruct");

	Params::UW_MM_Row_Melee_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MM_Row_Melee.W_MM_Row_Melee_C.ExecuteUbergraph_W_MM_Row_Melee
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MM_Row_Melee_C::ExecuteUbergraph_W_MM_Row_Melee(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_Row_Melee_C", "ExecuteUbergraph_W_MM_Row_Melee");

	Params::UW_MM_Row_Melee_C_ExecuteUbergraph_W_MM_Row_Melee_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


