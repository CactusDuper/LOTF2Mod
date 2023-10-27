#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Item_GoldPineResin.BattleEffect_Item_GoldPineResin_C
// (None)

class UClass* UBattleEffect_Item_GoldPineResin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Item_GoldPineResin_C");

	return Clss;
}


// BattleEffect_Item_GoldPineResin_C BattleEffect_Item_GoldPineResin.Default__BattleEffect_Item_GoldPineResin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Item_GoldPineResin_C* UBattleEffect_Item_GoldPineResin_C::GetDefaultObj()
{
	static class UBattleEffect_Item_GoldPineResin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Item_GoldPineResin_C*>(UBattleEffect_Item_GoldPineResin_C::StaticClass()->DefaultObject);

	return Default;
}

}


