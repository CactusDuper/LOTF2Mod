#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_VigorProtection.BattleEffect_VigorProtection_C
// (None)

class UClass* UBattleEffect_VigorProtection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_VigorProtection_C");

	return Clss;
}


// BattleEffect_VigorProtection_C BattleEffect_VigorProtection.Default__BattleEffect_VigorProtection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_VigorProtection_C* UBattleEffect_VigorProtection_C::GetDefaultObj()
{
	static class UBattleEffect_VigorProtection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_VigorProtection_C*>(UBattleEffect_VigorProtection_C::StaticClass()->DefaultObject);

	return Default;
}

}


