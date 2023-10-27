#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RespawnToAxiom.GE_RespawnToAxiom_C
// (None)

class UClass* UGE_RespawnToAxiom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RespawnToAxiom_C");

	return Clss;
}


// GE_RespawnToAxiom_C GE_RespawnToAxiom.Default__GE_RespawnToAxiom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RespawnToAxiom_C* UGE_RespawnToAxiom_C::GetDefaultObj()
{
	static class UGE_RespawnToAxiom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RespawnToAxiom_C*>(UGE_RespawnToAxiom_C::StaticClass()->DefaultObject);

	return Default;
}

}


