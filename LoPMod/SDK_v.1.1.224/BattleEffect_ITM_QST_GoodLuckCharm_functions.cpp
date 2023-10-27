#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ITM_QST_GoodLuckCharm.BattleEffect_ITM_QST_GoodLuckCharm_C
// (None)

class UClass* UBattleEffect_ITM_QST_GoodLuckCharm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ITM_QST_GoodLuckCharm_C");

	return Clss;
}


// BattleEffect_ITM_QST_GoodLuckCharm_C BattleEffect_ITM_QST_GoodLuckCharm.Default__BattleEffect_ITM_QST_GoodLuckCharm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ITM_QST_GoodLuckCharm_C* UBattleEffect_ITM_QST_GoodLuckCharm_C::GetDefaultObj()
{
	static class UBattleEffect_ITM_QST_GoodLuckCharm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ITM_QST_GoodLuckCharm_C*>(UBattleEffect_ITM_QST_GoodLuckCharm_C::StaticClass()->DefaultObject);

	return Default;
}

}


