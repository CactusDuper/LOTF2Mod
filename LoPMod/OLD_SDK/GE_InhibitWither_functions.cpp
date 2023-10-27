#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InhibitWither.GE_InhibitWither_C
// (None)

class UClass* UGE_InhibitWither_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InhibitWither_C");

	return Clss;
}


// GE_InhibitWither_C GE_InhibitWither.Default__GE_InhibitWither_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InhibitWither_C* UGE_InhibitWither_C::GetDefaultObj()
{
	static class UGE_InhibitWither_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InhibitWither_C*>(UGE_InhibitWither_C::StaticClass()->DefaultObject);

	return Default;
}

}


