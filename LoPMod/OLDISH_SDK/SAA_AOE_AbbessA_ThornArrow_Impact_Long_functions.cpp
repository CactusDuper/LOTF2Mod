#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_AOE_AbbessA_ThornArrow_Impact_Long.SAA_AOE_AbbessA_ThornArrow_Impact_Long_C
// (None)

class UClass* USAA_AOE_AbbessA_ThornArrow_Impact_Long_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_AOE_AbbessA_ThornArrow_Impact_Long_C");

	return Clss;
}


// SAA_AOE_AbbessA_ThornArrow_Impact_Long_C SAA_AOE_AbbessA_ThornArrow_Impact_Long.Default__SAA_AOE_AbbessA_ThornArrow_Impact_Long_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_AOE_AbbessA_ThornArrow_Impact_Long_C* USAA_AOE_AbbessA_ThornArrow_Impact_Long_C::GetDefaultObj()
{
	static class USAA_AOE_AbbessA_ThornArrow_Impact_Long_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_AOE_AbbessA_ThornArrow_Impact_Long_C*>(USAA_AOE_AbbessA_ThornArrow_Impact_Long_C::StaticClass()->DefaultObject);

	return Default;
}

}


