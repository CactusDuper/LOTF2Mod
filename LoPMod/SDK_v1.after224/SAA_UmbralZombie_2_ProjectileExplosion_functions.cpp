#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_UmbralZombie_2_ProjectileExplosion.SAA_UmbralZombie_2_ProjectileExplosion_C
// (None)

class UClass* USAA_UmbralZombie_2_ProjectileExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_UmbralZombie_2_ProjectileExplosion_C");

	return Clss;
}


// SAA_UmbralZombie_2_ProjectileExplosion_C SAA_UmbralZombie_2_ProjectileExplosion.Default__SAA_UmbralZombie_2_ProjectileExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_UmbralZombie_2_ProjectileExplosion_C* USAA_UmbralZombie_2_ProjectileExplosion_C::GetDefaultObj()
{
	static class USAA_UmbralZombie_2_ProjectileExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_UmbralZombie_2_ProjectileExplosion_C*>(USAA_UmbralZombie_2_ProjectileExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


