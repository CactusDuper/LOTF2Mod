#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_55mm.CameraShake_55mm_C
// (None)

class UClass* UCameraShake_55mm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_55mm_C");

	return Clss;
}


// CameraShake_55mm_C CameraShake_55mm.Default__CameraShake_55mm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_55mm_C* UCameraShake_55mm_C::GetDefaultObj()
{
	static class UCameraShake_55mm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_55mm_C*>(UCameraShake_55mm_C::StaticClass()->DefaultObject);

	return Default;
}

}


