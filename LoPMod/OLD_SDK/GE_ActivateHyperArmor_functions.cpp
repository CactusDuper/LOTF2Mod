#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ActivateHyperArmor.GE_ActivateHyperArmor_C
// (None)

class UClass* UGE_ActivateHyperArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ActivateHyperArmor_C");

	return Clss;
}


// GE_ActivateHyperArmor_C GE_ActivateHyperArmor.Default__GE_ActivateHyperArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ActivateHyperArmor_C* UGE_ActivateHyperArmor_C::GetDefaultObj()
{
	static class UGE_ActivateHyperArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ActivateHyperArmor_C*>(UGE_ActivateHyperArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


