#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_Summon_RhogarHound_AI.DA_Summon_RhogarHound_AI_C
// (None)

class UClass* UDA_Summon_RhogarHound_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_Summon_RhogarHound_AI_C");

	return Clss;
}


// DA_Summon_RhogarHound_AI_C DA_Summon_RhogarHound_AI.Default__DA_Summon_RhogarHound_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_Summon_RhogarHound_AI_C* UDA_Summon_RhogarHound_AI_C::GetDefaultObj()
{
	static class UDA_Summon_RhogarHound_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_Summon_RhogarHound_AI_C*>(UDA_Summon_RhogarHound_AI_C::StaticClass()->DefaultObject);

	return Default;
}

}


