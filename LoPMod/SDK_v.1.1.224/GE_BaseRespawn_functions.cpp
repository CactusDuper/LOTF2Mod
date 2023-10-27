#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BaseRespawn.GE_BaseRespawn_C
// (None)

class UClass* UGE_BaseRespawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BaseRespawn_C");

	return Clss;
}


// GE_BaseRespawn_C GE_BaseRespawn.Default__GE_BaseRespawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BaseRespawn_C* UGE_BaseRespawn_C::GetDefaultObj()
{
	static class UGE_BaseRespawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BaseRespawn_C*>(UGE_BaseRespawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


