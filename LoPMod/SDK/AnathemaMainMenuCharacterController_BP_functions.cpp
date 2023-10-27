#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaMainMenuCharacterController_BP.AnathemaMainMenuCharacterController_BP_C
// (Actor, PlayerController)

class UClass* AAnathemaMainMenuCharacterController_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaMainMenuCharacterController_BP_C");

	return Clss;
}


// AnathemaMainMenuCharacterController_BP_C AnathemaMainMenuCharacterController_BP.Default__AnathemaMainMenuCharacterController_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaMainMenuCharacterController_BP_C* AAnathemaMainMenuCharacterController_BP_C::GetDefaultObj()
{
	static class AAnathemaMainMenuCharacterController_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaMainMenuCharacterController_BP_C*>(AAnathemaMainMenuCharacterController_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


