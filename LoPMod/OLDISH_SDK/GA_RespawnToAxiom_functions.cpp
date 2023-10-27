#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_RespawnToAxiom.GA_RespawnToAxiom_C
// (None)

class UClass* UGA_RespawnToAxiom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_RespawnToAxiom_C");

	return Clss;
}


// GA_RespawnToAxiom_C GA_RespawnToAxiom.Default__GA_RespawnToAxiom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_RespawnToAxiom_C* UGA_RespawnToAxiom_C::GetDefaultObj()
{
	static class UGA_RespawnToAxiom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_RespawnToAxiom_C*>(UGA_RespawnToAxiom_C::StaticClass()->DefaultObject);

	return Default;
}

}


