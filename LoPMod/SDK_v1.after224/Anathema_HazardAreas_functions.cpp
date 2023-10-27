#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Anathema_HazardAreas.Anathema_HazardAreas_C
// (Actor)

class UClass* AAnathema_HazardAreas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Anathema_HazardAreas_C");

	return Clss;
}


// Anathema_HazardAreas_C Anathema_HazardAreas.Default__Anathema_HazardAreas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathema_HazardAreas_C* AAnathema_HazardAreas_C::GetDefaultObj()
{
	static class AAnathema_HazardAreas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathema_HazardAreas_C*>(AAnathema_HazardAreas_C::StaticClass()->DefaultObject);

	return Default;
}

}


