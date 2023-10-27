#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Panel_Quit.W_Panel_Quit_C
// (None)

class UClass* UW_Panel_Quit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Panel_Quit_C");

	return Clss;
}


// W_Panel_Quit_C W_Panel_Quit.Default__W_Panel_Quit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Panel_Quit_C* UW_Panel_Quit_C::GetDefaultObj()
{
	static class UW_Panel_Quit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Panel_Quit_C*>(UW_Panel_Quit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Panel_Quit.W_Panel_Quit_C.Select Leave Session
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Quit_C::Select_Leave_Session(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Quit_C", "Select Leave Session");

	Params::UW_Panel_Quit_C_Select_Leave_Session_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Panel_Quit.W_Panel_Quit_C.Select Kick Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Quit_C::Select_Kick_Player(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Quit_C", "Select Kick Player");

	Params::UW_Panel_Quit_C_Select_Kick_Player_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Panel_Quit.W_Panel_Quit_C.Navigate Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Quit_C::Navigate_Down(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Quit_C", "Navigate Down");

	Params::UW_Panel_Quit_C_Navigate_Down_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Panel_Quit.W_Panel_Quit_C.Navigate Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Quit_C::Navigate_Up(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Quit_C", "Navigate Up");

	Params::UW_Panel_Quit_C_Navigate_Up_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Panel_Quit.W_Panel_Quit_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Panel_Quit_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Quit_C", "GetDesiredFocusTarget");

	Params::UW_Panel_Quit_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Panel_Quit.W_Panel_Quit_C.BndEvt__W_Panel_Quit_Button_Exit_K2Node_ComponentBoundEvent_1_OnHoldActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Panel_Quit_C::BndEvt__W_Panel_Quit_Button_Exit_K2Node_ComponentBoundEvent_1_OnHoldActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Quit_C", "BndEvt__W_Panel_Quit_Button_Exit_K2Node_ComponentBoundEvent_1_OnHoldActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Panel_Quit.W_Panel_Quit_C.ExecuteUbergraph_W_Panel_Quit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAkAnathemaEvent            K2Node_MakeStruct_AkAnathemaEvent                                (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Quit_C::ExecuteUbergraph_W_Panel_Quit(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, const struct FAkAnathemaEvent& K2Node_MakeStruct_AkAnathemaEvent, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Quit_C", "ExecuteUbergraph_W_Panel_Quit");

	Params::UW_Panel_Quit_C_ExecuteUbergraph_W_Panel_Quit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_MakeStruct_AkAnathemaEvent = K2Node_MakeStruct_AkAnathemaEvent;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


