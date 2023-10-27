#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PlungeAttackHeavy.GA_PlungeAttackHeavy_C
// (None)

class UClass* UGA_PlungeAttackHeavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PlungeAttackHeavy_C");

	return Clss;
}


// GA_PlungeAttackHeavy_C GA_PlungeAttackHeavy.Default__GA_PlungeAttackHeavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PlungeAttackHeavy_C* UGA_PlungeAttackHeavy_C::GetDefaultObj()
{
	static class UGA_PlungeAttackHeavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PlungeAttackHeavy_C*>(UGA_PlungeAttackHeavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


