#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HoldButton_Gothic_Generic.W_HoldButton_Gothic_Generic_C
// (None)

class UClass* UW_HoldButton_Gothic_Generic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HoldButton_Gothic_Generic_C");

	return Clss;
}


// W_HoldButton_Gothic_Generic_C W_HoldButton_Gothic_Generic.Default__W_HoldButton_Gothic_Generic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HoldButton_Gothic_Generic_C* UW_HoldButton_Gothic_Generic_C::GetDefaultObj()
{
	static class UW_HoldButton_Gothic_Generic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HoldButton_Gothic_Generic_C*>(UW_HoldButton_Gothic_Generic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HoldButton_Gothic_Generic.W_HoldButton_Gothic_Generic_C.Update Controller Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputActionImage*           Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetInputAction_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetControllerIconByEventName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HoldButton_Gothic_Generic_C::Update_Controller_Icon(class UInputActionImage* Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HoldButton_Gothic_Generic_C", "Update Controller Icon");

	Params::UW_HoldButton_Gothic_Generic_C_Update_Controller_Icon_Params Parms{};

	Parms.Image = Image;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_GetControllerIconByEventName_ReturnValue = CallFunc_GetControllerIconByEventName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


