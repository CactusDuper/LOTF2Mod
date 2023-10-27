#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MAG_SPL_Rhogar_FireSpray.MAG_SPL_Rhogar_FireSpray_C
// (None)

class UClass* UMAG_SPL_Rhogar_FireSpray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MAG_SPL_Rhogar_FireSpray_C");

	return Clss;
}


// MAG_SPL_Rhogar_FireSpray_C MAG_SPL_Rhogar_FireSpray.Default__MAG_SPL_Rhogar_FireSpray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMAG_SPL_Rhogar_FireSpray_C* UMAG_SPL_Rhogar_FireSpray_C::GetDefaultObj()
{
	static class UMAG_SPL_Rhogar_FireSpray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMAG_SPL_Rhogar_FireSpray_C*>(UMAG_SPL_Rhogar_FireSpray_C::StaticClass()->DefaultObject);

	return Default;
}

}


