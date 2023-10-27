#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_SPL_Umbral_PlasmaMines_Explosion.SAA_SPL_Umbral_PlasmaMines_Explosion_C
// (None)

class UClass* USAA_SPL_Umbral_PlasmaMines_Explosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_SPL_Umbral_PlasmaMines_Explosion_C");

	return Clss;
}


// SAA_SPL_Umbral_PlasmaMines_Explosion_C SAA_SPL_Umbral_PlasmaMines_Explosion.Default__SAA_SPL_Umbral_PlasmaMines_Explosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_SPL_Umbral_PlasmaMines_Explosion_C* USAA_SPL_Umbral_PlasmaMines_Explosion_C::GetDefaultObj()
{
	static class USAA_SPL_Umbral_PlasmaMines_Explosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_SPL_Umbral_PlasmaMines_Explosion_C*>(USAA_SPL_Umbral_PlasmaMines_Explosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


