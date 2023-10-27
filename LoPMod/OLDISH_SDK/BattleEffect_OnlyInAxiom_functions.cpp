#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_OnlyInAxiom.BattleEffect_OnlyInAxiom_C
// (None)

class UClass* UBattleEffect_OnlyInAxiom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_OnlyInAxiom_C");

	return Clss;
}


// BattleEffect_OnlyInAxiom_C BattleEffect_OnlyInAxiom.Default__BattleEffect_OnlyInAxiom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_OnlyInAxiom_C* UBattleEffect_OnlyInAxiom_C::GetDefaultObj()
{
	static class UBattleEffect_OnlyInAxiom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_OnlyInAxiom_C*>(UBattleEffect_OnlyInAxiom_C::StaticClass()->DefaultObject);

	return Default;
}

}


