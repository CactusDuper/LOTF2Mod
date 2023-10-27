#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_SHRD_Shard14Main.BattleEffect_SHRD_Shard14Main_C
// (None)

class UClass* UBattleEffect_SHRD_Shard14Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_SHRD_Shard14Main_C");

	return Clss;
}


// BattleEffect_SHRD_Shard14Main_C BattleEffect_SHRD_Shard14Main.Default__BattleEffect_SHRD_Shard14Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_SHRD_Shard14Main_C* UBattleEffect_SHRD_Shard14Main_C::GetDefaultObj()
{
	static class UBattleEffect_SHRD_Shard14Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_SHRD_Shard14Main_C*>(UBattleEffect_SHRD_Shard14Main_C::StaticClass()->DefaultObject);

	return Default;
}

}


