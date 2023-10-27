#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InDamageArea_Enemy_Audio_Radiant.GE_InDamageArea_Enemy_Audio_Radiant_C
// (None)

class UClass* UGE_InDamageArea_Enemy_Audio_Radiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InDamageArea_Enemy_Audio_Radiant_C");

	return Clss;
}


// GE_InDamageArea_Enemy_Audio_Radiant_C GE_InDamageArea_Enemy_Audio_Radiant.Default__GE_InDamageArea_Enemy_Audio_Radiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InDamageArea_Enemy_Audio_Radiant_C* UGE_InDamageArea_Enemy_Audio_Radiant_C::GetDefaultObj()
{
	static class UGE_InDamageArea_Enemy_Audio_Radiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InDamageArea_Enemy_Audio_Radiant_C*>(UGE_InDamageArea_Enemy_Audio_Radiant_C::StaticClass()->DefaultObject);

	return Default;
}

}


