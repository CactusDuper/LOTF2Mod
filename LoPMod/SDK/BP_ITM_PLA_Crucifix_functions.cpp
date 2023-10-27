#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ITM_PLA_Crucifix.BP_ITM_PLA_Crucifix_C
// (Actor)

class UClass* ABP_ITM_PLA_Crucifix_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ITM_PLA_Crucifix_C");

	return Clss;
}


// BP_ITM_PLA_Crucifix_C BP_ITM_PLA_Crucifix.Default__BP_ITM_PLA_Crucifix_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ITM_PLA_Crucifix_C* ABP_ITM_PLA_Crucifix_C::GetDefaultObj()
{
	static class ABP_ITM_PLA_Crucifix_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ITM_PLA_Crucifix_C*>(ABP_ITM_PLA_Crucifix_C::StaticClass()->DefaultObject);

	return Default;
}

}


