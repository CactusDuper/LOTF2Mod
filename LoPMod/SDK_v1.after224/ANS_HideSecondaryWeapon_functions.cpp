#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_HideSecondaryWeapon.ANS_HideSecondaryWeapon_C
// (None)

class UClass* UANS_HideSecondaryWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_HideSecondaryWeapon_C");

	return Clss;
}


// ANS_HideSecondaryWeapon_C ANS_HideSecondaryWeapon.Default__ANS_HideSecondaryWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_HideSecondaryWeapon_C* UANS_HideSecondaryWeapon_C::GetDefaultObj()
{
	static class UANS_HideSecondaryWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_HideSecondaryWeapon_C*>(UANS_HideSecondaryWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


