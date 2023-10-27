#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ClimbingLadder_ActionContext_BP.ClimbingLadder_ActionContext_BP_C
// (None)

class UClass* UClimbingLadder_ActionContext_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClimbingLadder_ActionContext_BP_C");

	return Clss;
}


// ClimbingLadder_ActionContext_BP_C ClimbingLadder_ActionContext_BP.Default__ClimbingLadder_ActionContext_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UClimbingLadder_ActionContext_BP_C* UClimbingLadder_ActionContext_BP_C::GetDefaultObj()
{
	static class UClimbingLadder_ActionContext_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UClimbingLadder_ActionContext_BP_C*>(UClimbingLadder_ActionContext_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


