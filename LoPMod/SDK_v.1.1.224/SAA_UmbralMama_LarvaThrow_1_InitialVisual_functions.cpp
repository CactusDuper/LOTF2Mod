#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_UmbralMama_LarvaThrow_1_InitialVisual.SAA_UmbralMama_LarvaThrow_1_InitialVisual_C
// (None)

class UClass* USAA_UmbralMama_LarvaThrow_1_InitialVisual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_UmbralMama_LarvaThrow_1_InitialVisual_C");

	return Clss;
}


// SAA_UmbralMama_LarvaThrow_1_InitialVisual_C SAA_UmbralMama_LarvaThrow_1_InitialVisual.Default__SAA_UmbralMama_LarvaThrow_1_InitialVisual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_UmbralMama_LarvaThrow_1_InitialVisual_C* USAA_UmbralMama_LarvaThrow_1_InitialVisual_C::GetDefaultObj()
{
	static class USAA_UmbralMama_LarvaThrow_1_InitialVisual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_UmbralMama_LarvaThrow_1_InitialVisual_C*>(USAA_UmbralMama_LarvaThrow_1_InitialVisual_C::StaticClass()->DefaultObject);

	return Default;
}

}

