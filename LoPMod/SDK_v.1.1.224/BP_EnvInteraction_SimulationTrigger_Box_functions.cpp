#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnvInteraction_SimulationTrigger_Box.BP_EnvInteraction_SimulationTrigger_Box_C
// (Actor)

class UClass* ABP_EnvInteraction_SimulationTrigger_Box_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnvInteraction_SimulationTrigger_Box_C");

	return Clss;
}


// BP_EnvInteraction_SimulationTrigger_Box_C BP_EnvInteraction_SimulationTrigger_Box.Default__BP_EnvInteraction_SimulationTrigger_Box_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnvInteraction_SimulationTrigger_Box_C* ABP_EnvInteraction_SimulationTrigger_Box_C::GetDefaultObj()
{
	static class ABP_EnvInteraction_SimulationTrigger_Box_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnvInteraction_SimulationTrigger_Box_C*>(ABP_EnvInteraction_SimulationTrigger_Box_C::StaticClass()->DefaultObject);

	return Default;
}

}


