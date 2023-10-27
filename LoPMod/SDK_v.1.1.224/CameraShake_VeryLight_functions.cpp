#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_VeryLight.CameraShake_VeryLight_C
// (None)

class UClass* UCameraShake_VeryLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_VeryLight_C");

	return Clss;
}


// CameraShake_VeryLight_C CameraShake_VeryLight.Default__CameraShake_VeryLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_VeryLight_C* UCameraShake_VeryLight_C::GetDefaultObj()
{
	static class UCameraShake_VeryLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_VeryLight_C*>(UCameraShake_VeryLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


