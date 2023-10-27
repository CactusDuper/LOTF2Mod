#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Light_Looping.CameraShake_Light_Looping_C
// (None)

class UClass* UCameraShake_Light_Looping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Light_Looping_C");

	return Clss;
}


// CameraShake_Light_Looping_C CameraShake_Light_Looping.Default__CameraShake_Light_Looping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Light_Looping_C* UCameraShake_Light_Looping_C::GetDefaultObj()
{
	static class UCameraShake_Light_Looping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Light_Looping_C*>(UCameraShake_Light_Looping_C::StaticClass()->DefaultObject);

	return Default;
}

}


