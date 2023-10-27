#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ClientSubtitleExt.W_ClientSubtitleExt_C
// (None)

class UClass* UW_ClientSubtitleExt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ClientSubtitleExt_C");

	return Clss;
}


// W_ClientSubtitleExt_C W_ClientSubtitleExt.Default__W_ClientSubtitleExt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ClientSubtitleExt_C* UW_ClientSubtitleExt_C::GetDefaultObj()
{
	static class UW_ClientSubtitleExt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ClientSubtitleExt_C*>(UW_ClientSubtitleExt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ClientSubtitleExt.W_ClientSubtitleExt_C.BP_SetDuration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClientSubtitleExt_C::BP_SetDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClientSubtitleExt_C", "BP_SetDuration");

	Params::UW_ClientSubtitleExt_C_BP_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClientSubtitleExt.W_ClientSubtitleExt_C.BP_OnDeactivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ClientSubtitleExt_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClientSubtitleExt_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClientSubtitleExt.W_ClientSubtitleExt_C.BP_OnActivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ClientSubtitleExt_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClientSubtitleExt_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClientSubtitleExt.W_ClientSubtitleExt_C.ExecuteUbergraph_W_ClientSubtitleExt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClientSubtitleExt_C::ExecuteUbergraph_W_ClientSubtitleExt(int32 EntryPoint, float K2Node_Event_duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClientSubtitleExt_C", "ExecuteUbergraph_W_ClientSubtitleExt");

	Params::UW_ClientSubtitleExt_C_ExecuteUbergraph_W_ClientSubtitleExt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_duration = K2Node_Event_duration;

	UObject::ProcessEvent(Func, &Parms);

}

}


