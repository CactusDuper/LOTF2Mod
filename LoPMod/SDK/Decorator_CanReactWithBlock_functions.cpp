#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_CanReactWithBlock.Decorator_CanReactWithBlock_C
// (None)

class UClass* UDecorator_CanReactWithBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_CanReactWithBlock_C");

	return Clss;
}


// Decorator_CanReactWithBlock_C Decorator_CanReactWithBlock.Default__Decorator_CanReactWithBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_CanReactWithBlock_C* UDecorator_CanReactWithBlock_C::GetDefaultObj()
{
	static class UDecorator_CanReactWithBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_CanReactWithBlock_C*>(UDecorator_CanReactWithBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


