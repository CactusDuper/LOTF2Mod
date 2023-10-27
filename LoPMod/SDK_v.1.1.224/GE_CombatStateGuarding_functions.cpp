#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatStateGuarding.GE_CombatStateGuarding_C
// (None)

class UClass* UGE_CombatStateGuarding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatStateGuarding_C");

	return Clss;
}


// GE_CombatStateGuarding_C GE_CombatStateGuarding.Default__GE_CombatStateGuarding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatStateGuarding_C* UGE_CombatStateGuarding_C::GetDefaultObj()
{
	static class UGE_CombatStateGuarding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatStateGuarding_C*>(UGE_CombatStateGuarding_C::StaticClass()->DefaultObject);

	return Default;
}

}


