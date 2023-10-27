#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BossCombatEvent_LampHunter_01.BossCombatEvent_LampHunter_01_C
// (Actor)

class UClass* ABossCombatEvent_LampHunter_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BossCombatEvent_LampHunter_01_C");

	return Clss;
}


// BossCombatEvent_LampHunter_01_C BossCombatEvent_LampHunter_01.Default__BossCombatEvent_LampHunter_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABossCombatEvent_LampHunter_01_C* ABossCombatEvent_LampHunter_01_C::GetDefaultObj()
{
	static class ABossCombatEvent_LampHunter_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABossCombatEvent_LampHunter_01_C*>(ABossCombatEvent_LampHunter_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


