#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_TargetedTakeSlashDamage.CameraShake_TargetedTakeSlashDamage_C
// (None)

class UClass* UCameraShake_TargetedTakeSlashDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_TargetedTakeSlashDamage_C");

	return Clss;
}


// CameraShake_TargetedTakeSlashDamage_C CameraShake_TargetedTakeSlashDamage.Default__CameraShake_TargetedTakeSlashDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_TargetedTakeSlashDamage_C* UCameraShake_TargetedTakeSlashDamage_C::GetDefaultObj()
{
	static class UCameraShake_TargetedTakeSlashDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_TargetedTakeSlashDamage_C*>(UCameraShake_TargetedTakeSlashDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


