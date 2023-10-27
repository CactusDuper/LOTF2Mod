#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_DyingTriggerDeath.AN_DyingTriggerDeath_C
// (None)

class UClass* UAN_DyingTriggerDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_DyingTriggerDeath_C");

	return Clss;
}


// AN_DyingTriggerDeath_C AN_DyingTriggerDeath.Default__AN_DyingTriggerDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_DyingTriggerDeath_C* UAN_DyingTriggerDeath_C::GetDefaultObj()
{
	static class UAN_DyingTriggerDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_DyingTriggerDeath_C*>(UAN_DyingTriggerDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}


