#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaDestructible_Roots_01.AnathemaDestructible_Roots_01_C
// (Actor)

class UClass* AAnathemaDestructible_Roots_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaDestructible_Roots_01_C");

	return Clss;
}


// AnathemaDestructible_Roots_01_C AnathemaDestructible_Roots_01.Default__AnathemaDestructible_Roots_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaDestructible_Roots_01_C* AAnathemaDestructible_Roots_01_C::GetDefaultObj()
{
	static class AAnathemaDestructible_Roots_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaDestructible_Roots_01_C*>(AAnathemaDestructible_Roots_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


