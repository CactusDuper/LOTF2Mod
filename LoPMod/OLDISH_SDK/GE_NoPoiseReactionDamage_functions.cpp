#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_NoPoiseReactionDamage.GE_NoPoiseReactionDamage_C
// (None)

class UClass* UGE_NoPoiseReactionDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_NoPoiseReactionDamage_C");

	return Clss;
}


// GE_NoPoiseReactionDamage_C GE_NoPoiseReactionDamage.Default__GE_NoPoiseReactionDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_NoPoiseReactionDamage_C* UGE_NoPoiseReactionDamage_C::GetDefaultObj()
{
	static class UGE_NoPoiseReactionDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_NoPoiseReactionDamage_C*>(UGE_NoPoiseReactionDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


