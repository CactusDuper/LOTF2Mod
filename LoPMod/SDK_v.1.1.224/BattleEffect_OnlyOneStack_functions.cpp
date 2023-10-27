#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_OnlyOneStack.BattleEffect_OnlyOneStack_C
// (None)

class UClass* UBattleEffect_OnlyOneStack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_OnlyOneStack_C");

	return Clss;
}


// BattleEffect_OnlyOneStack_C BattleEffect_OnlyOneStack.Default__BattleEffect_OnlyOneStack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_OnlyOneStack_C* UBattleEffect_OnlyOneStack_C::GetDefaultObj()
{
	static class UBattleEffect_OnlyOneStack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_OnlyOneStack_C*>(UBattleEffect_OnlyOneStack_C::StaticClass()->DefaultObject);

	return Default;
}

}


