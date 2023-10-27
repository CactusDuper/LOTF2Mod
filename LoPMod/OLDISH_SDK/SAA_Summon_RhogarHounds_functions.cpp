#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Summon_RhogarHounds.SAA_Summon_RhogarHounds_C
// (None)

class UClass* USAA_Summon_RhogarHounds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Summon_RhogarHounds_C");

	return Clss;
}


// SAA_Summon_RhogarHounds_C SAA_Summon_RhogarHounds.Default__SAA_Summon_RhogarHounds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Summon_RhogarHounds_C* USAA_Summon_RhogarHounds_C::GetDefaultObj()
{
	static class USAA_Summon_RhogarHounds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Summon_RhogarHounds_C*>(USAA_Summon_RhogarHounds_C::StaticClass()->DefaultObject);

	return Default;
}

}


