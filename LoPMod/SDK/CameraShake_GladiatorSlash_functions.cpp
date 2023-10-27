#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_GladiatorSlash.CameraShake_GladiatorSlash_C
// (None)

class UClass* UCameraShake_GladiatorSlash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_GladiatorSlash_C");

	return Clss;
}


// CameraShake_GladiatorSlash_C CameraShake_GladiatorSlash.Default__CameraShake_GladiatorSlash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_GladiatorSlash_C* UCameraShake_GladiatorSlash_C::GetDefaultObj()
{
	static class UCameraShake_GladiatorSlash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_GladiatorSlash_C*>(UCameraShake_GladiatorSlash_C::StaticClass()->DefaultObject);

	return Default;
}

}


