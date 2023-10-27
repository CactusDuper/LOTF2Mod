#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ManaPellet1.BattleEffect_ManaPellet1_C
// (None)

class UClass* UBattleEffect_ManaPellet1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ManaPellet1_C");

	return Clss;
}


// BattleEffect_ManaPellet1_C BattleEffect_ManaPellet1.Default__BattleEffect_ManaPellet1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ManaPellet1_C* UBattleEffect_ManaPellet1_C::GetDefaultObj()
{
	static class UBattleEffect_ManaPellet1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ManaPellet1_C*>(UBattleEffect_ManaPellet1_C::StaticClass()->DefaultObject);

	return Default;
}

}


