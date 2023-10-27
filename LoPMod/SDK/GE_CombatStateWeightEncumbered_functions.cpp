#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatStateWeightEncumbered.GE_CombatStateWeightEncumbered_C
// (None)

class UClass* UGE_CombatStateWeightEncumbered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatStateWeightEncumbered_C");

	return Clss;
}


// GE_CombatStateWeightEncumbered_C GE_CombatStateWeightEncumbered.Default__GE_CombatStateWeightEncumbered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatStateWeightEncumbered_C* UGE_CombatStateWeightEncumbered_C::GetDefaultObj()
{
	static class UGE_CombatStateWeightEncumbered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatStateWeightEncumbered_C*>(UGE_CombatStateWeightEncumbered_C::StaticClass()->DefaultObject);

	return Default;
}

}


