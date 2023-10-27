#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AMO_BOW_Arrow_Standard.AMO_BOW_Arrow_Standard_C
// (None)

class UClass* UAMO_BOW_Arrow_Standard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AMO_BOW_Arrow_Standard_C");

	return Clss;
}


// AMO_BOW_Arrow_Standard_C AMO_BOW_Arrow_Standard.Default__AMO_BOW_Arrow_Standard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAMO_BOW_Arrow_Standard_C* UAMO_BOW_Arrow_Standard_C::GetDefaultObj()
{
	static class UAMO_BOW_Arrow_Standard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAMO_BOW_Arrow_Standard_C*>(UAMO_BOW_Arrow_Standard_C::StaticClass()->DefaultObject);

	return Default;
}

}


