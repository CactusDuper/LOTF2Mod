#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SyncedAttackAbility.GA_SyncedAttackAbility_C
// (None)

class UClass* UGA_SyncedAttackAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SyncedAttackAbility_C");

	return Clss;
}


// GA_SyncedAttackAbility_C GA_SyncedAttackAbility.Default__GA_SyncedAttackAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SyncedAttackAbility_C* UGA_SyncedAttackAbility_C::GetDefaultObj()
{
	static class UGA_SyncedAttackAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SyncedAttackAbility_C*>(UGA_SyncedAttackAbility_C::StaticClass()->DefaultObject);

	return Default;
}

}


