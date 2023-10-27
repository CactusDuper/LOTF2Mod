#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WPN_PLA_HA_SkirmisherMace.WPN_PLA_HA_SkirmisherMace_C
// (None)

class UClass* UWPN_PLA_HA_SkirmisherMace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WPN_PLA_HA_SkirmisherMace_C");

	return Clss;
}


// WPN_PLA_HA_SkirmisherMace_C WPN_PLA_HA_SkirmisherMace.Default__WPN_PLA_HA_SkirmisherMace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWPN_PLA_HA_SkirmisherMace_C* UWPN_PLA_HA_SkirmisherMace_C::GetDefaultObj()
{
	static class UWPN_PLA_HA_SkirmisherMace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWPN_PLA_HA_SkirmisherMace_C*>(UWPN_PLA_HA_SkirmisherMace_C::StaticClass()->DefaultObject);

	return Default;
}

}


