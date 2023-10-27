#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_BOW_Arrow_Standard_HitEffect.SAA_BOW_Arrow_Standard_HitEffect_C
// (None)

class UClass* USAA_BOW_Arrow_Standard_HitEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_BOW_Arrow_Standard_HitEffect_C");

	return Clss;
}


// SAA_BOW_Arrow_Standard_HitEffect_C SAA_BOW_Arrow_Standard_HitEffect.Default__SAA_BOW_Arrow_Standard_HitEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_BOW_Arrow_Standard_HitEffect_C* USAA_BOW_Arrow_Standard_HitEffect_C::GetDefaultObj()
{
	static class USAA_BOW_Arrow_Standard_HitEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_BOW_Arrow_Standard_HitEffect_C*>(USAA_BOW_Arrow_Standard_HitEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


