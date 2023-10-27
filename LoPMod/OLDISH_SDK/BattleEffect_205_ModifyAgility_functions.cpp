#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_205_ModifyAgility.BattleEffect_205_ModifyAgility_C
// (None)

class UClass* UBattleEffect_205_ModifyAgility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_205_ModifyAgility_C");

	return Clss;
}


// BattleEffect_205_ModifyAgility_C BattleEffect_205_ModifyAgility.Default__BattleEffect_205_ModifyAgility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_205_ModifyAgility_C* UBattleEffect_205_ModifyAgility_C::GetDefaultObj()
{
	static class UBattleEffect_205_ModifyAgility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_205_ModifyAgility_C*>(UBattleEffect_205_ModifyAgility_C::StaticClass()->DefaultObject);

	return Default;
}

}


