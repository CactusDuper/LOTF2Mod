#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_SoulFlay_Contagion.SAA_SoulFlay_Contagion_C
// (None)

class UClass* USAA_SoulFlay_Contagion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_SoulFlay_Contagion_C");

	return Clss;
}


// SAA_SoulFlay_Contagion_C SAA_SoulFlay_Contagion.Default__SAA_SoulFlay_Contagion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_SoulFlay_Contagion_C* USAA_SoulFlay_Contagion_C::GetDefaultObj()
{
	static class USAA_SoulFlay_Contagion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_SoulFlay_Contagion_C*>(USAA_SoulFlay_Contagion_C::StaticClass()->DefaultObject);

	return Default;
}

}


