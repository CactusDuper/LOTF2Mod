#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SyncAnim.GA_SyncAnim_C
// (None)

class UClass* UGA_SyncAnim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SyncAnim_C");

	return Clss;
}


// GA_SyncAnim_C GA_SyncAnim.Default__GA_SyncAnim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SyncAnim_C* UGA_SyncAnim_C::GetDefaultObj()
{
	static class UGA_SyncAnim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SyncAnim_C*>(UGA_SyncAnim_C::StaticClass()->DefaultObject);

	return Default;
}

}


