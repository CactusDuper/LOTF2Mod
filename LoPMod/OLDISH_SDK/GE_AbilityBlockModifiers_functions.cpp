#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AbilityBlockModifiers.GE_AbilityBlockModifiers_C
// (None)

class UClass* UGE_AbilityBlockModifiers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AbilityBlockModifiers_C");

	return Clss;
}


// GE_AbilityBlockModifiers_C GE_AbilityBlockModifiers.Default__GE_AbilityBlockModifiers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AbilityBlockModifiers_C* UGE_AbilityBlockModifiers_C::GetDefaultObj()
{
	static class UGE_AbilityBlockModifiers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AbilityBlockModifiers_C*>(UGE_AbilityBlockModifiers_C::StaticClass()->DefaultObject);

	return Default;
}

}


