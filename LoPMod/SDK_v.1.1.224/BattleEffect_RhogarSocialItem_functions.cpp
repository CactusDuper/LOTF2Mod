#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RhogarSocialItem.BattleEffect_RhogarSocialItem_C
// (None)

class UClass* UBattleEffect_RhogarSocialItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RhogarSocialItem_C");

	return Clss;
}


// BattleEffect_RhogarSocialItem_C BattleEffect_RhogarSocialItem.Default__BattleEffect_RhogarSocialItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RhogarSocialItem_C* UBattleEffect_RhogarSocialItem_C::GetDefaultObj()
{
	static class UBattleEffect_RhogarSocialItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RhogarSocialItem_C*>(UBattleEffect_RhogarSocialItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


