#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WPN_PLA_TH_ThrowingInscriptionOfLight.BP_WPN_PLA_TH_ThrowingInscriptionOfLight_C
// (Actor)

class UClass* ABP_WPN_PLA_TH_ThrowingInscriptionOfLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WPN_PLA_TH_ThrowingInscriptionOfLight_C");

	return Clss;
}


// BP_WPN_PLA_TH_ThrowingInscriptionOfLight_C BP_WPN_PLA_TH_ThrowingInscriptionOfLight.Default__BP_WPN_PLA_TH_ThrowingInscriptionOfLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WPN_PLA_TH_ThrowingInscriptionOfLight_C* ABP_WPN_PLA_TH_ThrowingInscriptionOfLight_C::GetDefaultObj()
{
	static class ABP_WPN_PLA_TH_ThrowingInscriptionOfLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WPN_PLA_TH_ThrowingInscriptionOfLight_C*>(ABP_WPN_PLA_TH_ThrowingInscriptionOfLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


