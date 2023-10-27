#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_AOE_Banshee_IceBlood_Explode.SAA_AOE_Banshee_IceBlood_Explode_C
// (None)

class UClass* USAA_AOE_Banshee_IceBlood_Explode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_AOE_Banshee_IceBlood_Explode_C");

	return Clss;
}


// SAA_AOE_Banshee_IceBlood_Explode_C SAA_AOE_Banshee_IceBlood_Explode.Default__SAA_AOE_Banshee_IceBlood_Explode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_AOE_Banshee_IceBlood_Explode_C* USAA_AOE_Banshee_IceBlood_Explode_C::GetDefaultObj()
{
	static class USAA_AOE_Banshee_IceBlood_Explode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_AOE_Banshee_IceBlood_Explode_C*>(USAA_AOE_Banshee_IceBlood_Explode_C::StaticClass()->DefaultObject);

	return Default;
}

}


