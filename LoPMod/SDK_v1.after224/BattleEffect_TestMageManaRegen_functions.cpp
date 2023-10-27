#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_TestMageManaRegen.BattleEffect_TestMageManaRegen_C
// (None)

class UClass* UBattleEffect_TestMageManaRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_TestMageManaRegen_C");

	return Clss;
}


// BattleEffect_TestMageManaRegen_C BattleEffect_TestMageManaRegen.Default__BattleEffect_TestMageManaRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_TestMageManaRegen_C* UBattleEffect_TestMageManaRegen_C::GetDefaultObj()
{
	static class UBattleEffect_TestMageManaRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_TestMageManaRegen_C*>(UBattleEffect_TestMageManaRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


