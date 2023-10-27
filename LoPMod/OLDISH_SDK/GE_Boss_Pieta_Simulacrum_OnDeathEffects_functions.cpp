#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Boss_Pieta_Simulacrum_OnDeathEffects.GE_Boss_Pieta_Simulacrum_OnDeathEffects_C
// (None)

class UClass* UGE_Boss_Pieta_Simulacrum_OnDeathEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Boss_Pieta_Simulacrum_OnDeathEffects_C");

	return Clss;
}


// GE_Boss_Pieta_Simulacrum_OnDeathEffects_C GE_Boss_Pieta_Simulacrum_OnDeathEffects.Default__GE_Boss_Pieta_Simulacrum_OnDeathEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Boss_Pieta_Simulacrum_OnDeathEffects_C* UGE_Boss_Pieta_Simulacrum_OnDeathEffects_C::GetDefaultObj()
{
	static class UGE_Boss_Pieta_Simulacrum_OnDeathEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Boss_Pieta_Simulacrum_OnDeathEffects_C*>(UGE_Boss_Pieta_Simulacrum_OnDeathEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


