#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_SHRD_Shard15Second.BattleEffect_SHRD_Shard15Second_C
// (None)

class UClass* UBattleEffect_SHRD_Shard15Second_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_SHRD_Shard15Second_C");

	return Clss;
}


// BattleEffect_SHRD_Shard15Second_C BattleEffect_SHRD_Shard15Second.Default__BattleEffect_SHRD_Shard15Second_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_SHRD_Shard15Second_C* UBattleEffect_SHRD_Shard15Second_C::GetDefaultObj()
{
	static class UBattleEffect_SHRD_Shard15Second_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_SHRD_Shard15Second_C*>(UBattleEffect_SHRD_Shard15Second_C::StaticClass()->DefaultObject);

	return Default;
}

}

