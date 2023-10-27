#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RecoverMojoPerfectBlockInstant.GE_RecoverMojoPerfectBlockInstant_C
// (None)

class UClass* UGE_RecoverMojoPerfectBlockInstant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RecoverMojoPerfectBlockInstant_C");

	return Clss;
}


// GE_RecoverMojoPerfectBlockInstant_C GE_RecoverMojoPerfectBlockInstant.Default__GE_RecoverMojoPerfectBlockInstant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RecoverMojoPerfectBlockInstant_C* UGE_RecoverMojoPerfectBlockInstant_C::GetDefaultObj()
{
	static class UGE_RecoverMojoPerfectBlockInstant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RecoverMojoPerfectBlockInstant_C*>(UGE_RecoverMojoPerfectBlockInstant_C::StaticClass()->DefaultObject);

	return Default;
}

}


