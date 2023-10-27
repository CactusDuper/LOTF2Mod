#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HaltedEffect.GE_HaltedEffect_C
// (None)

class UClass* UGE_HaltedEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HaltedEffect_C");

	return Clss;
}


// GE_HaltedEffect_C GE_HaltedEffect.Default__GE_HaltedEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HaltedEffect_C* UGE_HaltedEffect_C::GetDefaultObj()
{
	static class UGE_HaltedEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HaltedEffect_C*>(UGE_HaltedEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


