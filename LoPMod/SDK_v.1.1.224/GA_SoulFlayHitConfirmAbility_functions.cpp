#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SoulFlayHitConfirmAbility.GA_SoulFlayHitConfirmAbility_C
// (None)

class UClass* UGA_SoulFlayHitConfirmAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SoulFlayHitConfirmAbility_C");

	return Clss;
}


// GA_SoulFlayHitConfirmAbility_C GA_SoulFlayHitConfirmAbility.Default__GA_SoulFlayHitConfirmAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SoulFlayHitConfirmAbility_C* UGA_SoulFlayHitConfirmAbility_C::GetDefaultObj()
{
	static class UGA_SoulFlayHitConfirmAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SoulFlayHitConfirmAbility_C*>(UGA_SoulFlayHitConfirmAbility_C::StaticClass()->DefaultObject);

	return Default;
}

}


