#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ReloadCrossbowOnDodge.BattleEffect_ReloadCrossbowOnDodge_C
// (None)

class UClass* UBattleEffect_ReloadCrossbowOnDodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ReloadCrossbowOnDodge_C");

	return Clss;
}


// BattleEffect_ReloadCrossbowOnDodge_C BattleEffect_ReloadCrossbowOnDodge.Default__BattleEffect_ReloadCrossbowOnDodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ReloadCrossbowOnDodge_C* UBattleEffect_ReloadCrossbowOnDodge_C::GetDefaultObj()
{
	static class UBattleEffect_ReloadCrossbowOnDodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ReloadCrossbowOnDodge_C*>(UBattleEffect_ReloadCrossbowOnDodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


