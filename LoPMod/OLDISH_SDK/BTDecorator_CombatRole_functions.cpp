#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_CombatRole.BTDecorator_CombatRole_C
// (None)

class UClass* UBTDecorator_CombatRole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_CombatRole_C");

	return Clss;
}


// BTDecorator_CombatRole_C BTDecorator_CombatRole.Default__BTDecorator_CombatRole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_CombatRole_C* UBTDecorator_CombatRole_C::GetDefaultObj()
{
	static class UBTDecorator_CombatRole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_CombatRole_C*>(UBTDecorator_CombatRole_C::StaticClass()->DefaultObject);

	return Default;
}

}


