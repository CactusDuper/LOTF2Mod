#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_ACanReactWithSoulFlayParry.Decorator_ACanReactWithSoulFlayParry_C
// (None)

class UClass* UDecorator_ACanReactWithSoulFlayParry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_ACanReactWithSoulFlayParry_C");

	return Clss;
}


// Decorator_ACanReactWithSoulFlayParry_C Decorator_ACanReactWithSoulFlayParry.Default__Decorator_ACanReactWithSoulFlayParry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_ACanReactWithSoulFlayParry_C* UDecorator_ACanReactWithSoulFlayParry_C::GetDefaultObj()
{
	static class UDecorator_ACanReactWithSoulFlayParry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_ACanReactWithSoulFlayParry_C*>(UDecorator_ACanReactWithSoulFlayParry_C::StaticClass()->DefaultObject);

	return Default;
}

}


