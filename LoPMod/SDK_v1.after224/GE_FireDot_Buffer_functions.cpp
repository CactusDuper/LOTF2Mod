#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FireDot_Buffer.GE_FireDoT_Buffer_C
// (None)

class UClass* UGE_FireDoT_Buffer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FireDoT_Buffer_C");

	return Clss;
}


// GE_FireDoT_Buffer_C GE_FireDot_Buffer.Default__GE_FireDoT_Buffer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FireDoT_Buffer_C* UGE_FireDoT_Buffer_C::GetDefaultObj()
{
	static class UGE_FireDoT_Buffer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FireDoT_Buffer_C*>(UGE_FireDoT_Buffer_C::StaticClass()->DefaultObject);

	return Default;
}

}


