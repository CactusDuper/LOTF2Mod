#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_TestIncreaseDamageDealtTemporarily.BattleEffect_TestIncreaseDamageDealtTemporarily_C
// (None)

class UClass* UBattleEffect_TestIncreaseDamageDealtTemporarily_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_TestIncreaseDamageDealtTemporarily_C");

	return Clss;
}


// BattleEffect_TestIncreaseDamageDealtTemporarily_C BattleEffect_TestIncreaseDamageDealtTemporarily.Default__BattleEffect_TestIncreaseDamageDealtTemporarily_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_TestIncreaseDamageDealtTemporarily_C* UBattleEffect_TestIncreaseDamageDealtTemporarily_C::GetDefaultObj()
{
	static class UBattleEffect_TestIncreaseDamageDealtTemporarily_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_TestIncreaseDamageDealtTemporarily_C*>(UBattleEffect_TestIncreaseDamageDealtTemporarily_C::StaticClass()->DefaultObject);

	return Default;
}

}


