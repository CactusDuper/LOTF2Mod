#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Magic_MagicShield.BattleEffect_Magic_MagicShield_C
// (None)

class UClass* UBattleEffect_Magic_MagicShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Magic_MagicShield_C");

	return Clss;
}


// BattleEffect_Magic_MagicShield_C BattleEffect_Magic_MagicShield.Default__BattleEffect_Magic_MagicShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Magic_MagicShield_C* UBattleEffect_Magic_MagicShield_C::GetDefaultObj()
{
	static class UBattleEffect_Magic_MagicShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Magic_MagicShield_C*>(UBattleEffect_Magic_MagicShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


