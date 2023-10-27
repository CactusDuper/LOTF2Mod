#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomizationCharacter.CustomizationCharacter_C
// (Actor, Pawn)

class UClass* ACustomizationCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizationCharacter_C");

	return Clss;
}


// CustomizationCharacter_C CustomizationCharacter.Default__CustomizationCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACustomizationCharacter_C* ACustomizationCharacter_C::GetDefaultObj()
{
	static class ACustomizationCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACustomizationCharacter_C*>(ACustomizationCharacter_C::StaticClass()->DefaultObject);

	return Default;
}

}


