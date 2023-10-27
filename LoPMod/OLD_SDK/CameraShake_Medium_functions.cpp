#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Medium.CameraShake_Medium_C
// (None)

class UClass* UCameraShake_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Medium_C");

	return Clss;
}


// CameraShake_Medium_C CameraShake_Medium.Default__CameraShake_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Medium_C* UCameraShake_Medium_C::GetDefaultObj()
{
	static class UCameraShake_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Medium_C*>(UCameraShake_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


