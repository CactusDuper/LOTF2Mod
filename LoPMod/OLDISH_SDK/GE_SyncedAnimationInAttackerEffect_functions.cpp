#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SyncedAnimationInAttackerEffect.GE_SyncedAnimationInAttackerEffect_C
// (None)

class UClass* UGE_SyncedAnimationInAttackerEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SyncedAnimationInAttackerEffect_C");

	return Clss;
}


// GE_SyncedAnimationInAttackerEffect_C GE_SyncedAnimationInAttackerEffect.Default__GE_SyncedAnimationInAttackerEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SyncedAnimationInAttackerEffect_C* UGE_SyncedAnimationInAttackerEffect_C::GetDefaultObj()
{
	static class UGE_SyncedAnimationInAttackerEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SyncedAnimationInAttackerEffect_C*>(UGE_SyncedAnimationInAttackerEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


