#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Magic_GreatMagicShield.BattleEffect_Magic_GreatMagicShield_C
// (None)

class UClass* UBattleEffect_Magic_GreatMagicShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Magic_GreatMagicShield_C");

	return Clss;
}


// BattleEffect_Magic_GreatMagicShield_C BattleEffect_Magic_GreatMagicShield.Default__BattleEffect_Magic_GreatMagicShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Magic_GreatMagicShield_C* UBattleEffect_Magic_GreatMagicShield_C::GetDefaultObj()
{
	static class UBattleEffect_Magic_GreatMagicShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Magic_GreatMagicShield_C*>(UBattleEffect_Magic_GreatMagicShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


