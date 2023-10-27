#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Pilgrim_HolyProjectile_Miss.SAA_Pilgrim_HolyProjectile_Miss_C
// (None)

class UClass* USAA_Pilgrim_HolyProjectile_Miss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Pilgrim_HolyProjectile_Miss_C");

	return Clss;
}


// SAA_Pilgrim_HolyProjectile_Miss_C SAA_Pilgrim_HolyProjectile_Miss.Default__SAA_Pilgrim_HolyProjectile_Miss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Pilgrim_HolyProjectile_Miss_C* USAA_Pilgrim_HolyProjectile_Miss_C::GetDefaultObj()
{
	static class USAA_Pilgrim_HolyProjectile_Miss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Pilgrim_HolyProjectile_Miss_C*>(USAA_Pilgrim_HolyProjectile_Miss_C::StaticClass()->DefaultObject);

	return Default;
}

}


