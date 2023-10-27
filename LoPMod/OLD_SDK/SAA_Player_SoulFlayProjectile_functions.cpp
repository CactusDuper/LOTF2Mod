#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Player_SoulFlayProjectile.SAA_Player_SoulFlayProjectile_C
// (None)

class UClass* USAA_Player_SoulFlayProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Player_SoulFlayProjectile_C");

	return Clss;
}


// SAA_Player_SoulFlayProjectile_C SAA_Player_SoulFlayProjectile.Default__SAA_Player_SoulFlayProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Player_SoulFlayProjectile_C* USAA_Player_SoulFlayProjectile_C::GetDefaultObj()
{
	static class USAA_Player_SoulFlayProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Player_SoulFlayProjectile_C*>(USAA_Player_SoulFlayProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


