#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Stab.CameraShake_Stab_C
// (None)

class UClass* UCameraShake_Stab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Stab_C");

	return Clss;
}


// CameraShake_Stab_C CameraShake_Stab.Default__CameraShake_Stab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Stab_C* UCameraShake_Stab_C::GetDefaultObj()
{
	static class UCameraShake_Stab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Stab_C*>(UCameraShake_Stab_C::StaticClass()->DefaultObject);

	return Default;
}

}


