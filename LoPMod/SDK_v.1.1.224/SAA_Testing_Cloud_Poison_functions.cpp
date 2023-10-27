#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Testing_Cloud_Poison.SAA_Testing_Cloud_Poison_C
// (None)

class UClass* USAA_Testing_Cloud_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Testing_Cloud_Poison_C");

	return Clss;
}


// SAA_Testing_Cloud_Poison_C SAA_Testing_Cloud_Poison.Default__SAA_Testing_Cloud_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Testing_Cloud_Poison_C* USAA_Testing_Cloud_Poison_C::GetDefaultObj()
{
	static class USAA_Testing_Cloud_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Testing_Cloud_Poison_C*>(USAA_Testing_Cloud_Poison_C::StaticClass()->DefaultObject);

	return Default;
}

}


