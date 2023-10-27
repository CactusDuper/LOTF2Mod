#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_HasAIBehavior.Decorator_HasAIBehavior_C
// (None)

class UClass* UDecorator_HasAIBehavior_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_HasAIBehavior_C");

	return Clss;
}


// Decorator_HasAIBehavior_C Decorator_HasAIBehavior.Default__Decorator_HasAIBehavior_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_HasAIBehavior_C* UDecorator_HasAIBehavior_C::GetDefaultObj()
{
	static class UDecorator_HasAIBehavior_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_HasAIBehavior_C*>(UDecorator_HasAIBehavior_C::StaticClass()->DefaultObject);

	return Default;
}

}


