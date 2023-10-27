#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ConstantDamageOverTime.ConstantDamageOverTime_C
// (None)

class UClass* UConstantDamageOverTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstantDamageOverTime_C");

	return Clss;
}


// ConstantDamageOverTime_C ConstantDamageOverTime.Default__ConstantDamageOverTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConstantDamageOverTime_C* UConstantDamageOverTime_C::GetDefaultObj()
{
	static class UConstantDamageOverTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstantDamageOverTime_C*>(UConstantDamageOverTime_C::StaticClass()->DefaultObject);

	return Default;
}

}


