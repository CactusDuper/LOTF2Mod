#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_ACanReactWithSoulFlayDodge.Decorator_ACanReactWithSoulFlayDodge_C
// (None)

class UClass* UDecorator_ACanReactWithSoulFlayDodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_ACanReactWithSoulFlayDodge_C");

	return Clss;
}


// Decorator_ACanReactWithSoulFlayDodge_C Decorator_ACanReactWithSoulFlayDodge.Default__Decorator_ACanReactWithSoulFlayDodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_ACanReactWithSoulFlayDodge_C* UDecorator_ACanReactWithSoulFlayDodge_C::GetDefaultObj()
{
	static class UDecorator_ACanReactWithSoulFlayDodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_ACanReactWithSoulFlayDodge_C*>(UDecorator_ACanReactWithSoulFlayDodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


