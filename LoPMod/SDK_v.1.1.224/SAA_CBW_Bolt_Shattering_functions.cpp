#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_CBW_Bolt_Shattering.SAA_CBW_Bolt_Shattering_C
// (None)

class UClass* USAA_CBW_Bolt_Shattering_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_CBW_Bolt_Shattering_C");

	return Clss;
}


// SAA_CBW_Bolt_Shattering_C SAA_CBW_Bolt_Shattering.Default__SAA_CBW_Bolt_Shattering_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_CBW_Bolt_Shattering_C* USAA_CBW_Bolt_Shattering_C::GetDefaultObj()
{
	static class USAA_CBW_Bolt_Shattering_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_CBW_Bolt_Shattering_C*>(USAA_CBW_Bolt_Shattering_C::StaticClass()->DefaultObject);

	return Default;
}

}


