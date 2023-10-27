#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StaggeredSoulFlayEffect.GE_StaggeredSoulFlayEffect_C
// (None)

class UClass* UGE_StaggeredSoulFlayEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StaggeredSoulFlayEffect_C");

	return Clss;
}


// GE_StaggeredSoulFlayEffect_C GE_StaggeredSoulFlayEffect.Default__GE_StaggeredSoulFlayEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StaggeredSoulFlayEffect_C* UGE_StaggeredSoulFlayEffect_C::GetDefaultObj()
{
	static class UGE_StaggeredSoulFlayEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StaggeredSoulFlayEffect_C*>(UGE_StaggeredSoulFlayEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


