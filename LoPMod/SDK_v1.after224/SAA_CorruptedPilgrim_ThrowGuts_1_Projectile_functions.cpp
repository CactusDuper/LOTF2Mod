#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_CorruptedPilgrim_ThrowGuts_1_Projectile.SAA_CorruptedPilgrim_ThrowGuts_1_Projectile_C
// (None)

class UClass* USAA_CorruptedPilgrim_ThrowGuts_1_Projectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_CorruptedPilgrim_ThrowGuts_1_Projectile_C");

	return Clss;
}


// SAA_CorruptedPilgrim_ThrowGuts_1_Projectile_C SAA_CorruptedPilgrim_ThrowGuts_1_Projectile.Default__SAA_CorruptedPilgrim_ThrowGuts_1_Projectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_CorruptedPilgrim_ThrowGuts_1_Projectile_C* USAA_CorruptedPilgrim_ThrowGuts_1_Projectile_C::GetDefaultObj()
{
	static class USAA_CorruptedPilgrim_ThrowGuts_1_Projectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_CorruptedPilgrim_ThrowGuts_1_Projectile_C*>(USAA_CorruptedPilgrim_ThrowGuts_1_Projectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


