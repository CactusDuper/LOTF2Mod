#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_SoulFlayGravityWell.SAA_SoulFlayGravityWell_C
// (None)

class UClass* USAA_SoulFlayGravityWell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_SoulFlayGravityWell_C");

	return Clss;
}


// SAA_SoulFlayGravityWell_C SAA_SoulFlayGravityWell.Default__SAA_SoulFlayGravityWell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_SoulFlayGravityWell_C* USAA_SoulFlayGravityWell_C::GetDefaultObj()
{
	static class USAA_SoulFlayGravityWell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_SoulFlayGravityWell_C*>(USAA_SoulFlayGravityWell_C::StaticClass()->DefaultObject);

	return Default;
}

}


