#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StaggerInmunity.GE_StaggerInmunity_C
// (None)

class UClass* UGE_StaggerInmunity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StaggerInmunity_C");

	return Clss;
}


// GE_StaggerInmunity_C GE_StaggerInmunity.Default__GE_StaggerInmunity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StaggerInmunity_C* UGE_StaggerInmunity_C::GetDefaultObj()
{
	static class UGE_StaggerInmunity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StaggerInmunity_C*>(UGE_StaggerInmunity_C::StaticClass()->DefaultObject);

	return Default;
}

}


