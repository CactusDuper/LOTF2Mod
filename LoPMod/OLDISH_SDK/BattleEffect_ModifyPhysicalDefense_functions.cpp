#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ModifyPhysicalDefense.BattleEffect_ModifyPhysicalDefense_C
// (None)

class UClass* UBattleEffect_ModifyPhysicalDefense_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ModifyPhysicalDefense_C");

	return Clss;
}


// BattleEffect_ModifyPhysicalDefense_C BattleEffect_ModifyPhysicalDefense.Default__BattleEffect_ModifyPhysicalDefense_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ModifyPhysicalDefense_C* UBattleEffect_ModifyPhysicalDefense_C::GetDefaultObj()
{
	static class UBattleEffect_ModifyPhysicalDefense_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ModifyPhysicalDefense_C*>(UBattleEffect_ModifyPhysicalDefense_C::StaticClass()->DefaultObject);

	return Default;
}

}


