#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_AOE_Banshee_IceWall_Active_Lingering.SAA_AOE_Banshee_IceWall_Active_Lingering_C
// (None)

class UClass* USAA_AOE_Banshee_IceWall_Active_Lingering_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_AOE_Banshee_IceWall_Active_Lingering_C");

	return Clss;
}


// SAA_AOE_Banshee_IceWall_Active_Lingering_C SAA_AOE_Banshee_IceWall_Active_Lingering.Default__SAA_AOE_Banshee_IceWall_Active_Lingering_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_AOE_Banshee_IceWall_Active_Lingering_C* USAA_AOE_Banshee_IceWall_Active_Lingering_C::GetDefaultObj()
{
	static class USAA_AOE_Banshee_IceWall_Active_Lingering_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_AOE_Banshee_IceWall_Active_Lingering_C*>(USAA_AOE_Banshee_IceWall_Active_Lingering_C::StaticClass()->DefaultObject);

	return Default;
}

}


