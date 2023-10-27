#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ParriedEffect.GE_ParriedEffect_C
// (None)

class UClass* UGE_ParriedEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ParriedEffect_C");

	return Clss;
}


// GE_ParriedEffect_C GE_ParriedEffect.Default__GE_ParriedEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ParriedEffect_C* UGE_ParriedEffect_C::GetDefaultObj()
{
	static class UGE_ParriedEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ParriedEffect_C*>(UGE_ParriedEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


