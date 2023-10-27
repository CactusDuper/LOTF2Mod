#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConfirmationDialogButton_Hold.WBP_ConfirmationDialogButton_Hold_C
// (None)

class UClass* UWBP_ConfirmationDialogButton_Hold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConfirmationDialogButton_Hold_C");

	return Clss;
}


// WBP_ConfirmationDialogButton_Hold_C WBP_ConfirmationDialogButton_Hold.Default__WBP_ConfirmationDialogButton_Hold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConfirmationDialogButton_Hold_C* UWBP_ConfirmationDialogButton_Hold_C::GetDefaultObj()
{
	static class UWBP_ConfirmationDialogButton_Hold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConfirmationDialogButton_Hold_C*>(UWBP_ConfirmationDialogButton_Hold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConfirmationDialogButton_Hold.WBP_ConfirmationDialogButton_Hold_C.Update Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_GetInputAction_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetControllerIconByEventName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ConfirmationDialogButton_Hold_C::Update_Icon(const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationDialogButton_Hold_C", "Update Icon");

	Params::UWBP_ConfirmationDialogButton_Hold_C_Update_Icon_Params Parms{};

	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_GetControllerIconByEventName_ReturnValue = CallFunc_GetControllerIconByEventName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConfirmationDialogButton_Hold.WBP_ConfirmationDialogButton_Hold_C.BndEvt__WBP_ConfirmationDialogButton_Hold_Root_Button_K2Node_ComponentBoundEvent_1_OnHoldActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ConfirmationDialogButton_Hold_C::BndEvt__WBP_ConfirmationDialogButton_Hold_Root_Button_K2Node_ComponentBoundEvent_1_OnHoldActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationDialogButton_Hold_C", "BndEvt__WBP_ConfirmationDialogButton_Hold_Root_Button_K2Node_ComponentBoundEvent_1_OnHoldActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConfirmationDialogButton_Hold.WBP_ConfirmationDialogButton_Hold_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ConfirmationDialogButton_Hold_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationDialogButton_Hold_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConfirmationDialogButton_Hold.WBP_ConfirmationDialogButton_Hold_C.On Input Method Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConfirmationDialogButton_Hold_C::On_Input_Method_Changed(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationDialogButton_Hold_C", "On Input Method Changed");

	Params::UWBP_ConfirmationDialogButton_Hold_C_On_Input_Method_Changed_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConfirmationDialogButton_Hold.WBP_ConfirmationDialogButton_Hold_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConfirmationDialogButton_Hold_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationDialogButton_Hold_C", "PreConstruct");

	Params::UWBP_ConfirmationDialogButton_Hold_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConfirmationDialogButton_Hold.WBP_ConfirmationDialogButton_Hold_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ConfirmationDialogButton_Hold_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationDialogButton_Hold_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConfirmationDialogButton_Hold.WBP_ConfirmationDialogButton_Hold_C.ExecuteUbergraph_WBP_ConfirmationDialogButton_Hold
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConfirmationDialogButton_Hold_C::ExecuteUbergraph_WBP_ConfirmationDialogButton_Hold(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationDialogButton_Hold_C", "ExecuteUbergraph_WBP_ConfirmationDialogButton_Hold");

	Params::UWBP_ConfirmationDialogButton_Hold_C_ExecuteUbergraph_WBP_ConfirmationDialogButton_Hold_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


