#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AMO_CBW_Bolt_Shattering.AMO_CBW_Bolt_Shattering_C
// (None)

class UClass* UAMO_CBW_Bolt_Shattering_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AMO_CBW_Bolt_Shattering_C");

	return Clss;
}


// AMO_CBW_Bolt_Shattering_C AMO_CBW_Bolt_Shattering.Default__AMO_CBW_Bolt_Shattering_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAMO_CBW_Bolt_Shattering_C* UAMO_CBW_Bolt_Shattering_C::GetDefaultObj()
{
	static class UAMO_CBW_Bolt_Shattering_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAMO_CBW_Bolt_Shattering_C*>(UAMO_CBW_Bolt_Shattering_C::StaticClass()->DefaultObject);

	return Default;
}

}


