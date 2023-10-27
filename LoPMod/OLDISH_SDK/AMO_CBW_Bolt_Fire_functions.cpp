#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AMO_CBW_Bolt_Fire.AMO_CBW_Bolt_Fire_C
// (None)

class UClass* UAMO_CBW_Bolt_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AMO_CBW_Bolt_Fire_C");

	return Clss;
}


// AMO_CBW_Bolt_Fire_C AMO_CBW_Bolt_Fire.Default__AMO_CBW_Bolt_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAMO_CBW_Bolt_Fire_C* UAMO_CBW_Bolt_Fire_C::GetDefaultObj()
{
	static class UAMO_CBW_Bolt_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAMO_CBW_Bolt_Fire_C*>(UAMO_CBW_Bolt_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


