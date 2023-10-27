#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WPN_PLA_BW_Longbow.WPN_PLA_BW_Longbow_C
// (None)

class UClass* UWPN_PLA_BW_Longbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WPN_PLA_BW_Longbow_C");

	return Clss;
}


// WPN_PLA_BW_Longbow_C WPN_PLA_BW_Longbow.Default__WPN_PLA_BW_Longbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWPN_PLA_BW_Longbow_C* UWPN_PLA_BW_Longbow_C::GetDefaultObj()
{
	static class UWPN_PLA_BW_Longbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWPN_PLA_BW_Longbow_C*>(UWPN_PLA_BW_Longbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


