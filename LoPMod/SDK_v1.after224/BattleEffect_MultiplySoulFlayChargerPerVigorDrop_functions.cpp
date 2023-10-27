#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_MultiplySoulFlayChargerPerVigorDrop.BattleEffect_MultiplySoulFlayChargerPerVigorDrop_C
// (None)

class UClass* UBattleEffect_MultiplySoulFlayChargerPerVigorDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_MultiplySoulFlayChargerPerVigorDrop_C");

	return Clss;
}


// BattleEffect_MultiplySoulFlayChargerPerVigorDrop_C BattleEffect_MultiplySoulFlayChargerPerVigorDrop.Default__BattleEffect_MultiplySoulFlayChargerPerVigorDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_MultiplySoulFlayChargerPerVigorDrop_C* UBattleEffect_MultiplySoulFlayChargerPerVigorDrop_C::GetDefaultObj()
{
	static class UBattleEffect_MultiplySoulFlayChargerPerVigorDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_MultiplySoulFlayChargerPerVigorDrop_C*>(UBattleEffect_MultiplySoulFlayChargerPerVigorDrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


