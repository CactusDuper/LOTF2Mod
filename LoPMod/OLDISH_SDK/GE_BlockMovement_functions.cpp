#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BlockMovement.GE_BlockMovement_C
// (None)

class UClass* UGE_BlockMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BlockMovement_C");

	return Clss;
}


// GE_BlockMovement_C GE_BlockMovement.Default__GE_BlockMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BlockMovement_C* UGE_BlockMovement_C::GetDefaultObj()
{
	static class UGE_BlockMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BlockMovement_C*>(UGE_BlockMovement_C::StaticClass()->DefaultObject);

	return Default;
}

}


