#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GEN_InternalStat_Poise_Permanent.GE_GEN_InternalStat_Poise_Permanent_C
// (None)

class UClass* UGE_GEN_InternalStat_Poise_Permanent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GEN_InternalStat_Poise_Permanent_C");

	return Clss;
}


// GE_GEN_InternalStat_Poise_Permanent_C GE_GEN_InternalStat_Poise_Permanent.Default__GE_GEN_InternalStat_Poise_Permanent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GEN_InternalStat_Poise_Permanent_C* UGE_GEN_InternalStat_Poise_Permanent_C::GetDefaultObj()
{
	static class UGE_GEN_InternalStat_Poise_Permanent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GEN_InternalStat_Poise_Permanent_C*>(UGE_GEN_InternalStat_Poise_Permanent_C::StaticClass()->DefaultObject);

	return Default;
}

}


