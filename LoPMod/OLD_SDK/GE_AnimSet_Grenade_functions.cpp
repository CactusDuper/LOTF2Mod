#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AnimSet_Grenade.GE_AnimSet_Grenade_C
// (None)

class UClass* UGE_AnimSet_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AnimSet_Grenade_C");

	return Clss;
}


// GE_AnimSet_Grenade_C GE_AnimSet_Grenade.Default__GE_AnimSet_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AnimSet_Grenade_C* UGE_AnimSet_Grenade_C::GetDefaultObj()
{
	static class UGE_AnimSet_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AnimSet_Grenade_C*>(UGE_AnimSet_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


