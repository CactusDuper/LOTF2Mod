#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_AmmoPellet2.BattleEffect_AmmoPellet2_C
// (None)

class UClass* UBattleEffect_AmmoPellet2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_AmmoPellet2_C");

	return Clss;
}


// BattleEffect_AmmoPellet2_C BattleEffect_AmmoPellet2.Default__BattleEffect_AmmoPellet2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_AmmoPellet2_C* UBattleEffect_AmmoPellet2_C::GetDefaultObj()
{
	static class UBattleEffect_AmmoPellet2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_AmmoPellet2_C*>(UBattleEffect_AmmoPellet2_C::StaticClass()->DefaultObject);

	return Default;
}

}


