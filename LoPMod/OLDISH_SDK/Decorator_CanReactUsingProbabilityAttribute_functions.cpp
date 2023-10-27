#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_CanReactUsingProbabilityAttribute.Decorator_CanReactUsingProbabilityAttribute_C
// (None)

class UClass* UDecorator_CanReactUsingProbabilityAttribute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_CanReactUsingProbabilityAttribute_C");

	return Clss;
}


// Decorator_CanReactUsingProbabilityAttribute_C Decorator_CanReactUsingProbabilityAttribute.Default__Decorator_CanReactUsingProbabilityAttribute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_CanReactUsingProbabilityAttribute_C* UDecorator_CanReactUsingProbabilityAttribute_C::GetDefaultObj()
{
	static class UDecorator_CanReactUsingProbabilityAttribute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_CanReactUsingProbabilityAttribute_C*>(UDecorator_CanReactUsingProbabilityAttribute_C::StaticClass()->DefaultObject);

	return Default;
}

}


