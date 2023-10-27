#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character.SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character_C
// (None)

class UClass* USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character_C");

	return Clss;
}


// SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character_C SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character.Default__SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character_C* USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character_C::GetDefaultObj()
{
	static class USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character_C*>(USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Character_C::StaticClass()->DefaultObject);

	return Default;
}

}


