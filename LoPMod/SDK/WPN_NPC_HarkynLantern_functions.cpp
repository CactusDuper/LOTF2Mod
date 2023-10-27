#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WPN_NPC_HarkynLantern.WPN_NPC_HarkynLantern_C
// (None)

class UClass* UWPN_NPC_HarkynLantern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WPN_NPC_HarkynLantern_C");

	return Clss;
}


// WPN_NPC_HarkynLantern_C WPN_NPC_HarkynLantern.Default__WPN_NPC_HarkynLantern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWPN_NPC_HarkynLantern_C* UWPN_NPC_HarkynLantern_C::GetDefaultObj()
{
	static class UWPN_NPC_HarkynLantern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWPN_NPC_HarkynLantern_C*>(UWPN_NPC_HarkynLantern_C::StaticClass()->DefaultObject);

	return Default;
}

}


