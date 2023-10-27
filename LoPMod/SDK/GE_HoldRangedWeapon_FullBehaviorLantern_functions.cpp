#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HoldRangedWeapon_FullBehaviorLantern.GE_HoldRangedWeapon_FullBehaviorLantern_C
// (None)

class UClass* UGE_HoldRangedWeapon_FullBehaviorLantern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HoldRangedWeapon_FullBehaviorLantern_C");

	return Clss;
}


// GE_HoldRangedWeapon_FullBehaviorLantern_C GE_HoldRangedWeapon_FullBehaviorLantern.Default__GE_HoldRangedWeapon_FullBehaviorLantern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HoldRangedWeapon_FullBehaviorLantern_C* UGE_HoldRangedWeapon_FullBehaviorLantern_C::GetDefaultObj()
{
	static class UGE_HoldRangedWeapon_FullBehaviorLantern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HoldRangedWeapon_FullBehaviorLantern_C*>(UGE_HoldRangedWeapon_FullBehaviorLantern_C::StaticClass()->DefaultObject);

	return Default;
}

}


