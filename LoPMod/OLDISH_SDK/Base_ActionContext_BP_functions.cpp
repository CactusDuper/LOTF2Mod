#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Base_ActionContext_BP.Base_ActionContext_BP_C
// (None)

class UClass* UBase_ActionContext_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Base_ActionContext_BP_C");

	return Clss;
}


// Base_ActionContext_BP_C Base_ActionContext_BP.Default__Base_ActionContext_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBase_ActionContext_BP_C* UBase_ActionContext_BP_C::GetDefaultObj()
{
	static class UBase_ActionContext_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBase_ActionContext_BP_C*>(UBase_ActionContext_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


