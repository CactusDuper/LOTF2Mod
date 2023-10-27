#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ManaPellet3.BattleEffect_ManaPellet3_C
// (None)

class UClass* UBattleEffect_ManaPellet3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ManaPellet3_C");

	return Clss;
}


// BattleEffect_ManaPellet3_C BattleEffect_ManaPellet3.Default__BattleEffect_ManaPellet3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ManaPellet3_C* UBattleEffect_ManaPellet3_C::GetDefaultObj()
{
	static class UBattleEffect_ManaPellet3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ManaPellet3_C*>(UBattleEffect_ManaPellet3_C::StaticClass()->DefaultObject);

	return Default;
}

}


