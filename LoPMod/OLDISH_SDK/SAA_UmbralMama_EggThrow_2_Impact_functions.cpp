#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_UmbralMama_EggThrow_2_Impact.SAA_UmbralMama_EggThrow_2_Impact_C
// (None)

class UClass* USAA_UmbralMama_EggThrow_2_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_UmbralMama_EggThrow_2_Impact_C");

	return Clss;
}


// SAA_UmbralMama_EggThrow_2_Impact_C SAA_UmbralMama_EggThrow_2_Impact.Default__SAA_UmbralMama_EggThrow_2_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_UmbralMama_EggThrow_2_Impact_C* USAA_UmbralMama_EggThrow_2_Impact_C::GetDefaultObj()
{
	static class USAA_UmbralMama_EggThrow_2_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_UmbralMama_EggThrow_2_Impact_C*>(USAA_UmbralMama_EggThrow_2_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}


