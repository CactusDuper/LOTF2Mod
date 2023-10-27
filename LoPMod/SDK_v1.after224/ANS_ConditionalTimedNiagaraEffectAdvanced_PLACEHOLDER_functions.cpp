#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER.ANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER_C
// (None)

class UClass* UANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER_C");

	return Clss;
}


// ANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER_C ANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER.Default__ANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER_C* UANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER_C::GetDefaultObj()
{
	static class UANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER_C*>(UANS_ConditionalTimedNiagaraEffectAdvanced_PLACEHOLDER_C::StaticClass()->DefaultObject);

	return Default;
}

}


