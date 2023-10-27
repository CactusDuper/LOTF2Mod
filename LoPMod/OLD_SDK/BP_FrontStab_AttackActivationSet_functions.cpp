#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontStab_AttackActivationSet.BP_FrontStab_AttackActivationSet_C
// (None)

class UClass* UBP_FrontStab_AttackActivationSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontStab_AttackActivationSet_C");

	return Clss;
}


// BP_FrontStab_AttackActivationSet_C BP_FrontStab_AttackActivationSet.Default__BP_FrontStab_AttackActivationSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontStab_AttackActivationSet_C* UBP_FrontStab_AttackActivationSet_C::GetDefaultObj()
{
	static class UBP_FrontStab_AttackActivationSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontStab_AttackActivationSet_C*>(UBP_FrontStab_AttackActivationSet_C::StaticClass()->DefaultObject);

	return Default;
}

}


