#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HideMeshOnDying.GE_HideMeshOnDying_C
// (None)

class UClass* UGE_HideMeshOnDying_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HideMeshOnDying_C");

	return Clss;
}


// GE_HideMeshOnDying_C GE_HideMeshOnDying.Default__GE_HideMeshOnDying_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HideMeshOnDying_C* UGE_HideMeshOnDying_C::GetDefaultObj()
{
	static class UGE_HideMeshOnDying_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HideMeshOnDying_C*>(UGE_HideMeshOnDying_C::StaticClass()->DefaultObject);

	return Default;
}

}


