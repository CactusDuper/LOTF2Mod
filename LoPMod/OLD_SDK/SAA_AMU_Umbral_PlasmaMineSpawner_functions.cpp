#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_AMU_Umbral_PlasmaMineSpawner.SAA_AMU_Umbral_PlasmaMineSpawner_C
// (None)

class UClass* USAA_AMU_Umbral_PlasmaMineSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_AMU_Umbral_PlasmaMineSpawner_C");

	return Clss;
}


// SAA_AMU_Umbral_PlasmaMineSpawner_C SAA_AMU_Umbral_PlasmaMineSpawner.Default__SAA_AMU_Umbral_PlasmaMineSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_AMU_Umbral_PlasmaMineSpawner_C* USAA_AMU_Umbral_PlasmaMineSpawner_C::GetDefaultObj()
{
	static class USAA_AMU_Umbral_PlasmaMineSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_AMU_Umbral_PlasmaMineSpawner_C*>(USAA_AMU_Umbral_PlasmaMineSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


