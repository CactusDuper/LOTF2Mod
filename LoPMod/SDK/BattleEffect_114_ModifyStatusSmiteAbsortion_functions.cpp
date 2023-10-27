#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_114_ModifyStatusSmiteAbsortion.BattleEffect_114_ModifyStatusSmiteAbsortion_C
// (None)

class UClass* UBattleEffect_114_ModifyStatusSmiteAbsortion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_114_ModifyStatusSmiteAbsortion_C");

	return Clss;
}


// BattleEffect_114_ModifyStatusSmiteAbsortion_C BattleEffect_114_ModifyStatusSmiteAbsortion.Default__BattleEffect_114_ModifyStatusSmiteAbsortion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_114_ModifyStatusSmiteAbsortion_C* UBattleEffect_114_ModifyStatusSmiteAbsortion_C::GetDefaultObj()
{
	static class UBattleEffect_114_ModifyStatusSmiteAbsortion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_114_ModifyStatusSmiteAbsortion_C*>(UBattleEffect_114_ModifyStatusSmiteAbsortion_C::StaticClass()->DefaultObject);

	return Default;
}

}


