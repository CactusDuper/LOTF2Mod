#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_HasGameplayTag.Decorator_HasGameplayTag_C
// (None)

class UClass* UDecorator_HasGameplayTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_HasGameplayTag_C");

	return Clss;
}


// Decorator_HasGameplayTag_C Decorator_HasGameplayTag.Default__Decorator_HasGameplayTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_HasGameplayTag_C* UDecorator_HasGameplayTag_C::GetDefaultObj()
{
	static class UDecorator_HasGameplayTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_HasGameplayTag_C*>(UDecorator_HasGameplayTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


