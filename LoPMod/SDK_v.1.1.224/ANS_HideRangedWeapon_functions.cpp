#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_HideRangedWeapon.ANS_HideRangedWeapon_C
// (None)

class UClass* UANS_HideRangedWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_HideRangedWeapon_C");

	return Clss;
}


// ANS_HideRangedWeapon_C ANS_HideRangedWeapon.Default__ANS_HideRangedWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_HideRangedWeapon_C* UANS_HideRangedWeapon_C::GetDefaultObj()
{
	static class UANS_HideRangedWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_HideRangedWeapon_C*>(UANS_HideRangedWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


