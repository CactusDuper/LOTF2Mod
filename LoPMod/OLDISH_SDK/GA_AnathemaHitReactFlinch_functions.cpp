#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AnathemaHitReactFlinch.GA_AnathemaHitReactFlinch_C
// (None)

class UClass* UGA_AnathemaHitReactFlinch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AnathemaHitReactFlinch_C");

	return Clss;
}


// GA_AnathemaHitReactFlinch_C GA_AnathemaHitReactFlinch.Default__GA_AnathemaHitReactFlinch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AnathemaHitReactFlinch_C* UGA_AnathemaHitReactFlinch_C::GetDefaultObj()
{
	static class UGA_AnathemaHitReactFlinch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AnathemaHitReactFlinch_C*>(UGA_AnathemaHitReactFlinch_C::StaticClass()->DefaultObject);

	return Default;
}

}


