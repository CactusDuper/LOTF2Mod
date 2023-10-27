#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_DeflectSlash.CameraShake_DeflectSlash_C
// (None)

class UClass* UCameraShake_DeflectSlash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_DeflectSlash_C");

	return Clss;
}


// CameraShake_DeflectSlash_C CameraShake_DeflectSlash.Default__CameraShake_DeflectSlash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_DeflectSlash_C* UCameraShake_DeflectSlash_C::GetDefaultObj()
{
	static class UCameraShake_DeflectSlash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_DeflectSlash_C*>(UCameraShake_DeflectSlash_C::StaticClass()->DefaultObject);

	return Default;
}

}


