#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MovementImpaired_Basic_Axiom.GE_MovementImpaired_Basic_Axiom_C
// (None)

class UClass* UGE_MovementImpaired_Basic_Axiom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MovementImpaired_Basic_Axiom_C");

	return Clss;
}


// GE_MovementImpaired_Basic_Axiom_C GE_MovementImpaired_Basic_Axiom.Default__GE_MovementImpaired_Basic_Axiom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MovementImpaired_Basic_Axiom_C* UGE_MovementImpaired_Basic_Axiom_C::GetDefaultObj()
{
	static class UGE_MovementImpaired_Basic_Axiom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MovementImpaired_Basic_Axiom_C*>(UGE_MovementImpaired_Basic_Axiom_C::StaticClass()->DefaultObject);

	return Default;
}

}


