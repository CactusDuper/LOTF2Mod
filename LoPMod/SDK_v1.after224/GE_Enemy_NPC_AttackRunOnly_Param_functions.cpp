#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Enemy_NPC_AttackRunOnly_Param.GE_Enemy_NPC_AttackRunOnly_Param_C
// (None)

class UClass* UGE_Enemy_NPC_AttackRunOnly_Param_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Enemy_NPC_AttackRunOnly_Param_C");

	return Clss;
}


// GE_Enemy_NPC_AttackRunOnly_Param_C GE_Enemy_NPC_AttackRunOnly_Param.Default__GE_Enemy_NPC_AttackRunOnly_Param_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Enemy_NPC_AttackRunOnly_Param_C* UGE_Enemy_NPC_AttackRunOnly_Param_C::GetDefaultObj()
{
	static class UGE_Enemy_NPC_AttackRunOnly_Param_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Enemy_NPC_AttackRunOnly_Param_C*>(UGE_Enemy_NPC_AttackRunOnly_Param_C::StaticClass()->DefaultObject);

	return Default;
}

}


