#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Enemy_AutoHyperArmor_Cooldown.GE_Enemy_AutoHyperArmor_Cooldown_C
// (None)

class UClass* UGE_Enemy_AutoHyperArmor_Cooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Enemy_AutoHyperArmor_Cooldown_C");

	return Clss;
}


// GE_Enemy_AutoHyperArmor_Cooldown_C GE_Enemy_AutoHyperArmor_Cooldown.Default__GE_Enemy_AutoHyperArmor_Cooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Enemy_AutoHyperArmor_Cooldown_C* UGE_Enemy_AutoHyperArmor_Cooldown_C::GetDefaultObj()
{
	static class UGE_Enemy_AutoHyperArmor_Cooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Enemy_AutoHyperArmor_Cooldown_C*>(UGE_Enemy_AutoHyperArmor_Cooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


