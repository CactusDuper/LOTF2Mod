#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_TakeSlashDamage.CameraShake_TakeSlashDamage_C
// (None)

class UClass* UCameraShake_TakeSlashDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_TakeSlashDamage_C");

	return Clss;
}


// CameraShake_TakeSlashDamage_C CameraShake_TakeSlashDamage.Default__CameraShake_TakeSlashDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_TakeSlashDamage_C* UCameraShake_TakeSlashDamage_C::GetDefaultObj()
{
	static class UCameraShake_TakeSlashDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_TakeSlashDamage_C*>(UCameraShake_TakeSlashDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


