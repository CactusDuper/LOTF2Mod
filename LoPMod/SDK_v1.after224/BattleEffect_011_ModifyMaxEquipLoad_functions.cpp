#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_011_ModifyMaxEquipLoad.BattleEffect_011_ModifyMaxEquipLoad_C
// (None)

class UClass* UBattleEffect_011_ModifyMaxEquipLoad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_011_ModifyMaxEquipLoad_C");

	return Clss;
}


// BattleEffect_011_ModifyMaxEquipLoad_C BattleEffect_011_ModifyMaxEquipLoad.Default__BattleEffect_011_ModifyMaxEquipLoad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_011_ModifyMaxEquipLoad_C* UBattleEffect_011_ModifyMaxEquipLoad_C::GetDefaultObj()
{
	static class UBattleEffect_011_ModifyMaxEquipLoad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_011_ModifyMaxEquipLoad_C*>(UBattleEffect_011_ModifyMaxEquipLoad_C::StaticClass()->DefaultObject);

	return Default;
}

}


