#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AnathemaHitReactDamageReceived_Enemy.GA_AnathemaHitReactDamageReceived_Enemy_C
// (None)

class UClass* UGA_AnathemaHitReactDamageReceived_Enemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AnathemaHitReactDamageReceived_Enemy_C");

	return Clss;
}


// GA_AnathemaHitReactDamageReceived_Enemy_C GA_AnathemaHitReactDamageReceived_Enemy.Default__GA_AnathemaHitReactDamageReceived_Enemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AnathemaHitReactDamageReceived_Enemy_C* UGA_AnathemaHitReactDamageReceived_Enemy_C::GetDefaultObj()
{
	static class UGA_AnathemaHitReactDamageReceived_Enemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AnathemaHitReactDamageReceived_Enemy_C*>(UGA_AnathemaHitReactDamageReceived_Enemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


