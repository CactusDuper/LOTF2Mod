#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Ignite_Explosion.SAA_Ignite_Explosion_C
// (None)

class UClass* USAA_Ignite_Explosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Ignite_Explosion_C");

	return Clss;
}


// SAA_Ignite_Explosion_C SAA_Ignite_Explosion.Default__SAA_Ignite_Explosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Ignite_Explosion_C* USAA_Ignite_Explosion_C::GetDefaultObj()
{
	static class USAA_Ignite_Explosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Ignite_Explosion_C*>(USAA_Ignite_Explosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


