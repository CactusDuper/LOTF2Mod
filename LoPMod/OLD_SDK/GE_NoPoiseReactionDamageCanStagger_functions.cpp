#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_NoPoiseReactionDamageCanStagger.GE_NoPoiseReactionDamageCanStagger_C
// (None)

class UClass* UGE_NoPoiseReactionDamageCanStagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_NoPoiseReactionDamageCanStagger_C");

	return Clss;
}


// GE_NoPoiseReactionDamageCanStagger_C GE_NoPoiseReactionDamageCanStagger.Default__GE_NoPoiseReactionDamageCanStagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_NoPoiseReactionDamageCanStagger_C* UGE_NoPoiseReactionDamageCanStagger_C::GetDefaultObj()
{
	static class UGE_NoPoiseReactionDamageCanStagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_NoPoiseReactionDamageCanStagger_C*>(UGE_NoPoiseReactionDamageCanStagger_C::StaticClass()->DefaultObject);

	return Default;
}

}


