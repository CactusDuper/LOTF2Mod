#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WPN_PLA_SP_CorruptedPilgrimStick.WPN_PLA_SP_CorruptedPilgrimStick_C
// (None)

class UClass* UWPN_PLA_SP_CorruptedPilgrimStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WPN_PLA_SP_CorruptedPilgrimStick_C");

	return Clss;
}


// WPN_PLA_SP_CorruptedPilgrimStick_C WPN_PLA_SP_CorruptedPilgrimStick.Default__WPN_PLA_SP_CorruptedPilgrimStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWPN_PLA_SP_CorruptedPilgrimStick_C* UWPN_PLA_SP_CorruptedPilgrimStick_C::GetDefaultObj()
{
	static class UWPN_PLA_SP_CorruptedPilgrimStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWPN_PLA_SP_CorruptedPilgrimStick_C*>(UWPN_PLA_SP_CorruptedPilgrimStick_C::StaticClass()->DefaultObject);

	return Default;
}

}


