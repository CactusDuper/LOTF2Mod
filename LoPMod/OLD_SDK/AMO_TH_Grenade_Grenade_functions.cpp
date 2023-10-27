#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AMO_TH_Grenade_Grenade.AMO_TH_Grenade_Grenade_C
// (None)

class UClass* UAMO_TH_Grenade_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AMO_TH_Grenade_Grenade_C");

	return Clss;
}


// AMO_TH_Grenade_Grenade_C AMO_TH_Grenade_Grenade.Default__AMO_TH_Grenade_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAMO_TH_Grenade_Grenade_C* UAMO_TH_Grenade_Grenade_C::GetDefaultObj()
{
	static class UAMO_TH_Grenade_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAMO_TH_Grenade_Grenade_C*>(UAMO_TH_Grenade_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


