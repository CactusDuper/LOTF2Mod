#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PlungeAttackLight.GA_PlungeAttackLight_C
// (None)

class UClass* UGA_PlungeAttackLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PlungeAttackLight_C");

	return Clss;
}


// GA_PlungeAttackLight_C GA_PlungeAttackLight.Default__GA_PlungeAttackLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PlungeAttackLight_C* UGA_PlungeAttackLight_C::GetDefaultObj()
{
	static class UGA_PlungeAttackLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PlungeAttackLight_C*>(UGA_PlungeAttackLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


