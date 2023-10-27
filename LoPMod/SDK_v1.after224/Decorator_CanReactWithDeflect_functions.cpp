#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_CanReactWithDeflect.Decorator_CanReactWithDeflect_C
// (None)

class UClass* UDecorator_CanReactWithDeflect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_CanReactWithDeflect_C");

	return Clss;
}


// Decorator_CanReactWithDeflect_C Decorator_CanReactWithDeflect.Default__Decorator_CanReactWithDeflect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_CanReactWithDeflect_C* UDecorator_CanReactWithDeflect_C::GetDefaultObj()
{
	static class UDecorator_CanReactWithDeflect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_CanReactWithDeflect_C*>(UDecorator_CanReactWithDeflect_C::StaticClass()->DefaultObject);

	return Default;
}

}


