#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WPN_PLA_CB_TrapperCrossbow.WPN_PLA_CB_TrapperCrossbow_C
// (None)

class UClass* UWPN_PLA_CB_TrapperCrossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WPN_PLA_CB_TrapperCrossbow_C");

	return Clss;
}


// WPN_PLA_CB_TrapperCrossbow_C WPN_PLA_CB_TrapperCrossbow.Default__WPN_PLA_CB_TrapperCrossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWPN_PLA_CB_TrapperCrossbow_C* UWPN_PLA_CB_TrapperCrossbow_C::GetDefaultObj()
{
	static class UWPN_PLA_CB_TrapperCrossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWPN_PLA_CB_TrapperCrossbow_C*>(UWPN_PLA_CB_TrapperCrossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


