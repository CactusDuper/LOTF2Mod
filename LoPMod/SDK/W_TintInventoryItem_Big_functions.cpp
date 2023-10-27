#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TintInventoryItem_Big.W_TintInventoryItem_Big_C
// (None)

class UClass* UW_TintInventoryItem_Big_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TintInventoryItem_Big_C");

	return Clss;
}


// W_TintInventoryItem_Big_C W_TintInventoryItem_Big.Default__W_TintInventoryItem_Big_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TintInventoryItem_Big_C* UW_TintInventoryItem_Big_C::GetDefaultObj()
{
	static class UW_TintInventoryItem_Big_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TintInventoryItem_Big_C*>(UW_TintInventoryItem_Big_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_TintInventoryItem_Big.W_TintInventoryItem_Big_C.Update Controller Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputActionImage*           Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetInputAction_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetControllerIconByEventName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_TintInventoryItem_Big_C::Update_Controller_Icon(class UInputActionImage* Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TintInventoryItem_Big_C", "Update Controller Icon");

	Params::UW_TintInventoryItem_Big_C_Update_Controller_Icon_Params Parms{};

	Parms.Image = Image;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_GetControllerIconByEventName_ReturnValue = CallFunc_GetControllerIconByEventName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


