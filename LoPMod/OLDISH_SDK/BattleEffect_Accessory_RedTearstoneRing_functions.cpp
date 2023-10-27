#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Accessory_RedTearstoneRing.BattleEffect_Accessory_RedTearstoneRing_C
// (None)

class UClass* UBattleEffect_Accessory_RedTearstoneRing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Accessory_RedTearstoneRing_C");

	return Clss;
}


// BattleEffect_Accessory_RedTearstoneRing_C BattleEffect_Accessory_RedTearstoneRing.Default__BattleEffect_Accessory_RedTearstoneRing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Accessory_RedTearstoneRing_C* UBattleEffect_Accessory_RedTearstoneRing_C::GetDefaultObj()
{
	static class UBattleEffect_Accessory_RedTearstoneRing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Accessory_RedTearstoneRing_C*>(UBattleEffect_Accessory_RedTearstoneRing_C::StaticClass()->DefaultObject);

	return Default;
}

}


