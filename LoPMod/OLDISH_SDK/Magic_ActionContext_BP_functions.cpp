#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Magic_ActionContext_BP.Magic_ActionContext_BP_C
// (None)

class UClass* UMagic_ActionContext_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Magic_ActionContext_BP_C");

	return Clss;
}


// Magic_ActionContext_BP_C Magic_ActionContext_BP.Default__Magic_ActionContext_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMagic_ActionContext_BP_C* UMagic_ActionContext_BP_C::GetDefaultObj()
{
	static class UMagic_ActionContext_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagic_ActionContext_BP_C*>(UMagic_ActionContext_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


