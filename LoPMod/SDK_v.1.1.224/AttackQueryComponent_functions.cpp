#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttackQueryComponent.AttackQueryComponent_C
// (None)

class UClass* UAttackQueryComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttackQueryComponent_C");

	return Clss;
}


// AttackQueryComponent_C AttackQueryComponent.Default__AttackQueryComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttackQueryComponent_C* UAttackQueryComponent_C::GetDefaultObj()
{
	static class UAttackQueryComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttackQueryComponent_C*>(UAttackQueryComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


