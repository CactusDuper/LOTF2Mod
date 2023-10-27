#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_BlockInvasions.BattleEffect_BlockInvasions_C
// (None)

class UClass* UBattleEffect_BlockInvasions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_BlockInvasions_C");

	return Clss;
}


// BattleEffect_BlockInvasions_C BattleEffect_BlockInvasions.Default__BattleEffect_BlockInvasions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_BlockInvasions_C* UBattleEffect_BlockInvasions_C::GetDefaultObj()
{
	static class UBattleEffect_BlockInvasions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_BlockInvasions_C*>(UBattleEffect_BlockInvasions_C::StaticClass()->DefaultObject);

	return Default;
}

}


