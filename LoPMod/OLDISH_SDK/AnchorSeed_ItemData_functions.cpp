#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnchorSeed_ItemData.AnchorSeed_ItemData_C
// (None)

class UClass* UAnchorSeed_ItemData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnchorSeed_ItemData_C");

	return Clss;
}


// AnchorSeed_ItemData_C AnchorSeed_ItemData.Default__AnchorSeed_ItemData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnchorSeed_ItemData_C* UAnchorSeed_ItemData_C::GetDefaultObj()
{
	static class UAnchorSeed_ItemData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnchorSeed_ItemData_C*>(UAnchorSeed_ItemData_C::StaticClass()->DefaultObject);

	return Default;
}

}


