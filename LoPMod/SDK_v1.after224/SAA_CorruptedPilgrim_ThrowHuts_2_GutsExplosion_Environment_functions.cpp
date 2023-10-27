#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment.SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment_C
// (None)

class UClass* USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment_C");

	return Clss;
}


// SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment_C SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment.Default__SAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment_C* USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment_C::GetDefaultObj()
{
	static class USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment_C*>(USAA_CorruptedPilgrim_ThrowHuts_2_GutsExplosion_Environment_C::StaticClass()->DefaultObject);

	return Default;
}

}


