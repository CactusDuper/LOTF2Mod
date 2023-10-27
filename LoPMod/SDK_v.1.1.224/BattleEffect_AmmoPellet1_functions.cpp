#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_AmmoPellet1.BattleEffect_AmmoPellet1_C
// (None)

class UClass* UBattleEffect_AmmoPellet1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_AmmoPellet1_C");

	return Clss;
}


// BattleEffect_AmmoPellet1_C BattleEffect_AmmoPellet1.Default__BattleEffect_AmmoPellet1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_AmmoPellet1_C* UBattleEffect_AmmoPellet1_C::GetDefaultObj()
{
	static class UBattleEffect_AmmoPellet1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_AmmoPellet1_C*>(UBattleEffect_AmmoPellet1_C::StaticClass()->DefaultObject);

	return Default;
}

}


