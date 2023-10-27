#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AMO_CBW_Bolt_Light.AMO_CBW_Bolt_Light_C
// (None)

class UClass* UAMO_CBW_Bolt_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AMO_CBW_Bolt_Light_C");

	return Clss;
}


// AMO_CBW_Bolt_Light_C AMO_CBW_Bolt_Light.Default__AMO_CBW_Bolt_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAMO_CBW_Bolt_Light_C* UAMO_CBW_Bolt_Light_C::GetDefaultObj()
{
	static class UAMO_CBW_Bolt_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAMO_CBW_Bolt_Light_C*>(UAMO_CBW_Bolt_Light_C::StaticClass()->DefaultObject);

	return Default;
}

}


