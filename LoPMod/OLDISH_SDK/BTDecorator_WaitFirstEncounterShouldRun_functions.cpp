#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_WaitFirstEncounterShouldRun.BTDecorator_WaitFirstEncounterShouldRun_C
// (None)

class UClass* UBTDecorator_WaitFirstEncounterShouldRun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_WaitFirstEncounterShouldRun_C");

	return Clss;
}


// BTDecorator_WaitFirstEncounterShouldRun_C BTDecorator_WaitFirstEncounterShouldRun.Default__BTDecorator_WaitFirstEncounterShouldRun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_WaitFirstEncounterShouldRun_C* UBTDecorator_WaitFirstEncounterShouldRun_C::GetDefaultObj()
{
	static class UBTDecorator_WaitFirstEncounterShouldRun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_WaitFirstEncounterShouldRun_C*>(UBTDecorator_WaitFirstEncounterShouldRun_C::StaticClass()->DefaultObject);

	return Default;
}

}


