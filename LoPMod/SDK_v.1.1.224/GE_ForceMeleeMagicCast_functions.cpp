#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ForceMeleeMagicCast.GE_ForceMeleeMagicCast_C
// (None)

class UClass* UGE_ForceMeleeMagicCast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ForceMeleeMagicCast_C");

	return Clss;
}


// GE_ForceMeleeMagicCast_C GE_ForceMeleeMagicCast.Default__GE_ForceMeleeMagicCast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ForceMeleeMagicCast_C* UGE_ForceMeleeMagicCast_C::GetDefaultObj()
{
	static class UGE_ForceMeleeMagicCast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ForceMeleeMagicCast_C*>(UGE_ForceMeleeMagicCast_C::StaticClass()->DefaultObject);

	return Default;
}

}


