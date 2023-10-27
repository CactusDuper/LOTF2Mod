#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_TH_Flask_HolyWater_Allies.SAA_TH_Flask_HolyWater_Allies_C
// (None)

class UClass* USAA_TH_Flask_HolyWater_Allies_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_TH_Flask_HolyWater_Allies_C");

	return Clss;
}


// SAA_TH_Flask_HolyWater_Allies_C SAA_TH_Flask_HolyWater_Allies.Default__SAA_TH_Flask_HolyWater_Allies_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_TH_Flask_HolyWater_Allies_C* USAA_TH_Flask_HolyWater_Allies_C::GetDefaultObj()
{
	static class USAA_TH_Flask_HolyWater_Allies_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_TH_Flask_HolyWater_Allies_C*>(USAA_TH_Flask_HolyWater_Allies_C::StaticClass()->DefaultObject);

	return Default;
}

}


