#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_113_ModifyStatusFrostbiteAbsortion.BattleEffect_113_ModifyStatusFrostbiteAbsortion_C
// (None)

class UClass* UBattleEffect_113_ModifyStatusFrostbiteAbsortion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_113_ModifyStatusFrostbiteAbsortion_C");

	return Clss;
}


// BattleEffect_113_ModifyStatusFrostbiteAbsortion_C BattleEffect_113_ModifyStatusFrostbiteAbsortion.Default__BattleEffect_113_ModifyStatusFrostbiteAbsortion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_113_ModifyStatusFrostbiteAbsortion_C* UBattleEffect_113_ModifyStatusFrostbiteAbsortion_C::GetDefaultObj()
{
	static class UBattleEffect_113_ModifyStatusFrostbiteAbsortion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_113_ModifyStatusFrostbiteAbsortion_C*>(UBattleEffect_113_ModifyStatusFrostbiteAbsortion_C::StaticClass()->DefaultObject);

	return Default;
}

}


