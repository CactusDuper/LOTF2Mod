#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ResetStaggerHealth.GE_ResetStaggerHealth_C
// (None)

class UClass* UGE_ResetStaggerHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ResetStaggerHealth_C");

	return Clss;
}


// GE_ResetStaggerHealth_C GE_ResetStaggerHealth.Default__GE_ResetStaggerHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ResetStaggerHealth_C* UGE_ResetStaggerHealth_C::GetDefaultObj()
{
	static class UGE_ResetStaggerHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ResetStaggerHealth_C*>(UGE_ResetStaggerHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


