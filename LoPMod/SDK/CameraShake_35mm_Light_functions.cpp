#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_35mm_Light.CameraShake_35mm_Light_C
// (None)

class UClass* UCameraShake_35mm_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_35mm_Light_C");

	return Clss;
}


// CameraShake_35mm_Light_C CameraShake_35mm_Light.Default__CameraShake_35mm_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_35mm_Light_C* UCameraShake_35mm_Light_C::GetDefaultObj()
{
	static class UCameraShake_35mm_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_35mm_Light_C*>(UCameraShake_35mm_Light_C::StaticClass()->DefaultObject);

	return Default;
}

}

