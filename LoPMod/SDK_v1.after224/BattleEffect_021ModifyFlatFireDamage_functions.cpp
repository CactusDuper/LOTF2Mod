#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_021ModifyFlatFireDamage.BattleEffect_021ModifyFlatFireDamage_C
// (None)

class UClass* UBattleEffect_021ModifyFlatFireDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_021ModifyFlatFireDamage_C");

	return Clss;
}


// BattleEffect_021ModifyFlatFireDamage_C BattleEffect_021ModifyFlatFireDamage.Default__BattleEffect_021ModifyFlatFireDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_021ModifyFlatFireDamage_C* UBattleEffect_021ModifyFlatFireDamage_C::GetDefaultObj()
{
	static class UBattleEffect_021ModifyFlatFireDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_021ModifyFlatFireDamage_C*>(UBattleEffect_021ModifyFlatFireDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


