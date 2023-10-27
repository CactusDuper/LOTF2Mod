#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AIAttackIncoming.GE_AIAttackIncoming_C
// (None)

class UClass* UGE_AIAttackIncoming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AIAttackIncoming_C");

	return Clss;
}


// GE_AIAttackIncoming_C GE_AIAttackIncoming.Default__GE_AIAttackIncoming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AIAttackIncoming_C* UGE_AIAttackIncoming_C::GetDefaultObj()
{
	static class UGE_AIAttackIncoming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AIAttackIncoming_C*>(UGE_AIAttackIncoming_C::StaticClass()->DefaultObject);

	return Default;
}

}


