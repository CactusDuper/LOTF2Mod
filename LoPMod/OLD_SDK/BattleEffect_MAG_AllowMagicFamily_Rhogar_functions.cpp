#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_MAG_AllowMagicFamily_Rhogar.BattleEffect_MAG_AllowMagicFamily_Rhogar_C
// (None)

class UClass* UBattleEffect_MAG_AllowMagicFamily_Rhogar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_MAG_AllowMagicFamily_Rhogar_C");

	return Clss;
}


// BattleEffect_MAG_AllowMagicFamily_Rhogar_C BattleEffect_MAG_AllowMagicFamily_Rhogar.Default__BattleEffect_MAG_AllowMagicFamily_Rhogar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_MAG_AllowMagicFamily_Rhogar_C* UBattleEffect_MAG_AllowMagicFamily_Rhogar_C::GetDefaultObj()
{
	static class UBattleEffect_MAG_AllowMagicFamily_Rhogar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_MAG_AllowMagicFamily_Rhogar_C*>(UBattleEffect_MAG_AllowMagicFamily_Rhogar_C::StaticClass()->DefaultObject);

	return Default;
}

}


