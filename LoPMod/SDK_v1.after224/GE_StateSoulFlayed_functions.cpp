#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StateSoulFlayed.GE_StateSoulFlayed_C
// (None)

class UClass* UGE_StateSoulFlayed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StateSoulFlayed_C");

	return Clss;
}


// GE_StateSoulFlayed_C GE_StateSoulFlayed.Default__GE_StateSoulFlayed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StateSoulFlayed_C* UGE_StateSoulFlayed_C::GetDefaultObj()
{
	static class UGE_StateSoulFlayed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StateSoulFlayed_C*>(UGE_StateSoulFlayed_C::StaticClass()->DefaultObject);

	return Default;
}

}


