#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WPN_PLA_MA_ExorcistRadiantCatalyst.WPN_PLA_MA_ExorcistRadiantCatalyst_C
// (None)

class UClass* UWPN_PLA_MA_ExorcistRadiantCatalyst_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WPN_PLA_MA_ExorcistRadiantCatalyst_C");

	return Clss;
}


// WPN_PLA_MA_ExorcistRadiantCatalyst_C WPN_PLA_MA_ExorcistRadiantCatalyst.Default__WPN_PLA_MA_ExorcistRadiantCatalyst_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWPN_PLA_MA_ExorcistRadiantCatalyst_C* UWPN_PLA_MA_ExorcistRadiantCatalyst_C::GetDefaultObj()
{
	static class UWPN_PLA_MA_ExorcistRadiantCatalyst_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWPN_PLA_MA_ExorcistRadiantCatalyst_C*>(UWPN_PLA_MA_ExorcistRadiantCatalyst_C::StaticClass()->DefaultObject);

	return Default;
}

}


