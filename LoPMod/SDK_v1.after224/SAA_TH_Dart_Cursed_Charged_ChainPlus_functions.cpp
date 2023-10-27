#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_TH_Dart_Cursed_Charged_ChainPlus.SAA_TH_Dart_Cursed_Charged_ChainPlus_C
// (None)

class UClass* USAA_TH_Dart_Cursed_Charged_ChainPlus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_TH_Dart_Cursed_Charged_ChainPlus_C");

	return Clss;
}


// SAA_TH_Dart_Cursed_Charged_ChainPlus_C SAA_TH_Dart_Cursed_Charged_ChainPlus.Default__SAA_TH_Dart_Cursed_Charged_ChainPlus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_TH_Dart_Cursed_Charged_ChainPlus_C* USAA_TH_Dart_Cursed_Charged_ChainPlus_C::GetDefaultObj()
{
	static class USAA_TH_Dart_Cursed_Charged_ChainPlus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_TH_Dart_Cursed_Charged_ChainPlus_C*>(USAA_TH_Dart_Cursed_Charged_ChainPlus_C::StaticClass()->DefaultObject);

	return Default;
}

}


