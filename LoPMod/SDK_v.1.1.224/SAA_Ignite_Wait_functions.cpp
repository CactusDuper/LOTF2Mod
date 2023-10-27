#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Ignite_Wait.SAA_Ignite_Wait_C
// (None)

class UClass* USAA_Ignite_Wait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Ignite_Wait_C");

	return Clss;
}


// SAA_Ignite_Wait_C SAA_Ignite_Wait.Default__SAA_Ignite_Wait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Ignite_Wait_C* USAA_Ignite_Wait_C::GetDefaultObj()
{
	static class USAA_Ignite_Wait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Ignite_Wait_C*>(USAA_Ignite_Wait_C::StaticClass()->DefaultObject);

	return Default;
}

}


