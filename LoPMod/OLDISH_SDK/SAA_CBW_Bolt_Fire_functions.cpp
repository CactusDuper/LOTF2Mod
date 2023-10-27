#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_CBW_Bolt_Fire.SAA_CBW_Bolt_Fire_C
// (None)

class UClass* USAA_CBW_Bolt_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_CBW_Bolt_Fire_C");

	return Clss;
}


// SAA_CBW_Bolt_Fire_C SAA_CBW_Bolt_Fire.Default__SAA_CBW_Bolt_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_CBW_Bolt_Fire_C* USAA_CBW_Bolt_Fire_C::GetDefaultObj()
{
	static class USAA_CBW_Bolt_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_CBW_Bolt_Fire_C*>(USAA_CBW_Bolt_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


