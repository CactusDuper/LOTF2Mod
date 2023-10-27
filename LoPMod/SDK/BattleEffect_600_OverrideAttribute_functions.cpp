#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_600_OverrideAttribute.BattleEffect_600_OverrideAttribute_C
// (None)

class UClass* UBattleEffect_600_OverrideAttribute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_600_OverrideAttribute_C");

	return Clss;
}


// BattleEffect_600_OverrideAttribute_C BattleEffect_600_OverrideAttribute.Default__BattleEffect_600_OverrideAttribute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_600_OverrideAttribute_C* UBattleEffect_600_OverrideAttribute_C::GetDefaultObj()
{
	static class UBattleEffect_600_OverrideAttribute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_600_OverrideAttribute_C*>(UBattleEffect_600_OverrideAttribute_C::StaticClass()->DefaultObject);

	return Default;
}

}


