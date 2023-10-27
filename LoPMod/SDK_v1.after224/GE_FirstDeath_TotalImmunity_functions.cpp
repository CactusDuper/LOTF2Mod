#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FirstDeath_TotalImmunity.GE_FirstDeath_TotalImmunity_C
// (None)

class UClass* UGE_FirstDeath_TotalImmunity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FirstDeath_TotalImmunity_C");

	return Clss;
}


// GE_FirstDeath_TotalImmunity_C GE_FirstDeath_TotalImmunity.Default__GE_FirstDeath_TotalImmunity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FirstDeath_TotalImmunity_C* UGE_FirstDeath_TotalImmunity_C::GetDefaultObj()
{
	static class UGE_FirstDeath_TotalImmunity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FirstDeath_TotalImmunity_C*>(UGE_FirstDeath_TotalImmunity_C::StaticClass()->DefaultObject);

	return Default;
}

}


