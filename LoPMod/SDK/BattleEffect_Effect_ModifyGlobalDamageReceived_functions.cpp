#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Effect_ModifyGlobalDamageReceived.BattleEffect_Effect_ModifyGlobalDamageReceived_C
// (None)

class UClass* UBattleEffect_Effect_ModifyGlobalDamageReceived_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Effect_ModifyGlobalDamageReceived_C");

	return Clss;
}


// BattleEffect_Effect_ModifyGlobalDamageReceived_C BattleEffect_Effect_ModifyGlobalDamageReceived.Default__BattleEffect_Effect_ModifyGlobalDamageReceived_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Effect_ModifyGlobalDamageReceived_C* UBattleEffect_Effect_ModifyGlobalDamageReceived_C::GetDefaultObj()
{
	static class UBattleEffect_Effect_ModifyGlobalDamageReceived_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Effect_ModifyGlobalDamageReceived_C*>(UBattleEffect_Effect_ModifyGlobalDamageReceived_C::StaticClass()->DefaultObject);

	return Default;
}

}


