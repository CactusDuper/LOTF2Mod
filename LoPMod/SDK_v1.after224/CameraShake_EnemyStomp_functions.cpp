#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_EnemyStomp.CameraShake_EnemyStomp_C
// (None)

class UClass* UCameraShake_EnemyStomp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_EnemyStomp_C");

	return Clss;
}


// CameraShake_EnemyStomp_C CameraShake_EnemyStomp.Default__CameraShake_EnemyStomp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_EnemyStomp_C* UCameraShake_EnemyStomp_C::GetDefaultObj()
{
	static class UCameraShake_EnemyStomp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_EnemyStomp_C*>(UCameraShake_EnemyStomp_C::StaticClass()->DefaultObject);

	return Default;
}

}


