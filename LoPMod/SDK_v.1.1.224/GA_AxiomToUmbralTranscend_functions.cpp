#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AxiomToUmbralTranscend.GA_AxiomToUmbralTranscend_C
// (None)

class UClass* UGA_AxiomToUmbralTranscend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AxiomToUmbralTranscend_C");

	return Clss;
}


// GA_AxiomToUmbralTranscend_C GA_AxiomToUmbralTranscend.Default__GA_AxiomToUmbralTranscend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AxiomToUmbralTranscend_C* UGA_AxiomToUmbralTranscend_C::GetDefaultObj()
{
	static class UGA_AxiomToUmbralTranscend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AxiomToUmbralTranscend_C*>(UGA_AxiomToUmbralTranscend_C::StaticClass()->DefaultObject);

	return Default;
}

}


