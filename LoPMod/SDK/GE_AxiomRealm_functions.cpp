#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AxiomRealm.GE_AxiomRealm_C
// (None)

class UClass* UGE_AxiomRealm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AxiomRealm_C");

	return Clss;
}


// GE_AxiomRealm_C GE_AxiomRealm.Default__GE_AxiomRealm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AxiomRealm_C* UGE_AxiomRealm_C::GetDefaultObj()
{
	static class UGE_AxiomRealm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AxiomRealm_C*>(UGE_AxiomRealm_C::StaticClass()->DefaultObject);

	return Default;
}

}


