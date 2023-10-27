#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Revive_Shockwave.SAA_Revive_Shockwave_C
// (None)

class UClass* USAA_Revive_Shockwave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Revive_Shockwave_C");

	return Clss;
}


// SAA_Revive_Shockwave_C SAA_Revive_Shockwave.Default__SAA_Revive_Shockwave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Revive_Shockwave_C* USAA_Revive_Shockwave_C::GetDefaultObj()
{
	static class USAA_Revive_Shockwave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Revive_Shockwave_C*>(USAA_Revive_Shockwave_C::StaticClass()->DefaultObject);

	return Default;
}

}


