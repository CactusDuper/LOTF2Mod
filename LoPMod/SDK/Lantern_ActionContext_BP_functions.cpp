#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Lantern_ActionContext_BP.Lantern_ActionContext_BP_C
// (None)

class UClass* ULantern_ActionContext_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lantern_ActionContext_BP_C");

	return Clss;
}


// Lantern_ActionContext_BP_C Lantern_ActionContext_BP.Default__Lantern_ActionContext_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULantern_ActionContext_BP_C* ULantern_ActionContext_BP_C::GetDefaultObj()
{
	static class ULantern_ActionContext_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULantern_ActionContext_BP_C*>(ULantern_ActionContext_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


