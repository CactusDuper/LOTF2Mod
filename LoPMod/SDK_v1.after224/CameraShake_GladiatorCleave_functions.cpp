#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_GladiatorCleave.CameraShake_GladiatorCleave_C
// (None)

class UClass* UCameraShake_GladiatorCleave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_GladiatorCleave_C");

	return Clss;
}


// CameraShake_GladiatorCleave_C CameraShake_GladiatorCleave.Default__CameraShake_GladiatorCleave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_GladiatorCleave_C* UCameraShake_GladiatorCleave_C::GetDefaultObj()
{
	static class UCameraShake_GladiatorCleave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_GladiatorCleave_C*>(UCameraShake_GladiatorCleave_C::StaticClass()->DefaultObject);

	return Default;
}

}


