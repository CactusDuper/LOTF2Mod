#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_BlockMovement.GA_BlockMovement_C
// (None)

class UClass* UGA_BlockMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_BlockMovement_C");

	return Clss;
}


// GA_BlockMovement_C GA_BlockMovement.Default__GA_BlockMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_BlockMovement_C* UGA_BlockMovement_C::GetDefaultObj()
{
	static class UGA_BlockMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_BlockMovement_C*>(UGA_BlockMovement_C::StaticClass()->DefaultObject);

	return Default;
}

}


