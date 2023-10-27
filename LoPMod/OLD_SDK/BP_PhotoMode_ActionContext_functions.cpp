#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhotoMode_ActionContext.BP_PhotoMode_ActionContext_C
// (None)

class UClass* UBP_PhotoMode_ActionContext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhotoMode_ActionContext_C");

	return Clss;
}


// BP_PhotoMode_ActionContext_C BP_PhotoMode_ActionContext.Default__BP_PhotoMode_ActionContext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PhotoMode_ActionContext_C* UBP_PhotoMode_ActionContext_C::GetDefaultObj()
{
	static class UBP_PhotoMode_ActionContext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PhotoMode_ActionContext_C*>(UBP_PhotoMode_ActionContext_C::StaticClass()->DefaultObject);

	return Default;
}

}


