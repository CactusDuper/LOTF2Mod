#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_CanRunWhileSpectating.Decorator_CanRunWhileSpectating_C
// (None)

class UClass* UDecorator_CanRunWhileSpectating_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_CanRunWhileSpectating_C");

	return Clss;
}


// Decorator_CanRunWhileSpectating_C Decorator_CanRunWhileSpectating.Default__Decorator_CanRunWhileSpectating_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_CanRunWhileSpectating_C* UDecorator_CanRunWhileSpectating_C::GetDefaultObj()
{
	static class UDecorator_CanRunWhileSpectating_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_CanRunWhileSpectating_C*>(UDecorator_CanRunWhileSpectating_C::StaticClass()->DefaultObject);

	return Default;
}

}


