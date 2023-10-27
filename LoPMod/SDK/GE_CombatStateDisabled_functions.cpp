#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatStateDisabled.GE_CombatStateDisabled_C
// (None)

class UClass* UGE_CombatStateDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatStateDisabled_C");

	return Clss;
}


// GE_CombatStateDisabled_C GE_CombatStateDisabled.Default__GE_CombatStateDisabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatStateDisabled_C* UGE_CombatStateDisabled_C::GetDefaultObj()
{
	static class UGE_CombatStateDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatStateDisabled_C*>(UGE_CombatStateDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


