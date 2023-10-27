#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Parasite_Immortal.GE_Parasite_Immortal_C
// (None)

class UClass* UGE_Parasite_Immortal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Parasite_Immortal_C");

	return Clss;
}


// GE_Parasite_Immortal_C GE_Parasite_Immortal.Default__GE_Parasite_Immortal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Parasite_Immortal_C* UGE_Parasite_Immortal_C::GetDefaultObj()
{
	static class UGE_Parasite_Immortal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Parasite_Immortal_C*>(UGE_Parasite_Immortal_C::StaticClass()->DefaultObject);

	return Default;
}

}


