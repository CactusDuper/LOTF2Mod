#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Cinematic_TotalImmunity.GE_Cinematic_TotalImmunity_C
// (None)

class UClass* UGE_Cinematic_TotalImmunity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Cinematic_TotalImmunity_C");

	return Clss;
}


// GE_Cinematic_TotalImmunity_C GE_Cinematic_TotalImmunity.Default__GE_Cinematic_TotalImmunity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Cinematic_TotalImmunity_C* UGE_Cinematic_TotalImmunity_C::GetDefaultObj()
{
	static class UGE_Cinematic_TotalImmunity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Cinematic_TotalImmunity_C*>(UGE_Cinematic_TotalImmunity_C::StaticClass()->DefaultObject);

	return Default;
}

}


