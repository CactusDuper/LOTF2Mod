#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AnathemaSwitchStanceAbility.GA_AnathemaSwitchStanceAbility_C
// (None)

class UClass* UGA_AnathemaSwitchStanceAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AnathemaSwitchStanceAbility_C");

	return Clss;
}


// GA_AnathemaSwitchStanceAbility_C GA_AnathemaSwitchStanceAbility.Default__GA_AnathemaSwitchStanceAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AnathemaSwitchStanceAbility_C* UGA_AnathemaSwitchStanceAbility_C::GetDefaultObj()
{
	static class UGA_AnathemaSwitchStanceAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AnathemaSwitchStanceAbility_C*>(UGA_AnathemaSwitchStanceAbility_C::StaticClass()->DefaultObject);

	return Default;
}

}


