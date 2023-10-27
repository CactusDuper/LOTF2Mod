#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Effect_ModifyGlobalDamageDealt.BattleEffect_Effect_ModifyGlobalDamageDealt_C
// (None)

class UClass* UBattleEffect_Effect_ModifyGlobalDamageDealt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Effect_ModifyGlobalDamageDealt_C");

	return Clss;
}


// BattleEffect_Effect_ModifyGlobalDamageDealt_C BattleEffect_Effect_ModifyGlobalDamageDealt.Default__BattleEffect_Effect_ModifyGlobalDamageDealt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Effect_ModifyGlobalDamageDealt_C* UBattleEffect_Effect_ModifyGlobalDamageDealt_C::GetDefaultObj()
{
	static class UBattleEffect_Effect_ModifyGlobalDamageDealt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Effect_ModifyGlobalDamageDealt_C*>(UBattleEffect_Effect_ModifyGlobalDamageDealt_C::StaticClass()->DefaultObject);

	return Default;
}

}


