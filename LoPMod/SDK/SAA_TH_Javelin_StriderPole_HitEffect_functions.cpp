#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_TH_Javelin_StriderPole_HitEffect.SAA_TH_Javelin_StriderPole_HitEffect_C
// (None)

class UClass* USAA_TH_Javelin_StriderPole_HitEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_TH_Javelin_StriderPole_HitEffect_C");

	return Clss;
}


// SAA_TH_Javelin_StriderPole_HitEffect_C SAA_TH_Javelin_StriderPole_HitEffect.Default__SAA_TH_Javelin_StriderPole_HitEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_TH_Javelin_StriderPole_HitEffect_C* USAA_TH_Javelin_StriderPole_HitEffect_C::GetDefaultObj()
{
	static class USAA_TH_Javelin_StriderPole_HitEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_TH_Javelin_StriderPole_HitEffect_C*>(USAA_TH_Javelin_StriderPole_HitEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


