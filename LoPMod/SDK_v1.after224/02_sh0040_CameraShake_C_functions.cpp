#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass 02_sh0040_CameraShake_C.02_sh0040_CameraShake_C_C
// (None)

class UClass* UZero2_sh0040_CameraShake_C_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("02_sh0040_CameraShake_C_C");

	return Clss;
}


// 02_sh0040_CameraShake_C_C 02_sh0040_CameraShake_C.Default__02_sh0040_CameraShake_C_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZero2_sh0040_CameraShake_C_C* UZero2_sh0040_CameraShake_C_C::GetDefaultObj()
{
	static class UZero2_sh0040_CameraShake_C_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZero2_sh0040_CameraShake_C_C*>(UZero2_sh0040_CameraShake_C_C::StaticClass()->DefaultObject);

	return Default;
}

}


