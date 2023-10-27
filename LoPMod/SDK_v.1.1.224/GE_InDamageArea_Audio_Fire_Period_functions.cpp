#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InDamageArea_Audio_Fire_Period.GE_InDamageArea_Audio_Fire_Period_C
// (None)

class UClass* UGE_InDamageArea_Audio_Fire_Period_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InDamageArea_Audio_Fire_Period_C");

	return Clss;
}


// GE_InDamageArea_Audio_Fire_Period_C GE_InDamageArea_Audio_Fire_Period.Default__GE_InDamageArea_Audio_Fire_Period_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InDamageArea_Audio_Fire_Period_C* UGE_InDamageArea_Audio_Fire_Period_C::GetDefaultObj()
{
	static class UGE_InDamageArea_Audio_Fire_Period_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InDamageArea_Audio_Fire_Period_C*>(UGE_InDamageArea_Audio_Fire_Period_C::StaticClass()->DefaultObject);

	return Default;
}

}


