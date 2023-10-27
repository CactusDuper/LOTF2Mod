#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ExtraAmmoForCompanions.BattleEffect_ExtraAmmoForCompanions_C
// (None)

class UClass* UBattleEffect_ExtraAmmoForCompanions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ExtraAmmoForCompanions_C");

	return Clss;
}


// BattleEffect_ExtraAmmoForCompanions_C BattleEffect_ExtraAmmoForCompanions.Default__BattleEffect_ExtraAmmoForCompanions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ExtraAmmoForCompanions_C* UBattleEffect_ExtraAmmoForCompanions_C::GetDefaultObj()
{
	static class UBattleEffect_ExtraAmmoForCompanions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ExtraAmmoForCompanions_C*>(UBattleEffect_ExtraAmmoForCompanions_C::StaticClass()->DefaultObject);

	return Default;
}

}


