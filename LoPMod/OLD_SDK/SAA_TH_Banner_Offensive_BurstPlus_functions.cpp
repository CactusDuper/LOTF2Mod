#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_TH_Banner_Offensive_BurstPlus.SAA_TH_Banner_Offensive_BurstPlus_C
// (None)

class UClass* USAA_TH_Banner_Offensive_BurstPlus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_TH_Banner_Offensive_BurstPlus_C");

	return Clss;
}


// SAA_TH_Banner_Offensive_BurstPlus_C SAA_TH_Banner_Offensive_BurstPlus.Default__SAA_TH_Banner_Offensive_BurstPlus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_TH_Banner_Offensive_BurstPlus_C* USAA_TH_Banner_Offensive_BurstPlus_C::GetDefaultObj()
{
	static class USAA_TH_Banner_Offensive_BurstPlus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_TH_Banner_Offensive_BurstPlus_C*>(USAA_TH_Banner_Offensive_BurstPlus_C::StaticClass()->DefaultObject);

	return Default;
}

}

