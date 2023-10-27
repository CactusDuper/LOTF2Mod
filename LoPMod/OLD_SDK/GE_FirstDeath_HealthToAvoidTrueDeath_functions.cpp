#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FirstDeath_HealthToAvoidTrueDeath.GE_FirstDeath_HealthToAvoidTrueDeath_C
// (None)

class UClass* UGE_FirstDeath_HealthToAvoidTrueDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FirstDeath_HealthToAvoidTrueDeath_C");

	return Clss;
}


// GE_FirstDeath_HealthToAvoidTrueDeath_C GE_FirstDeath_HealthToAvoidTrueDeath.Default__GE_FirstDeath_HealthToAvoidTrueDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FirstDeath_HealthToAvoidTrueDeath_C* UGE_FirstDeath_HealthToAvoidTrueDeath_C::GetDefaultObj()
{
	static class UGE_FirstDeath_HealthToAvoidTrueDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FirstDeath_HealthToAvoidTrueDeath_C*>(UGE_FirstDeath_HealthToAvoidTrueDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}


