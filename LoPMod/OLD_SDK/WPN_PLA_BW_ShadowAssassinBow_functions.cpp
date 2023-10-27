#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WPN_PLA_BW_ShadowAssassinBow.WPN_PLA_BW_ShadowAssassinBow_C
// (None)

class UClass* UWPN_PLA_BW_ShadowAssassinBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WPN_PLA_BW_ShadowAssassinBow_C");

	return Clss;
}


// WPN_PLA_BW_ShadowAssassinBow_C WPN_PLA_BW_ShadowAssassinBow.Default__WPN_PLA_BW_ShadowAssassinBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWPN_PLA_BW_ShadowAssassinBow_C* UWPN_PLA_BW_ShadowAssassinBow_C::GetDefaultObj()
{
	static class UWPN_PLA_BW_ShadowAssassinBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWPN_PLA_BW_ShadowAssassinBow_C*>(UWPN_PLA_BW_ShadowAssassinBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


