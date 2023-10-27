#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ForcedTranscendRealm_OnlyFromAxiom.GE_ForcedTranscendRealm_OnlyFromAxiom_C
// (None)

class UClass* UGE_ForcedTranscendRealm_OnlyFromAxiom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ForcedTranscendRealm_OnlyFromAxiom_C");

	return Clss;
}


// GE_ForcedTranscendRealm_OnlyFromAxiom_C GE_ForcedTranscendRealm_OnlyFromAxiom.Default__GE_ForcedTranscendRealm_OnlyFromAxiom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ForcedTranscendRealm_OnlyFromAxiom_C* UGE_ForcedTranscendRealm_OnlyFromAxiom_C::GetDefaultObj()
{
	static class UGE_ForcedTranscendRealm_OnlyFromAxiom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ForcedTranscendRealm_OnlyFromAxiom_C*>(UGE_ForcedTranscendRealm_OnlyFromAxiom_C::StaticClass()->DefaultObject);

	return Default;
}

}


