#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatStateWeightHeavy.GE_CombatStateWeightHeavy_C
// (None)

class UClass* UGE_CombatStateWeightHeavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatStateWeightHeavy_C");

	return Clss;
}


// GE_CombatStateWeightHeavy_C GE_CombatStateWeightHeavy.Default__GE_CombatStateWeightHeavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatStateWeightHeavy_C* UGE_CombatStateWeightHeavy_C::GetDefaultObj()
{
	static class UGE_CombatStateWeightHeavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatStateWeightHeavy_C*>(UGE_CombatStateWeightHeavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


