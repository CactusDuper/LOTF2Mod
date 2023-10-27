#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Aggro_Targeted.GE_Aggro_Targeted_C
// (None)

class UClass* UGE_Aggro_Targeted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Aggro_Targeted_C");

	return Clss;
}


// GE_Aggro_Targeted_C GE_Aggro_Targeted.Default__GE_Aggro_Targeted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Aggro_Targeted_C* UGE_Aggro_Targeted_C::GetDefaultObj()
{
	static class UGE_Aggro_Targeted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Aggro_Targeted_C*>(UGE_Aggro_Targeted_C::StaticClass()->DefaultObject);

	return Default;
}

}


