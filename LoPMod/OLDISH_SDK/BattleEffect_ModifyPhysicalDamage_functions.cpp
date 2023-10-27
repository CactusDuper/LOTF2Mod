#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ModifyPhysicalDamage.BattleEffect_ModifyPhysicalDamage_C
// (None)

class UClass* UBattleEffect_ModifyPhysicalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ModifyPhysicalDamage_C");

	return Clss;
}


// BattleEffect_ModifyPhysicalDamage_C BattleEffect_ModifyPhysicalDamage.Default__BattleEffect_ModifyPhysicalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ModifyPhysicalDamage_C* UBattleEffect_ModifyPhysicalDamage_C::GetDefaultObj()
{
	static class UBattleEffect_ModifyPhysicalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ModifyPhysicalDamage_C*>(UBattleEffect_ModifyPhysicalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


