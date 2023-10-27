#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_IceHound_IceTrail_Lingering.SAA_IceHound_IceTrail_Lingering_C
// (None)

class UClass* USAA_IceHound_IceTrail_Lingering_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_IceHound_IceTrail_Lingering_C");

	return Clss;
}


// SAA_IceHound_IceTrail_Lingering_C SAA_IceHound_IceTrail_Lingering.Default__SAA_IceHound_IceTrail_Lingering_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_IceHound_IceTrail_Lingering_C* USAA_IceHound_IceTrail_Lingering_C::GetDefaultObj()
{
	static class USAA_IceHound_IceTrail_Lingering_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_IceHound_IceTrail_Lingering_C*>(USAA_IceHound_IceTrail_Lingering_C::StaticClass()->DefaultObject);

	return Default;
}

}


