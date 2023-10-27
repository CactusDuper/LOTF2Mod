#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_TeleportToLastAnchorWithVigorDrop.BattleEffect_TeleportToLastAnchorWithVigorDrop_C
// (None)

class UClass* UBattleEffect_TeleportToLastAnchorWithVigorDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_TeleportToLastAnchorWithVigorDrop_C");

	return Clss;
}


// BattleEffect_TeleportToLastAnchorWithVigorDrop_C BattleEffect_TeleportToLastAnchorWithVigorDrop.Default__BattleEffect_TeleportToLastAnchorWithVigorDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_TeleportToLastAnchorWithVigorDrop_C* UBattleEffect_TeleportToLastAnchorWithVigorDrop_C::GetDefaultObj()
{
	static class UBattleEffect_TeleportToLastAnchorWithVigorDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_TeleportToLastAnchorWithVigorDrop_C*>(UBattleEffect_TeleportToLastAnchorWithVigorDrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


