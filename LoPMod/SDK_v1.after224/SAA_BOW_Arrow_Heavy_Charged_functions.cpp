#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_BOW_Arrow_Heavy_Charged.SAA_BOW_Arrow_Heavy_Charged_C
// (None)

class UClass* USAA_BOW_Arrow_Heavy_Charged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_BOW_Arrow_Heavy_Charged_C");

	return Clss;
}


// SAA_BOW_Arrow_Heavy_Charged_C SAA_BOW_Arrow_Heavy_Charged.Default__SAA_BOW_Arrow_Heavy_Charged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_BOW_Arrow_Heavy_Charged_C* USAA_BOW_Arrow_Heavy_Charged_C::GetDefaultObj()
{
	static class USAA_BOW_Arrow_Heavy_Charged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_BOW_Arrow_Heavy_Charged_C*>(USAA_BOW_Arrow_Heavy_Charged_C::StaticClass()->DefaultObject);

	return Default;
}

}


