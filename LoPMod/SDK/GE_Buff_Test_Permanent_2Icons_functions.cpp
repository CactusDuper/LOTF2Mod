#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Buff_Test_Permanent_2Icons.GE_Buff_Test_Permanent_2Icons_C
// (None)

class UClass* UGE_Buff_Test_Permanent_2Icons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Buff_Test_Permanent_2Icons_C");

	return Clss;
}


// GE_Buff_Test_Permanent_2Icons_C GE_Buff_Test_Permanent_2Icons.Default__GE_Buff_Test_Permanent_2Icons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Buff_Test_Permanent_2Icons_C* UGE_Buff_Test_Permanent_2Icons_C::GetDefaultObj()
{
	static class UGE_Buff_Test_Permanent_2Icons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Buff_Test_Permanent_2Icons_C*>(UGE_Buff_Test_Permanent_2Icons_C::StaticClass()->DefaultObject);

	return Default;
}

}


