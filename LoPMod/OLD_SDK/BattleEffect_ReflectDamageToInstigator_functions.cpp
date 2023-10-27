#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ReflectDamageToInstigator.BattleEffect_ReflectDamageToInstigator_C
// (None)

class UClass* UBattleEffect_ReflectDamageToInstigator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ReflectDamageToInstigator_C");

	return Clss;
}


// BattleEffect_ReflectDamageToInstigator_C BattleEffect_ReflectDamageToInstigator.Default__BattleEffect_ReflectDamageToInstigator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ReflectDamageToInstigator_C* UBattleEffect_ReflectDamageToInstigator_C::GetDefaultObj()
{
	static class UBattleEffect_ReflectDamageToInstigator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ReflectDamageToInstigator_C*>(UBattleEffect_ReflectDamageToInstigator_C::StaticClass()->DefaultObject);

	return Default;
}

}


