#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StaggeredEffect.GE_StaggeredEffect_C
// (None)

class UClass* UGE_StaggeredEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StaggeredEffect_C");

	return Clss;
}


// GE_StaggeredEffect_C GE_StaggeredEffect.Default__GE_StaggeredEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StaggeredEffect_C* UGE_StaggeredEffect_C::GetDefaultObj()
{
	static class UGE_StaggeredEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StaggeredEffect_C*>(UGE_StaggeredEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


