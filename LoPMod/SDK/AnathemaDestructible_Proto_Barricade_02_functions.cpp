#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaDestructible_Proto_Barricade_02.AnathemaDestructible_Proto_Barricade_02_C
// (Actor)

class UClass* AAnathemaDestructible_Proto_Barricade_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaDestructible_Proto_Barricade_02_C");

	return Clss;
}


// AnathemaDestructible_Proto_Barricade_02_C AnathemaDestructible_Proto_Barricade_02.Default__AnathemaDestructible_Proto_Barricade_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaDestructible_Proto_Barricade_02_C* AAnathemaDestructible_Proto_Barricade_02_C::GetDefaultObj()
{
	static class AAnathemaDestructible_Proto_Barricade_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaDestructible_Proto_Barricade_02_C*>(AAnathemaDestructible_Proto_Barricade_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


