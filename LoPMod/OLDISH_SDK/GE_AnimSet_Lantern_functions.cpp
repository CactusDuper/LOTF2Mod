#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AnimSet_Lantern.GE_AnimSet_Lantern_C
// (None)

class UClass* UGE_AnimSet_Lantern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AnimSet_Lantern_C");

	return Clss;
}


// GE_AnimSet_Lantern_C GE_AnimSet_Lantern.Default__GE_AnimSet_Lantern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AnimSet_Lantern_C* UGE_AnimSet_Lantern_C::GetDefaultObj()
{
	static class UGE_AnimSet_Lantern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AnimSet_Lantern_C*>(UGE_AnimSet_Lantern_C::StaticClass()->DefaultObject);

	return Default;
}

}


