#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Projectile_IceZombie_IceShockwave.SAA_Projectile_IceZombie_IceShockwave_C
// (None)

class UClass* USAA_Projectile_IceZombie_IceShockwave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Projectile_IceZombie_IceShockwave_C");

	return Clss;
}


// SAA_Projectile_IceZombie_IceShockwave_C SAA_Projectile_IceZombie_IceShockwave.Default__SAA_Projectile_IceZombie_IceShockwave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Projectile_IceZombie_IceShockwave_C* USAA_Projectile_IceZombie_IceShockwave_C::GetDefaultObj()
{
	static class USAA_Projectile_IceZombie_IceShockwave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Projectile_IceZombie_IceShockwave_C*>(USAA_Projectile_IceZombie_IceShockwave_C::StaticClass()->DefaultObject);

	return Default;
}

}


