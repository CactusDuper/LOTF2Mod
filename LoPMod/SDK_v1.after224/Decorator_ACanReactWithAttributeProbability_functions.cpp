#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_ACanReactWithAttributeProbability.Decorator_ACanReactWithAttributeProbability_C
// (None)

class UClass* UDecorator_ACanReactWithAttributeProbability_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_ACanReactWithAttributeProbability_C");

	return Clss;
}


// Decorator_ACanReactWithAttributeProbability_C Decorator_ACanReactWithAttributeProbability.Default__Decorator_ACanReactWithAttributeProbability_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_ACanReactWithAttributeProbability_C* UDecorator_ACanReactWithAttributeProbability_C::GetDefaultObj()
{
	static class UDecorator_ACanReactWithAttributeProbability_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_ACanReactWithAttributeProbability_C*>(UDecorator_ACanReactWithAttributeProbability_C::StaticClass()->DefaultObject);

	return Default;
}

}


