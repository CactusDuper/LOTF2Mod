#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MM_GridItem.W_MM_GridItem_C
// (None)

class UClass* UW_MM_GridItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MM_GridItem_C");

	return Clss;
}


// W_MM_GridItem_C W_MM_GridItem.Default__W_MM_GridItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MM_GridItem_C* UW_MM_GridItem_C::GetDefaultObj()
{
	static class UW_MM_GridItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MM_GridItem_C*>(UW_MM_GridItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MM_GridItem.W_MM_GridItem_C.Update Controller Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputActionImage*           Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetInputAction_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetControllerIconByEventName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_MM_GridItem_C::Update_Controller_Icon(class UInputActionImage* Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_GridItem_C", "Update Controller Icon");

	Params::UW_MM_GridItem_C_Update_Controller_Icon_Params Parms{};

	Parms.Image = Image;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_GetControllerIconByEventName_ReturnValue = CallFunc_GetControllerIconByEventName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MM_GridItem.W_MM_GridItem_C.SetIsNewItem
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsNew                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MM_GridItem_C::SetIsNewItem(bool bIsNew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_GridItem_C", "SetIsNewItem");

	Params::UW_MM_GridItem_C_SetIsNewItem_Params Parms{};

	Parms.bIsNew = bIsNew;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MM_GridItem.W_MM_GridItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MM_GridItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_GridItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MM_GridItem.W_MM_GridItem_C.On Input Method Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MM_GridItem_C::On_Input_Method_Changed(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_GridItem_C", "On Input Method Changed");

	Params::UW_MM_GridItem_C_On_Input_Method_Changed_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MM_GridItem.W_MM_GridItem_C.ShowInputAction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InputAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UW_MM_GridItem_C::ShowInputAction(const struct FGameplayTag& InputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_GridItem_C", "ShowInputAction");

	Params::UW_MM_GridItem_C_ShowInputAction_Params Parms{};

	Parms.InputAction = InputAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MM_GridItem.W_MM_GridItem_C.SetIsEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEquipped                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MM_GridItem_C::SetIsEquipped(bool bIsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_GridItem_C", "SetIsEquipped");

	Params::UW_MM_GridItem_C_SetIsEquipped_Params Parms{};

	Parms.bIsEquipped = bIsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MM_GridItem.W_MM_GridItem_C.SetIsEquippable
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsEquippable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MM_GridItem_C::SetIsEquippable(bool bIsEquippable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_GridItem_C", "SetIsEquippable");

	Params::UW_MM_GridItem_C_SetIsEquippable_Params Parms{};

	Parms.bIsEquippable = bIsEquippable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MM_GridItem.W_MM_GridItem_C.PlayNotEquippableFeedback
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_MM_GridItem_C::PlayNotEquippableFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_GridItem_C", "PlayNotEquippableFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MM_GridItem.W_MM_GridItem_C.ExecuteUbergraph_W_MM_GridItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsNew                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_inputAction                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsEquipped                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsEquippable                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_MM_GridItem_C::ExecuteUbergraph_W_MM_GridItem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bIsNew, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, const struct FGameplayTag& K2Node_Event_inputAction, bool CallFunc_IsGameplayTagValid_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool K2Node_Event_bIsEquipped, bool K2Node_Event_bIsEquippable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MM_GridItem_C", "ExecuteUbergraph_W_MM_GridItem");

	Params::UW_MM_GridItem_C_ExecuteUbergraph_W_MM_GridItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bIsNew = K2Node_Event_bIsNew;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_Event_inputAction = K2Node_Event_inputAction;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_Event_bIsEquipped = K2Node_Event_bIsEquipped;
	Parms.K2Node_Event_bIsEquippable = K2Node_Event_bIsEquippable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


