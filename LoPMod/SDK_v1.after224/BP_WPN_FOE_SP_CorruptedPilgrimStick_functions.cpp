#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WPN_FOE_SP_CorruptedPilgrimStick.BP_WPN_FOE_SP_CorruptedPilgrimStick_C
// (Actor)

class UClass* ABP_WPN_FOE_SP_CorruptedPilgrimStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WPN_FOE_SP_CorruptedPilgrimStick_C");

	return Clss;
}


// BP_WPN_FOE_SP_CorruptedPilgrimStick_C BP_WPN_FOE_SP_CorruptedPilgrimStick.Default__BP_WPN_FOE_SP_CorruptedPilgrimStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WPN_FOE_SP_CorruptedPilgrimStick_C* ABP_WPN_FOE_SP_CorruptedPilgrimStick_C::GetDefaultObj()
{
	static class ABP_WPN_FOE_SP_CorruptedPilgrimStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WPN_FOE_SP_CorruptedPilgrimStick_C*>(ABP_WPN_FOE_SP_CorruptedPilgrimStick_C::StaticClass()->DefaultObject);

	return Default;
}

}


