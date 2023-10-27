#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SoulFlay_Contagion.GE_SoulFlay_Contagion_C
// (None)

class UClass* UGE_SoulFlay_Contagion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SoulFlay_Contagion_C");

	return Clss;
}


// GE_SoulFlay_Contagion_C GE_SoulFlay_Contagion.Default__GE_SoulFlay_Contagion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SoulFlay_Contagion_C* UGE_SoulFlay_Contagion_C::GetDefaultObj()
{
	static class UGE_SoulFlay_Contagion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SoulFlay_Contagion_C*>(UGE_SoulFlay_Contagion_C::StaticClass()->DefaultObject);

	return Default;
}

}


