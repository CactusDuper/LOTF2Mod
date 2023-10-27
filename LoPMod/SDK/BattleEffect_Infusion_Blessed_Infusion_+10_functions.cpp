#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Infusion_Blessed_Infusion_+10.BattleEffect_Infusion_Blessed_Infusion_+10_C
// (None)

class UClass* UBattleEffect_Infusion_Blessed_Infusion_Plus10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Infusion_Blessed_Infusion_+10_C");

	return Clss;
}


// BattleEffect_Infusion_Blessed_Infusion_+10_C BattleEffect_Infusion_Blessed_Infusion_+10.Default__BattleEffect_Infusion_Blessed_Infusion_+10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Infusion_Blessed_Infusion_Plus10_C* UBattleEffect_Infusion_Blessed_Infusion_Plus10_C::GetDefaultObj()
{
	static class UBattleEffect_Infusion_Blessed_Infusion_Plus10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Infusion_Blessed_Infusion_Plus10_C*>(UBattleEffect_Infusion_Blessed_Infusion_Plus10_C::StaticClass()->DefaultObject);

	return Default;
}

}


