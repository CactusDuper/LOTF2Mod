#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FreeFly_ActionContext_BP.FreeFly_ActionContext_BP_C
// (None)

class UClass* UFreeFly_ActionContext_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FreeFly_ActionContext_BP_C");

	return Clss;
}


// FreeFly_ActionContext_BP_C FreeFly_ActionContext_BP.Default__FreeFly_ActionContext_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFreeFly_ActionContext_BP_C* UFreeFly_ActionContext_BP_C::GetDefaultObj()
{
	static class UFreeFly_ActionContext_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFreeFly_ActionContext_BP_C*>(UFreeFly_ActionContext_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


