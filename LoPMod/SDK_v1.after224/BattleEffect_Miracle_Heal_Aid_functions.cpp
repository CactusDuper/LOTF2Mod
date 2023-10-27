#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Miracle_Heal_Aid.BattleEffect_Miracle_Heal_Aid_C
// (None)

class UClass* UBattleEffect_Miracle_Heal_Aid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Miracle_Heal_Aid_C");

	return Clss;
}


// BattleEffect_Miracle_Heal_Aid_C BattleEffect_Miracle_Heal_Aid.Default__BattleEffect_Miracle_Heal_Aid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Miracle_Heal_Aid_C* UBattleEffect_Miracle_Heal_Aid_C::GetDefaultObj()
{
	static class UBattleEffect_Miracle_Heal_Aid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Miracle_Heal_Aid_C*>(UBattleEffect_Miracle_Heal_Aid_C::StaticClass()->DefaultObject);

	return Default;
}

}


