#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WPN_PLA_GS_DarkTemplarIsaacGreatSword.BP_WPN_PLA_GS_DarkTemplarIsaacGreatSword_C
// (Actor)

class UClass* ABP_WPN_PLA_GS_DarkTemplarIsaacGreatSword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WPN_PLA_GS_DarkTemplarIsaacGreatSword_C");

	return Clss;
}


// BP_WPN_PLA_GS_DarkTemplarIsaacGreatSword_C BP_WPN_PLA_GS_DarkTemplarIsaacGreatSword.Default__BP_WPN_PLA_GS_DarkTemplarIsaacGreatSword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WPN_PLA_GS_DarkTemplarIsaacGreatSword_C* ABP_WPN_PLA_GS_DarkTemplarIsaacGreatSword_C::GetDefaultObj()
{
	static class ABP_WPN_PLA_GS_DarkTemplarIsaacGreatSword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WPN_PLA_GS_DarkTemplarIsaacGreatSword_C*>(ABP_WPN_PLA_GS_DarkTemplarIsaacGreatSword_C::StaticClass()->DefaultObject);

	return Default;
}

}


