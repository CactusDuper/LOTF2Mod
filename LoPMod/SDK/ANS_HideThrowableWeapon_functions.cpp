#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_HideThrowableWeapon.ANS_HideThrowableWeapon_C
// (None)

class UClass* UANS_HideThrowableWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_HideThrowableWeapon_C");

	return Clss;
}


// ANS_HideThrowableWeapon_C ANS_HideThrowableWeapon.Default__ANS_HideThrowableWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_HideThrowableWeapon_C* UANS_HideThrowableWeapon_C::GetDefaultObj()
{
	static class UANS_HideThrowableWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_HideThrowableWeapon_C*>(UANS_HideThrowableWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


