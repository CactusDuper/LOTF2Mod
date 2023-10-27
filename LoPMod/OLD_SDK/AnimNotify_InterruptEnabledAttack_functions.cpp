#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_InterruptEnabledAttack.AnimNotify_InterruptEnabledAttack_C
// (None)

class UClass* UAnimNotify_InterruptEnabledAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_InterruptEnabledAttack_C");

	return Clss;
}


// AnimNotify_InterruptEnabledAttack_C AnimNotify_InterruptEnabledAttack.Default__AnimNotify_InterruptEnabledAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_InterruptEnabledAttack_C* UAnimNotify_InterruptEnabledAttack_C::GetDefaultObj()
{
	static class UAnimNotify_InterruptEnabledAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_InterruptEnabledAttack_C*>(UAnimNotify_InterruptEnabledAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


