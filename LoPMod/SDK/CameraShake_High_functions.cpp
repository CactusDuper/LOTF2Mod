#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_High.CameraShake_High_C
// (None)

class UClass* UCameraShake_High_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_High_C");

	return Clss;
}


// CameraShake_High_C CameraShake_High.Default__CameraShake_High_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_High_C* UCameraShake_High_C::GetDefaultObj()
{
	static class UCameraShake_High_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_High_C*>(UCameraShake_High_C::StaticClass()->DefaultObject);

	return Default;
}

}


