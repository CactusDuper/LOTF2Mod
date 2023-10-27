#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_AMO_TH_Flask_UmbralLeech.BattleEffect_AMO_TH_Flask_UmbralLeech_C
// (None)

class UClass* UBattleEffect_AMO_TH_Flask_UmbralLeech_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_AMO_TH_Flask_UmbralLeech_C");

	return Clss;
}


// BattleEffect_AMO_TH_Flask_UmbralLeech_C BattleEffect_AMO_TH_Flask_UmbralLeech.Default__BattleEffect_AMO_TH_Flask_UmbralLeech_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_AMO_TH_Flask_UmbralLeech_C* UBattleEffect_AMO_TH_Flask_UmbralLeech_C::GetDefaultObj()
{
	static class UBattleEffect_AMO_TH_Flask_UmbralLeech_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_AMO_TH_Flask_UmbralLeech_C*>(UBattleEffect_AMO_TH_Flask_UmbralLeech_C::StaticClass()->DefaultObject);

	return Default;
}

}


