#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaDestructible_Roots_03.AnathemaDestructible_Roots_03_C
// (Actor)

class UClass* AAnathemaDestructible_Roots_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaDestructible_Roots_03_C");

	return Clss;
}


// AnathemaDestructible_Roots_03_C AnathemaDestructible_Roots_03.Default__AnathemaDestructible_Roots_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaDestructible_Roots_03_C* AAnathemaDestructible_Roots_03_C::GetDefaultObj()
{
	static class AAnathemaDestructible_Roots_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaDestructible_Roots_03_C*>(AAnathemaDestructible_Roots_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


