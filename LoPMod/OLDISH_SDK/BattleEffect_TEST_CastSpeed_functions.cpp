#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_TEST_CastSpeed.BattleEffect_TEST_CastSpeed_C
// (None)

class UClass* UBattleEffect_TEST_CastSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_TEST_CastSpeed_C");

	return Clss;
}


// BattleEffect_TEST_CastSpeed_C BattleEffect_TEST_CastSpeed.Default__BattleEffect_TEST_CastSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_TEST_CastSpeed_C* UBattleEffect_TEST_CastSpeed_C::GetDefaultObj()
{
	static class UBattleEffect_TEST_CastSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_TEST_CastSpeed_C*>(UBattleEffect_TEST_CastSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


