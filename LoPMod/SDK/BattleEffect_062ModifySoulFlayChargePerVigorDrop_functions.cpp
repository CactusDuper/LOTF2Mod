#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_062ModifySoulFlayChargePerVigorDrop.BattleEffect_062ModifySoulFlayChargePerVigorDrop_C
// (None)

class UClass* UBattleEffect_062ModifySoulFlayChargePerVigorDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_062ModifySoulFlayChargePerVigorDrop_C");

	return Clss;
}


// BattleEffect_062ModifySoulFlayChargePerVigorDrop_C BattleEffect_062ModifySoulFlayChargePerVigorDrop.Default__BattleEffect_062ModifySoulFlayChargePerVigorDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_062ModifySoulFlayChargePerVigorDrop_C* UBattleEffect_062ModifySoulFlayChargePerVigorDrop_C::GetDefaultObj()
{
	static class UBattleEffect_062ModifySoulFlayChargePerVigorDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_062ModifySoulFlayChargePerVigorDrop_C*>(UBattleEffect_062ModifySoulFlayChargePerVigorDrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


