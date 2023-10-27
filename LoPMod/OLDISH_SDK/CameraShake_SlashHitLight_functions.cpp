#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_SlashHitLight.CameraShake_SlashHitLight_C
// (None)

class UClass* UCameraShake_SlashHitLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_SlashHitLight_C");

	return Clss;
}


// CameraShake_SlashHitLight_C CameraShake_SlashHitLight.Default__CameraShake_SlashHitLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_SlashHitLight_C* UCameraShake_SlashHitLight_C::GetDefaultObj()
{
	static class UCameraShake_SlashHitLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_SlashHitLight_C*>(UCameraShake_SlashHitLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


