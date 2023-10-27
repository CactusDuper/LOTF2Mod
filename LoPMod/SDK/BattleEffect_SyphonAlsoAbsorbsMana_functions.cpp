#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_SyphonAlsoAbsorbsMana.BattleEffect_SyphonAlsoAbsorbsMana_C
// (None)

class UClass* UBattleEffect_SyphonAlsoAbsorbsMana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_SyphonAlsoAbsorbsMana_C");

	return Clss;
}


// BattleEffect_SyphonAlsoAbsorbsMana_C BattleEffect_SyphonAlsoAbsorbsMana.Default__BattleEffect_SyphonAlsoAbsorbsMana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_SyphonAlsoAbsorbsMana_C* UBattleEffect_SyphonAlsoAbsorbsMana_C::GetDefaultObj()
{
	static class UBattleEffect_SyphonAlsoAbsorbsMana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_SyphonAlsoAbsorbsMana_C*>(UBattleEffect_SyphonAlsoAbsorbsMana_C::StaticClass()->DefaultObject);

	return Default;
}

}


