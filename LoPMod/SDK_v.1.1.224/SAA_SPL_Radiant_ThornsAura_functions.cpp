#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_SPL_Radiant_ThornsAura.SAA_SPL_Radiant_ThornsAura_C
// (None)

class UClass* USAA_SPL_Radiant_ThornsAura_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_SPL_Radiant_ThornsAura_C");

	return Clss;
}


// SAA_SPL_Radiant_ThornsAura_C SAA_SPL_Radiant_ThornsAura.Default__SAA_SPL_Radiant_ThornsAura_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_SPL_Radiant_ThornsAura_C* USAA_SPL_Radiant_ThornsAura_C::GetDefaultObj()
{
	static class USAA_SPL_Radiant_ThornsAura_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_SPL_Radiant_ThornsAura_C*>(USAA_SPL_Radiant_ThornsAura_C::StaticClass()->DefaultObject);

	return Default;
}

}


