#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_601_CureAllStatus.BattleEffect_601_CureAllStatus_C
// (None)

class UClass* UBattleEffect_601_CureAllStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_601_CureAllStatus_C");

	return Clss;
}


// BattleEffect_601_CureAllStatus_C BattleEffect_601_CureAllStatus.Default__BattleEffect_601_CureAllStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_601_CureAllStatus_C* UBattleEffect_601_CureAllStatus_C::GetDefaultObj()
{
	static class UBattleEffect_601_CureAllStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_601_CureAllStatus_C*>(UBattleEffect_601_CureAllStatus_C::StaticClass()->DefaultObject);

	return Default;
}

}


