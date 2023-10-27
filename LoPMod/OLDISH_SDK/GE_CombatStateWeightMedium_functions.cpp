#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatStateWeightMedium.GE_CombatStateWeightMedium_C
// (None)

class UClass* UGE_CombatStateWeightMedium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatStateWeightMedium_C");

	return Clss;
}


// GE_CombatStateWeightMedium_C GE_CombatStateWeightMedium.Default__GE_CombatStateWeightMedium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatStateWeightMedium_C* UGE_CombatStateWeightMedium_C::GetDefaultObj()
{
	static class UGE_CombatStateWeightMedium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatStateWeightMedium_C*>(UGE_CombatStateWeightMedium_C::StaticClass()->DefaultObject);

	return Default;
}

}


