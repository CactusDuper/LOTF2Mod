#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ImmuneToHealthDamageAfterResurrecting.BattleEffect_ImmuneToHealthDamageAfterResurrecting_C
// (None)

class UClass* UBattleEffect_ImmuneToHealthDamageAfterResurrecting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ImmuneToHealthDamageAfterResurrecting_C");

	return Clss;
}


// BattleEffect_ImmuneToHealthDamageAfterResurrecting_C BattleEffect_ImmuneToHealthDamageAfterResurrecting.Default__BattleEffect_ImmuneToHealthDamageAfterResurrecting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ImmuneToHealthDamageAfterResurrecting_C* UBattleEffect_ImmuneToHealthDamageAfterResurrecting_C::GetDefaultObj()
{
	static class UBattleEffect_ImmuneToHealthDamageAfterResurrecting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ImmuneToHealthDamageAfterResurrecting_C*>(UBattleEffect_ImmuneToHealthDamageAfterResurrecting_C::StaticClass()->DefaultObject);

	return Default;
}

}


