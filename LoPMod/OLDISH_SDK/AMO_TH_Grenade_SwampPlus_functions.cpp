#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AMO_TH_Grenade_SwampPlus.AMO_TH_Grenade_SwampPlus_C
// (None)

class UClass* UAMO_TH_Grenade_SwampPlus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AMO_TH_Grenade_SwampPlus_C");

	return Clss;
}


// AMO_TH_Grenade_SwampPlus_C AMO_TH_Grenade_SwampPlus.Default__AMO_TH_Grenade_SwampPlus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAMO_TH_Grenade_SwampPlus_C* UAMO_TH_Grenade_SwampPlus_C::GetDefaultObj()
{
	static class UAMO_TH_Grenade_SwampPlus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAMO_TH_Grenade_SwampPlus_C*>(UAMO_TH_Grenade_SwampPlus_C::StaticClass()->DefaultObject);

	return Default;
}

}


