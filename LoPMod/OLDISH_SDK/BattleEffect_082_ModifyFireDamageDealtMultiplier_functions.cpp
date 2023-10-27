#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_082_ModifyFireDamageDealtMultiplier.BattleEffect_082_ModifyFireDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_082_ModifyFireDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_082_ModifyFireDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_082_ModifyFireDamageDealtMultiplier_C BattleEffect_082_ModifyFireDamageDealtMultiplier.Default__BattleEffect_082_ModifyFireDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_082_ModifyFireDamageDealtMultiplier_C* UBattleEffect_082_ModifyFireDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_082_ModifyFireDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_082_ModifyFireDamageDealtMultiplier_C*>(UBattleEffect_082_ModifyFireDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


