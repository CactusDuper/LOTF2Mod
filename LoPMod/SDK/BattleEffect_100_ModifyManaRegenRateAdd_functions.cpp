#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_100_ModifyManaRegenRateAdd.BattleEffect_100_ModifyManaRegenRateAdd_C
// (None)

class UClass* UBattleEffect_100_ModifyManaRegenRateAdd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_100_ModifyManaRegenRateAdd_C");

	return Clss;
}


// BattleEffect_100_ModifyManaRegenRateAdd_C BattleEffect_100_ModifyManaRegenRateAdd.Default__BattleEffect_100_ModifyManaRegenRateAdd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_100_ModifyManaRegenRateAdd_C* UBattleEffect_100_ModifyManaRegenRateAdd_C::GetDefaultObj()
{
	static class UBattleEffect_100_ModifyManaRegenRateAdd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_100_ModifyManaRegenRateAdd_C*>(UBattleEffect_100_ModifyManaRegenRateAdd_C::StaticClass()->DefaultObject);

	return Default;
}

}


