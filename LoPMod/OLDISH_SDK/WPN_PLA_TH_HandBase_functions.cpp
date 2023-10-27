#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WPN_PLA_TH_HandBase.WPN_PLA_TH_HandBase_C
// (None)

class UClass* UWPN_PLA_TH_HandBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WPN_PLA_TH_HandBase_C");

	return Clss;
}


// WPN_PLA_TH_HandBase_C WPN_PLA_TH_HandBase.Default__WPN_PLA_TH_HandBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWPN_PLA_TH_HandBase_C* UWPN_PLA_TH_HandBase_C::GetDefaultObj()
{
	static class UWPN_PLA_TH_HandBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWPN_PLA_TH_HandBase_C*>(UWPN_PLA_TH_HandBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


