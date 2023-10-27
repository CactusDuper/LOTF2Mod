#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatIdle.GE_CombatIdle_C
// (None)

class UClass* UGE_CombatIdle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatIdle_C");

	return Clss;
}


// GE_CombatIdle_C GE_CombatIdle.Default__GE_CombatIdle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatIdle_C* UGE_CombatIdle_C::GetDefaultObj()
{
	static class UGE_CombatIdle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatIdle_C*>(UGE_CombatIdle_C::StaticClass()->DefaultObject);

	return Default;
}

}


