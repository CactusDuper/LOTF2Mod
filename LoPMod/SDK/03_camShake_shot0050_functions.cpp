#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass 03_camShake_shot0050.03_camShake_shot0050_C
// (None)

class UClass* UZero3_camShake_shot0050_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("03_camShake_shot0050_C");

	return Clss;
}


// 03_camShake_shot0050_C 03_camShake_shot0050.Default__03_camShake_shot0050_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZero3_camShake_shot0050_C* UZero3_camShake_shot0050_C::GetDefaultObj()
{
	static class UZero3_camShake_shot0050_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZero3_camShake_shot0050_C*>(UZero3_camShake_shot0050_C::StaticClass()->DefaultObject);

	return Default;
}

}


