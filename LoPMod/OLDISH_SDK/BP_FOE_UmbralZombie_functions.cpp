#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FOE_UmbralZombie.BP_FOE_UmbralZombie_C
// (Actor, Pawn)

class UClass* ABP_FOE_UmbralZombie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FOE_UmbralZombie_C");

	return Clss;
}


// BP_FOE_UmbralZombie_C BP_FOE_UmbralZombie.Default__BP_FOE_UmbralZombie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FOE_UmbralZombie_C* ABP_FOE_UmbralZombie_C::GetDefaultObj()
{
	static class ABP_FOE_UmbralZombie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FOE_UmbralZombie_C*>(ABP_FOE_UmbralZombie_C::StaticClass()->DefaultObject);

	return Default;
}

}


