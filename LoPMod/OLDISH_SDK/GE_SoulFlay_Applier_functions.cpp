#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SoulFlay_Applier.GE_SoulFlay_Applier_C
// (None)

class UClass* UGE_SoulFlay_Applier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SoulFlay_Applier_C");

	return Clss;
}


// GE_SoulFlay_Applier_C GE_SoulFlay_Applier.Default__GE_SoulFlay_Applier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SoulFlay_Applier_C* UGE_SoulFlay_Applier_C::GetDefaultObj()
{
	static class UGE_SoulFlay_Applier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SoulFlay_Applier_C*>(UGE_SoulFlay_Applier_C::StaticClass()->DefaultObject);

	return Default;
}

}


