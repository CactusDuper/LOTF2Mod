#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatStateDelayDisableIfDead.GE_CombatStateDelayDisableIfDead_C
// (None)

class UClass* UGE_CombatStateDelayDisableIfDead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatStateDelayDisableIfDead_C");

	return Clss;
}


// GE_CombatStateDelayDisableIfDead_C GE_CombatStateDelayDisableIfDead.Default__GE_CombatStateDelayDisableIfDead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatStateDelayDisableIfDead_C* UGE_CombatStateDelayDisableIfDead_C::GetDefaultObj()
{
	static class UGE_CombatStateDelayDisableIfDead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatStateDelayDisableIfDead_C*>(UGE_CombatStateDelayDisableIfDead_C::StaticClass()->DefaultObject);

	return Default;
}

}


