#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_206_ModifyChaos.BattleEffect_206_ModifyChaos_C
// (None)

class UClass* UBattleEffect_206_ModifyChaos_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_206_ModifyChaos_C");

	return Clss;
}


// BattleEffect_206_ModifyChaos_C BattleEffect_206_ModifyChaos.Default__BattleEffect_206_ModifyChaos_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_206_ModifyChaos_C* UBattleEffect_206_ModifyChaos_C::GetDefaultObj()
{
	static class UBattleEffect_206_ModifyChaos_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_206_ModifyChaos_C*>(UBattleEffect_206_ModifyChaos_C::StaticClass()->DefaultObject);

	return Default;
}

}


