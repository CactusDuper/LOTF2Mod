#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_BuffIconWidget.W_BuffIconWidget_C
// (None)

class UClass* UW_BuffIconWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_BuffIconWidget_C");

	return Clss;
}


// W_BuffIconWidget_C W_BuffIconWidget.Default__W_BuffIconWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_BuffIconWidget_C* UW_BuffIconWidget_C::GetDefaultObj()
{
	static class UW_BuffIconWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_BuffIconWidget_C*>(UW_BuffIconWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_BuffIconWidget.W_BuffIconWidget_C.BP_SetDuration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BuffIconWidget_C::BP_SetDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BuffIconWidget_C", "BP_SetDuration");

	Params::UW_BuffIconWidget_C_BP_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BuffIconWidget.W_BuffIconWidget_C.BP_OnDeactivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BuffIconWidget_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BuffIconWidget_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BuffIconWidget.W_BuffIconWidget_C.BP_OnActivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BuffIconWidget_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BuffIconWidget_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BuffIconWidget.W_BuffIconWidget_C.ExecuteUbergraph_W_BuffIconWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BuffIconWidget_C::ExecuteUbergraph_W_BuffIconWidget(int32 EntryPoint, bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_Event_duration, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BuffIconWidget_C", "ExecuteUbergraph_W_BuffIconWidget");

	Params::UW_BuffIconWidget_C_ExecuteUbergraph_W_BuffIconWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_duration = K2Node_Event_duration;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


