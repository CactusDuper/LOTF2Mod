#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MM_Row_Usables.W_MM_Row_Usables_C
// (None)

class UClass* UW_MM_Row_Usables_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MM_Row_Usables_C");

	return Clss;
}


// W_MM_Row_Usables_C W_MM_Row_Usables.Default__W_MM_Row_Usables_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MM_Row_Usables_C* UW_MM_Row_Usables_C::GetDefaultObj()
{
	static class UW_MM_Row_Usables_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MM_Row_Usables_C*>(UW_MM_Row_Usables_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MM_Row_Usables.W_MM_Row_Usables_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MM_Row_Usables_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_Row_Usables_C", "PreConstruct");

	Params::UW_MM_Row_Usables_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MM_Row_Usables.W_MM_Row_Usables_C.ExecuteUbergraph_W_MM_Row_Usables
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MM_Row_Usables_C::ExecuteUbergraph_W_MM_Row_Usables(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_Row_Usables_C", "ExecuteUbergraph_W_MM_Row_Usables");

	Params::UW_MM_Row_Usables_C_ExecuteUbergraph_W_MM_Row_Usables_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


