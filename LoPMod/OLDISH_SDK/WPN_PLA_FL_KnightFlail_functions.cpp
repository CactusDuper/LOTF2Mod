#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WPN_PLA_FL_KnightFlail.WPN_PLA_FL_KnightFlail_C
// (None)

class UClass* UWPN_PLA_FL_KnightFlail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WPN_PLA_FL_KnightFlail_C");

	return Clss;
}


// WPN_PLA_FL_KnightFlail_C WPN_PLA_FL_KnightFlail.Default__WPN_PLA_FL_KnightFlail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWPN_PLA_FL_KnightFlail_C* UWPN_PLA_FL_KnightFlail_C::GetDefaultObj()
{
	static class UWPN_PLA_FL_KnightFlail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWPN_PLA_FL_KnightFlail_C*>(UWPN_PLA_FL_KnightFlail_C::StaticClass()->DefaultObject);

	return Default;
}

}


