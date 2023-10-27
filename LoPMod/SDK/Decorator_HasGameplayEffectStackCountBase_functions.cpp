#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_HasGameplayEffectStackCountBase.Decorator_HasGameplayEffectStackCountBase_C
// (None)

class UClass* UDecorator_HasGameplayEffectStackCountBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_HasGameplayEffectStackCountBase_C");

	return Clss;
}


// Decorator_HasGameplayEffectStackCountBase_C Decorator_HasGameplayEffectStackCountBase.Default__Decorator_HasGameplayEffectStackCountBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_HasGameplayEffectStackCountBase_C* UDecorator_HasGameplayEffectStackCountBase_C::GetDefaultObj()
{
	static class UDecorator_HasGameplayEffectStackCountBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_HasGameplayEffectStackCountBase_C*>(UDecorator_HasGameplayEffectStackCountBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


