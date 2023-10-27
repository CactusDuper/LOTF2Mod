#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MultiplyStaminaRegenRate.GE_MultiplyStaminaRegenRate_C
// (None)

class UClass* UGE_MultiplyStaminaRegenRate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MultiplyStaminaRegenRate_C");

	return Clss;
}


// GE_MultiplyStaminaRegenRate_C GE_MultiplyStaminaRegenRate.Default__GE_MultiplyStaminaRegenRate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MultiplyStaminaRegenRate_C* UGE_MultiplyStaminaRegenRate_C::GetDefaultObj()
{
	static class UGE_MultiplyStaminaRegenRate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MultiplyStaminaRegenRate_C*>(UGE_MultiplyStaminaRegenRate_C::StaticClass()->DefaultObject);

	return Default;
}

}


