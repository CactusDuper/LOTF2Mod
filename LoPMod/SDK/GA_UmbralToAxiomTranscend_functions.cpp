#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_UmbralToAxiomTranscend.GA_UmbralToAxiomTranscend_C
// (None)

class UClass* UGA_UmbralToAxiomTranscend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_UmbralToAxiomTranscend_C");

	return Clss;
}


// GA_UmbralToAxiomTranscend_C GA_UmbralToAxiomTranscend.Default__GA_UmbralToAxiomTranscend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_UmbralToAxiomTranscend_C* UGA_UmbralToAxiomTranscend_C::GetDefaultObj()
{
	static class UGA_UmbralToAxiomTranscend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_UmbralToAxiomTranscend_C*>(UGA_UmbralToAxiomTranscend_C::StaticClass()->DefaultObject);

	return Default;
}

}


