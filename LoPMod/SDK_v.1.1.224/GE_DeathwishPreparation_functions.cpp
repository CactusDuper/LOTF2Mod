#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DeathwishPreparation.GE_DeathwishPreparation_C
// (None)

class UClass* UGE_DeathwishPreparation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DeathwishPreparation_C");

	return Clss;
}


// GE_DeathwishPreparation_C GE_DeathwishPreparation.Default__GE_DeathwishPreparation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DeathwishPreparation_C* UGE_DeathwishPreparation_C::GetDefaultObj()
{
	static class UGE_DeathwishPreparation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DeathwishPreparation_C*>(UGE_DeathwishPreparation_C::StaticClass()->DefaultObject);

	return Default;
}

}


