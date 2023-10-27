#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_TeleportToLastAnchor.BattleEffect_TeleportToLastAnchor_C
// (None)

class UClass* UBattleEffect_TeleportToLastAnchor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_TeleportToLastAnchor_C");

	return Clss;
}


// BattleEffect_TeleportToLastAnchor_C BattleEffect_TeleportToLastAnchor.Default__BattleEffect_TeleportToLastAnchor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_TeleportToLastAnchor_C* UBattleEffect_TeleportToLastAnchor_C::GetDefaultObj()
{
	static class UBattleEffect_TeleportToLastAnchor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_TeleportToLastAnchor_C*>(UBattleEffect_TeleportToLastAnchor_C::StaticClass()->DefaultObject);

	return Default;
}

}


