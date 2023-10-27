#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CauseBuildupWhenOtherBuildupIsCaused.BattleEffect_CauseBuildupWhenOtherBuildupIsCaused_C
// (None)

class UClass* UBattleEffect_CauseBuildupWhenOtherBuildupIsCaused_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CauseBuildupWhenOtherBuildupIsCaused_C");

	return Clss;
}


// BattleEffect_CauseBuildupWhenOtherBuildupIsCaused_C BattleEffect_CauseBuildupWhenOtherBuildupIsCaused.Default__BattleEffect_CauseBuildupWhenOtherBuildupIsCaused_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CauseBuildupWhenOtherBuildupIsCaused_C* UBattleEffect_CauseBuildupWhenOtherBuildupIsCaused_C::GetDefaultObj()
{
	static class UBattleEffect_CauseBuildupWhenOtherBuildupIsCaused_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CauseBuildupWhenOtherBuildupIsCaused_C*>(UBattleEffect_CauseBuildupWhenOtherBuildupIsCaused_C::StaticClass()->DefaultObject);

	return Default;
}

}


