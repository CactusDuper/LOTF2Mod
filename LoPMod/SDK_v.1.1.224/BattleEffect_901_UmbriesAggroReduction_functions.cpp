#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_901_UmbriesAggroReduction.BattleEffect_901_UmbriesAggroReduction_C
// (None)

class UClass* UBattleEffect_901_UmbriesAggroReduction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_901_UmbriesAggroReduction_C");

	return Clss;
}


// BattleEffect_901_UmbriesAggroReduction_C BattleEffect_901_UmbriesAggroReduction.Default__BattleEffect_901_UmbriesAggroReduction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_901_UmbriesAggroReduction_C* UBattleEffect_901_UmbriesAggroReduction_C::GetDefaultObj()
{
	static class UBattleEffect_901_UmbriesAggroReduction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_901_UmbriesAggroReduction_C*>(UBattleEffect_901_UmbriesAggroReduction_C::StaticClass()->DefaultObject);

	return Default;
}

}


