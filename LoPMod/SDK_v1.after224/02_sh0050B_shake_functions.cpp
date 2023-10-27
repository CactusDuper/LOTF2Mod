#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass 02_sh0050B_shake.02_sh0050B_shake_C
// (None)

class UClass* UZero2_sh0050B_shake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("02_sh0050B_shake_C");

	return Clss;
}


// 02_sh0050B_shake_C 02_sh0050B_shake.Default__02_sh0050B_shake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZero2_sh0050B_shake_C* UZero2_sh0050B_shake_C::GetDefaultObj()
{
	static class UZero2_sh0050B_shake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZero2_sh0050B_shake_C*>(UZero2_sh0050B_shake_C::StaticClass()->DefaultObject);

	return Default;
}

}


