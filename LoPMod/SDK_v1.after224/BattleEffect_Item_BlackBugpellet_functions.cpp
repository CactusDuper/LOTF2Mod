#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Item_BlackBugpellet.BattleEffect_Item_BlackBugpellet_C
// (None)

class UClass* UBattleEffect_Item_BlackBugpellet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Item_BlackBugpellet_C");

	return Clss;
}


// BattleEffect_Item_BlackBugpellet_C BattleEffect_Item_BlackBugpellet.Default__BattleEffect_Item_BlackBugpellet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Item_BlackBugpellet_C* UBattleEffect_Item_BlackBugpellet_C::GetDefaultObj()
{
	static class UBattleEffect_Item_BlackBugpellet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Item_BlackBugpellet_C*>(UBattleEffect_Item_BlackBugpellet_C::StaticClass()->DefaultObject);

	return Default;
}

}


