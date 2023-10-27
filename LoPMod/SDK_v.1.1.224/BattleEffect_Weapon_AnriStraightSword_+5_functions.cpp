#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Weapon_AnriStraightSword_+5.BattleEffect_Weapon_AnriStraightSword_+5_C
// (None)

class UClass* UBattleEffect_Weapon_AnriStraightSword_Plus5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Weapon_AnriStraightSword_+5_C");

	return Clss;
}


// BattleEffect_Weapon_AnriStraightSword_+5_C BattleEffect_Weapon_AnriStraightSword_+5.Default__BattleEffect_Weapon_AnriStraightSword_+5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Weapon_AnriStraightSword_Plus5_C* UBattleEffect_Weapon_AnriStraightSword_Plus5_C::GetDefaultObj()
{
	static class UBattleEffect_Weapon_AnriStraightSword_Plus5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Weapon_AnriStraightSword_Plus5_C*>(UBattleEffect_Weapon_AnriStraightSword_Plus5_C::StaticClass()->DefaultObject);

	return Default;
}

}


