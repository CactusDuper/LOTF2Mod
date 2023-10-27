#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_SoulFlayBomb.BattleEffect_SoulFlayBomb_C
// (None)

class UClass* UBattleEffect_SoulFlayBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_SoulFlayBomb_C");

	return Clss;
}


// BattleEffect_SoulFlayBomb_C BattleEffect_SoulFlayBomb.Default__BattleEffect_SoulFlayBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_SoulFlayBomb_C* UBattleEffect_SoulFlayBomb_C::GetDefaultObj()
{
	static class UBattleEffect_SoulFlayBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_SoulFlayBomb_C*>(UBattleEffect_SoulFlayBomb_C::StaticClass()->DefaultObject);

	return Default;
}

}


