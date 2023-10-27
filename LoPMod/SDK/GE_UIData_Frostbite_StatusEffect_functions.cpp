#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_UIData_Frostbite_StatusEffect.GE_UIData_Frostbite_StatusEffect_C
// (None)

class UClass* UGE_UIData_Frostbite_StatusEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_UIData_Frostbite_StatusEffect_C");

	return Clss;
}


// GE_UIData_Frostbite_StatusEffect_C GE_UIData_Frostbite_StatusEffect.Default__GE_UIData_Frostbite_StatusEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_UIData_Frostbite_StatusEffect_C* UGE_UIData_Frostbite_StatusEffect_C::GetDefaultObj()
{
	static class UGE_UIData_Frostbite_StatusEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_UIData_Frostbite_StatusEffect_C*>(UGE_UIData_Frostbite_StatusEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


