#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_AnchorSeed_Item.W_AnchorSeed_Item_C
// (None)

class UClass* UW_AnchorSeed_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_AnchorSeed_Item_C");

	return Clss;
}


// W_AnchorSeed_Item_C W_AnchorSeed_Item.Default__W_AnchorSeed_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_AnchorSeed_Item_C* UW_AnchorSeed_Item_C::GetDefaultObj()
{
	static class UW_AnchorSeed_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_AnchorSeed_Item_C*>(UW_AnchorSeed_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.Update Controller Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputActionImage*           Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetInputAction_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetControllerIconByEventName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_AnchorSeed_Item_C::Update_Controller_Icon(class UInputActionImage* Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnchorSeed_Item_C", "Update Controller Icon");

	Params::UW_AnchorSeed_Item_C_Update_Controller_Icon_Params Parms{};

	Parms.Image = Image;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_GetControllerIconByEventName_ReturnValue = CallFunc_GetControllerIconByEventName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.ShowInputAction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InputAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UW_AnchorSeed_Item_C::ShowInputAction(const struct FGameplayTag& InputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnchorSeed_Item_C", "ShowInputAction");

	Params::UW_AnchorSeed_Item_C_ShowInputAction_Params Parms{};

	Parms.InputAction = InputAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.SetIsEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEquipped                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AnchorSeed_Item_C::SetIsEquipped(bool bIsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnchorSeed_Item_C", "SetIsEquipped");

	Params::UW_AnchorSeed_Item_C_SetIsEquipped_Params Parms{};

	Parms.bIsEquipped = bIsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.PlayNotEquippableFeedback
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_AnchorSeed_Item_C::PlayNotEquippableFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnchorSeed_Item_C", "PlayNotEquippableFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.SetIsSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AnchorSeed_Item_C::SetIsSelected(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnchorSeed_Item_C", "SetIsSelected");

	Params::UW_AnchorSeed_Item_C_SetIsSelected_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AnchorSeed_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnchorSeed_Item_C", "PreConstruct");

	Params::UW_AnchorSeed_Item_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.ExecuteUbergraph_W_AnchorSeed_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_inputAction                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsEquipped                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AnchorSeed_Item_C::ExecuteUbergraph_W_AnchorSeed_Item(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_inputAction, bool CallFunc_IsGameplayTagValid_ReturnValue, bool K2Node_Event_bIsEquipped, bool K2Node_Event_bIsSelected, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnchorSeed_Item_C", "ExecuteUbergraph_W_AnchorSeed_Item");

	Params::UW_AnchorSeed_Item_C_ExecuteUbergraph_W_AnchorSeed_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_inputAction = K2Node_Event_inputAction;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.K2Node_Event_bIsEquipped = K2Node_Event_bIsEquipped;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


