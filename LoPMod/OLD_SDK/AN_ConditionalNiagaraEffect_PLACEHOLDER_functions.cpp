#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_ConditionalNiagaraEffect_PLACEHOLDER.AN_ConditionalNiagaraEffect_PLACEHOLDER_C
// (None)

class UClass* UAN_ConditionalNiagaraEffect_PLACEHOLDER_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_ConditionalNiagaraEffect_PLACEHOLDER_C");

	return Clss;
}


// AN_ConditionalNiagaraEffect_PLACEHOLDER_C AN_ConditionalNiagaraEffect_PLACEHOLDER.Default__AN_ConditionalNiagaraEffect_PLACEHOLDER_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_ConditionalNiagaraEffect_PLACEHOLDER_C* UAN_ConditionalNiagaraEffect_PLACEHOLDER_C::GetDefaultObj()
{
	static class UAN_ConditionalNiagaraEffect_PLACEHOLDER_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_ConditionalNiagaraEffect_PLACEHOLDER_C*>(UAN_ConditionalNiagaraEffect_PLACEHOLDER_C::StaticClass()->DefaultObject);

	return Default;
}

}


