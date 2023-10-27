#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_RepositionCharacter.GA_RepositionCharacter_C
// (None)

class UClass* UGA_RepositionCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_RepositionCharacter_C");

	return Clss;
}


// GA_RepositionCharacter_C GA_RepositionCharacter.Default__GA_RepositionCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_RepositionCharacter_C* UGA_RepositionCharacter_C::GetDefaultObj()
{
	static class UGA_RepositionCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_RepositionCharacter_C*>(UGA_RepositionCharacter_C::StaticClass()->DefaultObject);

	return Default;
}

}


