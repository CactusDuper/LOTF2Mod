#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ModifyPhysicalDamagePercentage.BattleEffect_ModifyPhysicalDamagePercentage_C
// (None)

class UClass* UBattleEffect_ModifyPhysicalDamagePercentage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ModifyPhysicalDamagePercentage_C");

	return Clss;
}


// BattleEffect_ModifyPhysicalDamagePercentage_C BattleEffect_ModifyPhysicalDamagePercentage.Default__BattleEffect_ModifyPhysicalDamagePercentage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ModifyPhysicalDamagePercentage_C* UBattleEffect_ModifyPhysicalDamagePercentage_C::GetDefaultObj()
{
	static class UBattleEffect_ModifyPhysicalDamagePercentage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ModifyPhysicalDamagePercentage_C*>(UBattleEffect_ModifyPhysicalDamagePercentage_C::StaticClass()->DefaultObject);

	return Default;
}

}


