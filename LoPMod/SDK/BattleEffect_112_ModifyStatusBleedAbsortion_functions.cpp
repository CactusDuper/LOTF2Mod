#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_112_ModifyStatusBleedAbsortion.BattleEffect_112_ModifyStatusBleedAbsortion_C
// (None)

class UClass* UBattleEffect_112_ModifyStatusBleedAbsortion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_112_ModifyStatusBleedAbsortion_C");

	return Clss;
}


// BattleEffect_112_ModifyStatusBleedAbsortion_C BattleEffect_112_ModifyStatusBleedAbsortion.Default__BattleEffect_112_ModifyStatusBleedAbsortion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_112_ModifyStatusBleedAbsortion_C* UBattleEffect_112_ModifyStatusBleedAbsortion_C::GetDefaultObj()
{
	static class UBattleEffect_112_ModifyStatusBleedAbsortion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_112_ModifyStatusBleedAbsortion_C*>(UBattleEffect_112_ModifyStatusBleedAbsortion_C::StaticClass()->DefaultObject);

	return Default;
}

}


