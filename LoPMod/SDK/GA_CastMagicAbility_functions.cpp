#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CastMagicAbility.GA_CastMagicAbility_C
// (None)

class UClass* UGA_CastMagicAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CastMagicAbility_C");

	return Clss;
}


// GA_CastMagicAbility_C GA_CastMagicAbility.Default__GA_CastMagicAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CastMagicAbility_C* UGA_CastMagicAbility_C::GetDefaultObj()
{
	static class UGA_CastMagicAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CastMagicAbility_C*>(UGA_CastMagicAbility_C::StaticClass()->DefaultObject);

	return Default;
}

}


