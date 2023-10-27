#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MovementImpaired.GE_MovementImpaired_C
// (None)

class UClass* UGE_MovementImpaired_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MovementImpaired_C");

	return Clss;
}


// GE_MovementImpaired_C GE_MovementImpaired.Default__GE_MovementImpaired_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MovementImpaired_C* UGE_MovementImpaired_C::GetDefaultObj()
{
	static class UGE_MovementImpaired_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MovementImpaired_C*>(UGE_MovementImpaired_C::StaticClass()->DefaultObject);

	return Default;
}

}


