#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatStateInvisible.GE_CombatStateInvisible_C
// (None)

class UClass* UGE_CombatStateInvisible_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatStateInvisible_C");

	return Clss;
}


// GE_CombatStateInvisible_C GE_CombatStateInvisible.Default__GE_CombatStateInvisible_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatStateInvisible_C* UGE_CombatStateInvisible_C::GetDefaultObj()
{
	static class UGE_CombatStateInvisible_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatStateInvisible_C*>(UGE_CombatStateInvisible_C::StaticClass()->DefaultObject);

	return Default;
}

}


