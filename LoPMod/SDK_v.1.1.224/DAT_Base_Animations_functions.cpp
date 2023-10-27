#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_Base_Animations.DAT_Base_Animations_C
// (None)

class UClass* UDAT_Base_Animations_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_Base_Animations_C");

	return Clss;
}


// DAT_Base_Animations_C DAT_Base_Animations.Default__DAT_Base_Animations_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_Base_Animations_C* UDAT_Base_Animations_C::GetDefaultObj()
{
	static class UDAT_Base_Animations_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_Base_Animations_C*>(UDAT_Base_Animations_C::StaticClass()->DefaultObject);

	return Default;
}

}


