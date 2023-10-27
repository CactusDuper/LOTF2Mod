#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_EquipmentGridItem.W_EquipmentGridItem_C
// (None)

class UClass* UW_EquipmentGridItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_EquipmentGridItem_C");

	return Clss;
}


// W_EquipmentGridItem_C W_EquipmentGridItem.Default__W_EquipmentGridItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_EquipmentGridItem_C* UW_EquipmentGridItem_C::GetDefaultObj()
{
	static class UW_EquipmentGridItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_EquipmentGridItem_C*>(UW_EquipmentGridItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_EquipmentGridItem.W_EquipmentGridItem_C.Update Controller Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputActionImage*           Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetInputAction_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetControllerIconByEventName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_EquipmentGridItem_C::Update_Controller_Icon(class UInputActionImage* Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipmentGridItem_C", "Update Controller Icon");

	Params::UW_EquipmentGridItem_C_Update_Controller_Icon_Params Parms{};

	Parms.Image = Image;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_GetControllerIconByEventName_ReturnValue = CallFunc_GetControllerIconByEventName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipmentGridItem.W_EquipmentGridItem_C.SetIsNewItem
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsNew                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EquipmentGridItem_C::SetIsNewItem(bool bIsNew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipmentGridItem_C", "SetIsNewItem");

	Params::UW_EquipmentGridItem_C_SetIsNewItem_Params Parms{};

	Parms.bIsNew = bIsNew;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipmentGridItem.W_EquipmentGridItem_C.ShowInputAction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InputAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UW_EquipmentGridItem_C::ShowInputAction(const struct FGameplayTag& InputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipmentGridItem_C", "ShowInputAction");

	Params::UW_EquipmentGridItem_C_ShowInputAction_Params Parms{};

	Parms.InputAction = InputAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipmentGridItem.W_EquipmentGridItem_C.SetIsEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEquipped                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EquipmentGridItem_C::SetIsEquipped(bool bIsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipmentGridItem_C", "SetIsEquipped");

	Params::UW_EquipmentGridItem_C_SetIsEquipped_Params Parms{};

	Parms.bIsEquipped = bIsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipmentGridItem.W_EquipmentGridItem_C.SetIsEquippable
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsEquippable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EquipmentGridItem_C::SetIsEquippable(bool bIsEquippable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipmentGridItem_C", "SetIsEquippable");

	Params::UW_EquipmentGridItem_C_SetIsEquippable_Params Parms{};

	Parms.bIsEquippable = bIsEquippable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipmentGridItem.W_EquipmentGridItem_C.PlayNotEquippableFeedback
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_EquipmentGridItem_C::PlayNotEquippableFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipmentGridItem_C", "PlayNotEquippableFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_EquipmentGridItem.W_EquipmentGridItem_C.ExecuteUbergraph_W_EquipmentGridItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsNew                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_inputAction                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsEquipped                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsEquippable                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_EquipmentGridItem_C::ExecuteUbergraph_W_EquipmentGridItem(int32 EntryPoint, bool K2Node_Event_bIsNew, const struct FGameplayTag& K2Node_Event_inputAction, bool CallFunc_IsGameplayTagValid_ReturnValue, bool K2Node_Event_bIsEquipped, bool K2Node_Event_bIsEquippable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipmentGridItem_C", "ExecuteUbergraph_W_EquipmentGridItem");

	Params::UW_EquipmentGridItem_C_ExecuteUbergraph_W_EquipmentGridItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsNew = K2Node_Event_bIsNew;
	Parms.K2Node_Event_inputAction = K2Node_Event_inputAction;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.K2Node_Event_bIsEquipped = K2Node_Event_bIsEquipped;
	Parms.K2Node_Event_bIsEquippable = K2Node_Event_bIsEquippable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


