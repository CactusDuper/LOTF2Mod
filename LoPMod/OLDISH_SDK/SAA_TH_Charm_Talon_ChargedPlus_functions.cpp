#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_TH_Charm_Talon_ChargedPlus.SAA_TH_Charm_Talon_ChargedPlus_C
// (None)

class UClass* USAA_TH_Charm_Talon_ChargedPlus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_TH_Charm_Talon_ChargedPlus_C");

	return Clss;
}


// SAA_TH_Charm_Talon_ChargedPlus_C SAA_TH_Charm_Talon_ChargedPlus.Default__SAA_TH_Charm_Talon_ChargedPlus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_TH_Charm_Talon_ChargedPlus_C* USAA_TH_Charm_Talon_ChargedPlus_C::GetDefaultObj()
{
	static class USAA_TH_Charm_Talon_ChargedPlus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_TH_Charm_Talon_ChargedPlus_C*>(USAA_TH_Charm_Talon_ChargedPlus_C::StaticClass()->DefaultObject);

	return Default;
}

}


