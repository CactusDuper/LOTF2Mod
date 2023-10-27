#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WPN_PLA_FW_ExorcistFist.WPN_PLA_FW_ExorcistFist_C
// (None)

class UClass* UWPN_PLA_FW_ExorcistFist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WPN_PLA_FW_ExorcistFist_C");

	return Clss;
}


// WPN_PLA_FW_ExorcistFist_C WPN_PLA_FW_ExorcistFist.Default__WPN_PLA_FW_ExorcistFist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWPN_PLA_FW_ExorcistFist_C* UWPN_PLA_FW_ExorcistFist_C::GetDefaultObj()
{
	static class UWPN_PLA_FW_ExorcistFist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWPN_PLA_FW_ExorcistFist_C*>(UWPN_PLA_FW_ExorcistFist_C::StaticClass()->DefaultObject);

	return Default;
}

}


