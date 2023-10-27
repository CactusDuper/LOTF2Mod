#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Pilgrim_HolyProjectile.SAA_Pilgrim_HolyProjectile_C
// (None)

class UClass* USAA_Pilgrim_HolyProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Pilgrim_HolyProjectile_C");

	return Clss;
}


// SAA_Pilgrim_HolyProjectile_C SAA_Pilgrim_HolyProjectile.Default__SAA_Pilgrim_HolyProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Pilgrim_HolyProjectile_C* USAA_Pilgrim_HolyProjectile_C::GetDefaultObj()
{
	static class USAA_Pilgrim_HolyProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Pilgrim_HolyProjectile_C*>(USAA_Pilgrim_HolyProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


