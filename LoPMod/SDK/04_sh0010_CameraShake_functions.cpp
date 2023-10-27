#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass 04_sh0010_CameraShake.04_sh0010_CameraShake_C
// (None)

class UClass* UZero4_sh0010_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("04_sh0010_CameraShake_C");

	return Clss;
}


// 04_sh0010_CameraShake_C 04_sh0010_CameraShake.Default__04_sh0010_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZero4_sh0010_CameraShake_C* UZero4_sh0010_CameraShake_C::GetDefaultObj()
{
	static class UZero4_sh0010_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZero4_sh0010_CameraShake_C*>(UZero4_sh0010_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


