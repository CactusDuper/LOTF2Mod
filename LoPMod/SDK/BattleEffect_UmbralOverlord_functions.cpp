#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_UmbralOverlord.BattleEffect_UmbralOverlord_C
// (None)

class UClass* UBattleEffect_UmbralOverlord_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_UmbralOverlord_C");

	return Clss;
}


// BattleEffect_UmbralOverlord_C BattleEffect_UmbralOverlord.Default__BattleEffect_UmbralOverlord_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_UmbralOverlord_C* UBattleEffect_UmbralOverlord_C::GetDefaultObj()
{
	static class UBattleEffect_UmbralOverlord_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_UmbralOverlord_C*>(UBattleEffect_UmbralOverlord_C::StaticClass()->DefaultObject);

	return Default;
}

}


