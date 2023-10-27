#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RhogarHound_FireEffect_Audio.GE_RhogarHound_FireEffect_Audio_C
// (None)

class UClass* UGE_RhogarHound_FireEffect_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RhogarHound_FireEffect_Audio_C");

	return Clss;
}


// GE_RhogarHound_FireEffect_Audio_C GE_RhogarHound_FireEffect_Audio.Default__GE_RhogarHound_FireEffect_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RhogarHound_FireEffect_Audio_C* UGE_RhogarHound_FireEffect_Audio_C::GetDefaultObj()
{
	static class UGE_RhogarHound_FireEffect_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RhogarHound_FireEffect_Audio_C*>(UGE_RhogarHound_FireEffect_Audio_C::StaticClass()->DefaultObject);

	return Default;
}

}


