#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_SPL_Rhogar_FireSpray_Projectile.SAA_SPL_Rhogar_FireSpray_Projectile_C
// (None)

class UClass* USAA_SPL_Rhogar_FireSpray_Projectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_SPL_Rhogar_FireSpray_Projectile_C");

	return Clss;
}


// SAA_SPL_Rhogar_FireSpray_Projectile_C SAA_SPL_Rhogar_FireSpray_Projectile.Default__SAA_SPL_Rhogar_FireSpray_Projectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_SPL_Rhogar_FireSpray_Projectile_C* USAA_SPL_Rhogar_FireSpray_Projectile_C::GetDefaultObj()
{
	static class USAA_SPL_Rhogar_FireSpray_Projectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_SPL_Rhogar_FireSpray_Projectile_C*>(USAA_SPL_Rhogar_FireSpray_Projectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


