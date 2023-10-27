#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_SlowSyphoningTarget.BattleEffect_SlowSyphoningTarget_C
// (None)

class UClass* UBattleEffect_SlowSyphoningTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_SlowSyphoningTarget_C");

	return Clss;
}


// BattleEffect_SlowSyphoningTarget_C BattleEffect_SlowSyphoningTarget.Default__BattleEffect_SlowSyphoningTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_SlowSyphoningTarget_C* UBattleEffect_SlowSyphoningTarget_C::GetDefaultObj()
{
	static class UBattleEffect_SlowSyphoningTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_SlowSyphoningTarget_C*>(UBattleEffect_SlowSyphoningTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


