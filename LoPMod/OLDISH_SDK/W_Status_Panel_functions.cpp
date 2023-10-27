#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Status_Panel.W_Status_Panel_C
// (None)

class UClass* UW_Status_Panel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Status_Panel_C");

	return Clss;
}


// W_Status_Panel_C W_Status_Panel.Default__W_Status_Panel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Status_Panel_C* UW_Status_Panel_C::GetDefaultObj()
{
	static class UW_Status_Panel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Status_Panel_C*>(UW_Status_Panel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Status_Panel.W_Status_Panel_C.Closed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Status_Panel_C::Closed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Status_Panel_C", "Closed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


