#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_002ModifyMaxHealth.BattleEffect_002ModifyMaxHealth_C
// (None)

class UClass* UBattleEffect_002ModifyMaxHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_002ModifyMaxHealth_C");

	return Clss;
}


// BattleEffect_002ModifyMaxHealth_C BattleEffect_002ModifyMaxHealth.Default__BattleEffect_002ModifyMaxHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_002ModifyMaxHealth_C* UBattleEffect_002ModifyMaxHealth_C::GetDefaultObj()
{
	static class UBattleEffect_002ModifyMaxHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_002ModifyMaxHealth_C*>(UBattleEffect_002ModifyMaxHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


