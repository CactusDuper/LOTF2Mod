#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Stab_Push.SAA_Stab_Push_C
// (None)

class UClass* USAA_Stab_Push_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Stab_Push_C");

	return Clss;
}


// SAA_Stab_Push_C SAA_Stab_Push.Default__SAA_Stab_Push_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Stab_Push_C* USAA_Stab_Push_C::GetDefaultObj()
{
	static class USAA_Stab_Push_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Stab_Push_C*>(USAA_Stab_Push_C::StaticClass()->DefaultObject);

	return Default;
}

}


