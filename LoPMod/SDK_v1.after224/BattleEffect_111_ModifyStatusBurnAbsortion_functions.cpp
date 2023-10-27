#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_111_ModifyStatusBurnAbsortion.BattleEffect_111_ModifyStatusBurnAbsortion_C
// (None)

class UClass* UBattleEffect_111_ModifyStatusBurnAbsortion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_111_ModifyStatusBurnAbsortion_C");

	return Clss;
}


// BattleEffect_111_ModifyStatusBurnAbsortion_C BattleEffect_111_ModifyStatusBurnAbsortion.Default__BattleEffect_111_ModifyStatusBurnAbsortion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_111_ModifyStatusBurnAbsortion_C* UBattleEffect_111_ModifyStatusBurnAbsortion_C::GetDefaultObj()
{
	static class UBattleEffect_111_ModifyStatusBurnAbsortion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_111_ModifyStatusBurnAbsortion_C*>(UBattleEffect_111_ModifyStatusBurnAbsortion_C::StaticClass()->DefaultObject);

	return Default;
}

}


