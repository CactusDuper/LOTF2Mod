#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_AMUL_GlassCannon.BattleEffect_AMUL_GlassCannon_C
// (None)

class UClass* UBattleEffect_AMUL_GlassCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_AMUL_GlassCannon_C");

	return Clss;
}


// BattleEffect_AMUL_GlassCannon_C BattleEffect_AMUL_GlassCannon.Default__BattleEffect_AMUL_GlassCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_AMUL_GlassCannon_C* UBattleEffect_AMUL_GlassCannon_C::GetDefaultObj()
{
	static class UBattleEffect_AMUL_GlassCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_AMUL_GlassCannon_C*>(UBattleEffect_AMUL_GlassCannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


