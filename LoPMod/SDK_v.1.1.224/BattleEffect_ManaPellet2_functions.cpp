#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ManaPellet2.BattleEffect_ManaPellet2_C
// (None)

class UClass* UBattleEffect_ManaPellet2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ManaPellet2_C");

	return Clss;
}


// BattleEffect_ManaPellet2_C BattleEffect_ManaPellet2.Default__BattleEffect_ManaPellet2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ManaPellet2_C* UBattleEffect_ManaPellet2_C::GetDefaultObj()
{
	static class UBattleEffect_ManaPellet2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ManaPellet2_C*>(UBattleEffect_ManaPellet2_C::StaticClass()->DefaultObject);

	return Default;
}

}


