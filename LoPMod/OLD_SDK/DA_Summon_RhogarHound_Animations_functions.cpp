#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_Summon_RhogarHound_Animations.DA_Summon_RhogarHound_Animations_C
// (None)

class UClass* UDA_Summon_RhogarHound_Animations_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_Summon_RhogarHound_Animations_C");

	return Clss;
}


// DA_Summon_RhogarHound_Animations_C DA_Summon_RhogarHound_Animations.Default__DA_Summon_RhogarHound_Animations_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_Summon_RhogarHound_Animations_C* UDA_Summon_RhogarHound_Animations_C::GetDefaultObj()
{
	static class UDA_Summon_RhogarHound_Animations_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_Summon_RhogarHound_Animations_C*>(UDA_Summon_RhogarHound_Animations_C::StaticClass()->DefaultObject);

	return Default;
}

}


