#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BackStab_AttackActivationSet.BP_BackStab_AttackActivationSet_C
// (None)

class UClass* UBP_BackStab_AttackActivationSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BackStab_AttackActivationSet_C");

	return Clss;
}


// BP_BackStab_AttackActivationSet_C BP_BackStab_AttackActivationSet.Default__BP_BackStab_AttackActivationSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BackStab_AttackActivationSet_C* UBP_BackStab_AttackActivationSet_C::GetDefaultObj()
{
	static class UBP_BackStab_AttackActivationSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BackStab_AttackActivationSet_C*>(UBP_BackStab_AttackActivationSet_C::StaticClass()->DefaultObject);

	return Default;
}

}


