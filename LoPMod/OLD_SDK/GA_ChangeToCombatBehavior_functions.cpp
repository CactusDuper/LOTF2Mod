#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ChangeToCombatBehavior.GA_ChangeToCombatBehavior_C
// (None)

class UClass* UGA_ChangeToCombatBehavior_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ChangeToCombatBehavior_C");

	return Clss;
}


// GA_ChangeToCombatBehavior_C GA_ChangeToCombatBehavior.Default__GA_ChangeToCombatBehavior_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ChangeToCombatBehavior_C* UGA_ChangeToCombatBehavior_C::GetDefaultObj()
{
	static class UGA_ChangeToCombatBehavior_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ChangeToCombatBehavior_C*>(UGA_ChangeToCombatBehavior_C::StaticClass()->DefaultObject);

	return Default;
}

}


