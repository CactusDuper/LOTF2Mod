#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_UmbralZombie_OnSpawn_PlayMontage.GE_UmbralZombie_OnSpawn_PlayMontage_C
// (None)

class UClass* UGE_UmbralZombie_OnSpawn_PlayMontage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_UmbralZombie_OnSpawn_PlayMontage_C");

	return Clss;
}


// GE_UmbralZombie_OnSpawn_PlayMontage_C GE_UmbralZombie_OnSpawn_PlayMontage.Default__GE_UmbralZombie_OnSpawn_PlayMontage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_UmbralZombie_OnSpawn_PlayMontage_C* UGE_UmbralZombie_OnSpawn_PlayMontage_C::GetDefaultObj()
{
	static class UGE_UmbralZombie_OnSpawn_PlayMontage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_UmbralZombie_OnSpawn_PlayMontage_C*>(UGE_UmbralZombie_OnSpawn_PlayMontage_C::StaticClass()->DefaultObject);

	return Default;
}

}


