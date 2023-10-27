#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_NewAnchorActivated.W_NewAnchorActivated_C
// (None)

class UClass* UW_NewAnchorActivated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_NewAnchorActivated_C");

	return Clss;
}


// W_NewAnchorActivated_C W_NewAnchorActivated.Default__W_NewAnchorActivated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_NewAnchorActivated_C* UW_NewAnchorActivated_C::GetDefaultObj()
{
	static class UW_NewAnchorActivated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_NewAnchorActivated_C*>(UW_NewAnchorActivated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_NewAnchorActivated.W_NewAnchorActivated_C.Finished_7ECF6CBE4C4E5EA96EDB2983E9DC9E34
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_NewAnchorActivated_C::Finished_7ECF6CBE4C4E5EA96EDB2983E9DC9E34()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewAnchorActivated_C", "Finished_7ECF6CBE4C4E5EA96EDB2983E9DC9E34");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NewAnchorActivated.W_NewAnchorActivated_C.Finished_5DF5AA5E4820B14885152B9E6E39E605
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_NewAnchorActivated_C::Finished_5DF5AA5E4820B14885152B9E6E39E605()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewAnchorActivated_C", "Finished_5DF5AA5E4820B14885152B9E6E39E605");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NewAnchorActivated.W_NewAnchorActivated_C.BP_OnActivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_NewAnchorActivated_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewAnchorActivated_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NewAnchorActivated.W_NewAnchorActivated_C.BP_SetDuration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NewAnchorActivated_C::BP_SetDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewAnchorActivated_C", "BP_SetDuration");

	Params::UW_NewAnchorActivated_C_BP_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NewAnchorActivated.W_NewAnchorActivated_C.ExecuteUbergraph_W_NewAnchorActivated
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NewAnchorActivated_C::ExecuteUbergraph_W_NewAnchorActivated(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, float K2Node_Event_duration, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NewAnchorActivated_C", "ExecuteUbergraph_W_NewAnchorActivated");

	Params::UW_NewAnchorActivated_C_ExecuteUbergraph_W_NewAnchorActivated_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_Event_duration = K2Node_Event_duration;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


