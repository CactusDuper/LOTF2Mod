#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass 03_sh0010_CameraShake.03_sh0010_CameraShake_C
// (None)

class UClass* UZero3_sh0010_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("03_sh0010_CameraShake_C");

	return Clss;
}


// 03_sh0010_CameraShake_C 03_sh0010_CameraShake.Default__03_sh0010_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZero3_sh0010_CameraShake_C* UZero3_sh0010_CameraShake_C::GetDefaultObj()
{
	static class UZero3_sh0010_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZero3_sh0010_CameraShake_C*>(UZero3_sh0010_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


