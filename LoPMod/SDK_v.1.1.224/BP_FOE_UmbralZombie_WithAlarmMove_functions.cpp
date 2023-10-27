#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FOE_UmbralZombie_WithAlarmMove.BP_FOE_UmbralZombie_WithAlarmMove_C
// (Actor, Pawn)

class UClass* ABP_FOE_UmbralZombie_WithAlarmMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FOE_UmbralZombie_WithAlarmMove_C");

	return Clss;
}


// BP_FOE_UmbralZombie_WithAlarmMove_C BP_FOE_UmbralZombie_WithAlarmMove.Default__BP_FOE_UmbralZombie_WithAlarmMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FOE_UmbralZombie_WithAlarmMove_C* ABP_FOE_UmbralZombie_WithAlarmMove_C::GetDefaultObj()
{
	static class ABP_FOE_UmbralZombie_WithAlarmMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FOE_UmbralZombie_WithAlarmMove_C*>(ABP_FOE_UmbralZombie_WithAlarmMove_C::StaticClass()->DefaultObject);

	return Default;
}

}


