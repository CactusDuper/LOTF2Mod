#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Combat_BlockStaminaRegen.GE_Combat_BlockStaminaRegen_C
// (None)

class UClass* UGE_Combat_BlockStaminaRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Combat_BlockStaminaRegen_C");

	return Clss;
}


// GE_Combat_BlockStaminaRegen_C GE_Combat_BlockStaminaRegen.Default__GE_Combat_BlockStaminaRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Combat_BlockStaminaRegen_C* UGE_Combat_BlockStaminaRegen_C::GetDefaultObj()
{
	static class UGE_Combat_BlockStaminaRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Combat_BlockStaminaRegen_C*>(UGE_Combat_BlockStaminaRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


