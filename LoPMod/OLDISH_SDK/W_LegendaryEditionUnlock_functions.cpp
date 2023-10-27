#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LegendaryEditionUnlock.W_LegendaryEditionUnlock_C
// (None)

class UClass* UW_LegendaryEditionUnlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LegendaryEditionUnlock_C");

	return Clss;
}


// W_LegendaryEditionUnlock_C W_LegendaryEditionUnlock.Default__W_LegendaryEditionUnlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LegendaryEditionUnlock_C* UW_LegendaryEditionUnlock_C::GetDefaultObj()
{
	static class UW_LegendaryEditionUnlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LegendaryEditionUnlock_C*>(UW_LegendaryEditionUnlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LegendaryEditionUnlock.W_LegendaryEditionUnlock_C.Finished_5B120C5D49080CD0FF639294657D64B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LegendaryEditionUnlock_C::Finished_5B120C5D49080CD0FF639294657D64B9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LegendaryEditionUnlock_C", "Finished_5B120C5D49080CD0FF639294657D64B9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LegendaryEditionUnlock.W_LegendaryEditionUnlock_C.Finished_26966CCF477100BC51E8A0A9F1DD5160
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LegendaryEditionUnlock_C::Finished_26966CCF477100BC51E8A0A9F1DD5160()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LegendaryEditionUnlock_C", "Finished_26966CCF477100BC51E8A0A9F1DD5160");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LegendaryEditionUnlock.W_LegendaryEditionUnlock_C.BP_OnActivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LegendaryEditionUnlock_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LegendaryEditionUnlock_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LegendaryEditionUnlock.W_LegendaryEditionUnlock_C.BP_SetDuration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LegendaryEditionUnlock_C::BP_SetDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LegendaryEditionUnlock_C", "BP_SetDuration");

	Params::UW_LegendaryEditionUnlock_C_BP_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LegendaryEditionUnlock.W_LegendaryEditionUnlock_C.BP_OnDeactivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LegendaryEditionUnlock_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LegendaryEditionUnlock_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LegendaryEditionUnlock.W_LegendaryEditionUnlock_C.ExecuteUbergraph_W_LegendaryEditionUnlock
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LegendaryEditionUnlock_C::ExecuteUbergraph_W_LegendaryEditionUnlock(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_duration, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LegendaryEditionUnlock_C", "ExecuteUbergraph_W_LegendaryEditionUnlock");

	Params::UW_LegendaryEditionUnlock_C_ExecuteUbergraph_W_LegendaryEditionUnlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_duration = K2Node_Event_duration;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


