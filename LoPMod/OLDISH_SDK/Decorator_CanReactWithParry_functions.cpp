#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_CanReactWithParry.Decorator_CanReactWithParry_C
// (None)

class UClass* UDecorator_CanReactWithParry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_CanReactWithParry_C");

	return Clss;
}


// Decorator_CanReactWithParry_C Decorator_CanReactWithParry.Default__Decorator_CanReactWithParry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_CanReactWithParry_C* UDecorator_CanReactWithParry_C::GetDefaultObj()
{
	static class UDecorator_CanReactWithParry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_CanReactWithParry_C*>(UDecorator_CanReactWithParry_C::StaticClass()->DefaultObject);

	return Default;
}

}


