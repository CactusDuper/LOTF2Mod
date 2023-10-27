#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatStateWeightLight.GE_CombatStateWeightLight_C
// (None)

class UClass* UGE_CombatStateWeightLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatStateWeightLight_C");

	return Clss;
}


// GE_CombatStateWeightLight_C GE_CombatStateWeightLight.Default__GE_CombatStateWeightLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatStateWeightLight_C* UGE_CombatStateWeightLight_C::GetDefaultObj()
{
	static class UGE_CombatStateWeightLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatStateWeightLight_C*>(UGE_CombatStateWeightLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


