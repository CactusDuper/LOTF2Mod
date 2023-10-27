#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CON_IncreaseStatusReistance_Frostbite.BattleEffect_CON_IncreaseStatusReistance_Frostbite_C
// (None)

class UClass* UBattleEffect_CON_IncreaseStatusReistance_Frostbite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CON_IncreaseStatusReistance_Frostbite_C");

	return Clss;
}


// BattleEffect_CON_IncreaseStatusReistance_Frostbite_C BattleEffect_CON_IncreaseStatusReistance_Frostbite.Default__BattleEffect_CON_IncreaseStatusReistance_Frostbite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CON_IncreaseStatusReistance_Frostbite_C* UBattleEffect_CON_IncreaseStatusReistance_Frostbite_C::GetDefaultObj()
{
	static class UBattleEffect_CON_IncreaseStatusReistance_Frostbite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CON_IncreaseStatusReistance_Frostbite_C*>(UBattleEffect_CON_IncreaseStatusReistance_Frostbite_C::StaticClass()->DefaultObject);

	return Default;
}

}


