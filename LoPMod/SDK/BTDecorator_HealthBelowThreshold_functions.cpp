#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_HealthBelowThreshold.BTDecorator_HealthBelowThreshold_C
// (None)

class UClass* UBTDecorator_HealthBelowThreshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_HealthBelowThreshold_C");

	return Clss;
}


// BTDecorator_HealthBelowThreshold_C BTDecorator_HealthBelowThreshold.Default__BTDecorator_HealthBelowThreshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_HealthBelowThreshold_C* UBTDecorator_HealthBelowThreshold_C::GetDefaultObj()
{
	static class UBTDecorator_HealthBelowThreshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_HealthBelowThreshold_C*>(UBTDecorator_HealthBelowThreshold_C::StaticClass()->DefaultObject);

	return Default;
}

}


