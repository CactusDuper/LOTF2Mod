#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_SpawnSAAOnIgniteApplication.BattleEffect_SpawnSAAOnIgniteApplication_C
// (None)

class UClass* UBattleEffect_SpawnSAAOnIgniteApplication_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_SpawnSAAOnIgniteApplication_C");

	return Clss;
}


// BattleEffect_SpawnSAAOnIgniteApplication_C BattleEffect_SpawnSAAOnIgniteApplication.Default__BattleEffect_SpawnSAAOnIgniteApplication_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_SpawnSAAOnIgniteApplication_C* UBattleEffect_SpawnSAAOnIgniteApplication_C::GetDefaultObj()
{
	static class UBattleEffect_SpawnSAAOnIgniteApplication_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_SpawnSAAOnIgniteApplication_C*>(UBattleEffect_SpawnSAAOnIgniteApplication_C::StaticClass()->DefaultObject);

	return Default;
}

}


