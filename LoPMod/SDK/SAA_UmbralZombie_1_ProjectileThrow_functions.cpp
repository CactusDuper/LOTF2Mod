#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_UmbralZombie_1_ProjectileThrow.SAA_UmbralZombie_1_ProjectileThrow_C
// (None)

class UClass* USAA_UmbralZombie_1_ProjectileThrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_UmbralZombie_1_ProjectileThrow_C");

	return Clss;
}


// SAA_UmbralZombie_1_ProjectileThrow_C SAA_UmbralZombie_1_ProjectileThrow.Default__SAA_UmbralZombie_1_ProjectileThrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_UmbralZombie_1_ProjectileThrow_C* USAA_UmbralZombie_1_ProjectileThrow_C::GetDefaultObj()
{
	static class USAA_UmbralZombie_1_ProjectileThrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_UmbralZombie_1_ProjectileThrow_C*>(USAA_UmbralZombie_1_ProjectileThrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


