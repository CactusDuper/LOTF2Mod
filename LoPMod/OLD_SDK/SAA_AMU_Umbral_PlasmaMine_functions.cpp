#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_AMU_Umbral_PlasmaMine.SAA_AMU_Umbral_PlasmaMine_C
// (None)

class UClass* USAA_AMU_Umbral_PlasmaMine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_AMU_Umbral_PlasmaMine_C");

	return Clss;
}


// SAA_AMU_Umbral_PlasmaMine_C SAA_AMU_Umbral_PlasmaMine.Default__SAA_AMU_Umbral_PlasmaMine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_AMU_Umbral_PlasmaMine_C* USAA_AMU_Umbral_PlasmaMine_C::GetDefaultObj()
{
	static class USAA_AMU_Umbral_PlasmaMine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_AMU_Umbral_PlasmaMine_C*>(USAA_AMU_Umbral_PlasmaMine_C::StaticClass()->DefaultObject);

	return Default;
}

}


