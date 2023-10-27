#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_EnablePerfectDodge.BattleEffect_EnablePerfectDodge_C
// (None)

class UClass* UBattleEffect_EnablePerfectDodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_EnablePerfectDodge_C");

	return Clss;
}


// BattleEffect_EnablePerfectDodge_C BattleEffect_EnablePerfectDodge.Default__BattleEffect_EnablePerfectDodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_EnablePerfectDodge_C* UBattleEffect_EnablePerfectDodge_C::GetDefaultObj()
{
	static class UBattleEffect_EnablePerfectDodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_EnablePerfectDodge_C*>(UBattleEffect_EnablePerfectDodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


