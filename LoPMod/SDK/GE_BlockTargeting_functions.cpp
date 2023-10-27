#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BlockTargeting.GE_BlockTargeting_C
// (None)

class UClass* UGE_BlockTargeting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BlockTargeting_C");

	return Clss;
}


// GE_BlockTargeting_C GE_BlockTargeting.Default__GE_BlockTargeting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BlockTargeting_C* UGE_BlockTargeting_C::GetDefaultObj()
{
	static class UGE_BlockTargeting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BlockTargeting_C*>(UGE_BlockTargeting_C::StaticClass()->DefaultObject);

	return Default;
}

}


