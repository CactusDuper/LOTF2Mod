#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_115_ModifyStatusIgniteAbsortion.BattleEffect_115_ModifyStatusIgniteAbsortion_C
// (None)

class UClass* UBattleEffect_115_ModifyStatusIgniteAbsortion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_115_ModifyStatusIgniteAbsortion_C");

	return Clss;
}


// BattleEffect_115_ModifyStatusIgniteAbsortion_C BattleEffect_115_ModifyStatusIgniteAbsortion.Default__BattleEffect_115_ModifyStatusIgniteAbsortion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_115_ModifyStatusIgniteAbsortion_C* UBattleEffect_115_ModifyStatusIgniteAbsortion_C::GetDefaultObj()
{
	static class UBattleEffect_115_ModifyStatusIgniteAbsortion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_115_ModifyStatusIgniteAbsortion_C*>(UBattleEffect_115_ModifyStatusIgniteAbsortion_C::StaticClass()->DefaultObject);

	return Default;
}

}


