#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SyncedAnimationInReceiverEffect.GE_SyncedAnimationInReceiverEffect_C
// (None)

class UClass* UGE_SyncedAnimationInReceiverEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SyncedAnimationInReceiverEffect_C");

	return Clss;
}


// GE_SyncedAnimationInReceiverEffect_C GE_SyncedAnimationInReceiverEffect.Default__GE_SyncedAnimationInReceiverEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SyncedAnimationInReceiverEffect_C* UGE_SyncedAnimationInReceiverEffect_C::GetDefaultObj()
{
	static class UGE_SyncedAnimationInReceiverEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SyncedAnimationInReceiverEffect_C*>(UGE_SyncedAnimationInReceiverEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


