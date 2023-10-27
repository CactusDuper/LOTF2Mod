#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_AmbientIntroLight.CameraShake_AmbientIntroLight_C
// (None)

class UClass* UCameraShake_AmbientIntroLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_AmbientIntroLight_C");

	return Clss;
}


// CameraShake_AmbientIntroLight_C CameraShake_AmbientIntroLight.Default__CameraShake_AmbientIntroLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_AmbientIntroLight_C* UCameraShake_AmbientIntroLight_C::GetDefaultObj()
{
	static class UCameraShake_AmbientIntroLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_AmbientIntroLight_C*>(UCameraShake_AmbientIntroLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


