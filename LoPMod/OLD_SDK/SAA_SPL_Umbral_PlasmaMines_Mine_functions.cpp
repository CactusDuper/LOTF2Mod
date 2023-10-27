#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_SPL_Umbral_PlasmaMines_Mine.SAA_SPL_Umbral_PlasmaMines_Mine_C
// (None)

class UClass* USAA_SPL_Umbral_PlasmaMines_Mine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_SPL_Umbral_PlasmaMines_Mine_C");

	return Clss;
}


// SAA_SPL_Umbral_PlasmaMines_Mine_C SAA_SPL_Umbral_PlasmaMines_Mine.Default__SAA_SPL_Umbral_PlasmaMines_Mine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_SPL_Umbral_PlasmaMines_Mine_C* USAA_SPL_Umbral_PlasmaMines_Mine_C::GetDefaultObj()
{
	static class USAA_SPL_Umbral_PlasmaMines_Mine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_SPL_Umbral_PlasmaMines_Mine_C*>(USAA_SPL_Umbral_PlasmaMines_Mine_C::StaticClass()->DefaultObject);

	return Default;
}

}


