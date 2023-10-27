#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_204_ModifyStrength.BattleEffect_204_ModifyStrength_C
// (None)

class UClass* UBattleEffect_204_ModifyStrength_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_204_ModifyStrength_C");

	return Clss;
}


// BattleEffect_204_ModifyStrength_C BattleEffect_204_ModifyStrength.Default__BattleEffect_204_ModifyStrength_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_204_ModifyStrength_C* UBattleEffect_204_ModifyStrength_C::GetDefaultObj()
{
	static class UBattleEffect_204_ModifyStrength_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_204_ModifyStrength_C*>(UBattleEffect_204_ModifyStrength_C::StaticClass()->DefaultObject);

	return Default;
}

}


