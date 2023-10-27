#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_OnlyInUmbral.BattleEffect_OnlyInUmbral_C
// (None)

class UClass* UBattleEffect_OnlyInUmbral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_OnlyInUmbral_C");

	return Clss;
}


// BattleEffect_OnlyInUmbral_C BattleEffect_OnlyInUmbral.Default__BattleEffect_OnlyInUmbral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_OnlyInUmbral_C* UBattleEffect_OnlyInUmbral_C::GetDefaultObj()
{
	static class UBattleEffect_OnlyInUmbral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_OnlyInUmbral_C*>(UBattleEffect_OnlyInUmbral_C::StaticClass()->DefaultObject);

	return Default;
}

}


