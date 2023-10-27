#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GECooldown_PerfectDodge.GECooldown_PerfectDodge_C
// (None)

class UClass* UGECooldown_PerfectDodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GECooldown_PerfectDodge_C");

	return Clss;
}


// GECooldown_PerfectDodge_C GECooldown_PerfectDodge.Default__GECooldown_PerfectDodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGECooldown_PerfectDodge_C* UGECooldown_PerfectDodge_C::GetDefaultObj()
{
	static class UGECooldown_PerfectDodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGECooldown_PerfectDodge_C*>(UGECooldown_PerfectDodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


