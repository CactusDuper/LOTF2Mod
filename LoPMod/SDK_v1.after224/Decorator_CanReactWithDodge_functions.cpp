#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_CanReactWithDodge.Decorator_CanReactWithDodge_C
// (None)

class UClass* UDecorator_CanReactWithDodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_CanReactWithDodge_C");

	return Clss;
}


// Decorator_CanReactWithDodge_C Decorator_CanReactWithDodge.Default__Decorator_CanReactWithDodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_CanReactWithDodge_C* UDecorator_CanReactWithDodge_C::GetDefaultObj()
{
	static class UDecorator_CanReactWithDodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_CanReactWithDodge_C*>(UDecorator_CanReactWithDodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


