#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OLD_SAA_BOW_Arrow_Ice_Charged.OLD_SAA_BOW_Arrow_Ice_Charged_C
// (None)

class UClass* UOLD_SAA_BOW_Arrow_Ice_Charged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OLD_SAA_BOW_Arrow_Ice_Charged_C");

	return Clss;
}


// OLD_SAA_BOW_Arrow_Ice_Charged_C OLD_SAA_BOW_Arrow_Ice_Charged.Default__OLD_SAA_BOW_Arrow_Ice_Charged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOLD_SAA_BOW_Arrow_Ice_Charged_C* UOLD_SAA_BOW_Arrow_Ice_Charged_C::GetDefaultObj()
{
	static class UOLD_SAA_BOW_Arrow_Ice_Charged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOLD_SAA_BOW_Arrow_Ice_Charged_C*>(UOLD_SAA_BOW_Arrow_Ice_Charged_C::StaticClass()->DefaultObject);

	return Default;
}

}


