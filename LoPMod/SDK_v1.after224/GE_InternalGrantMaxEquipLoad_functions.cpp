#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InternalGrantMaxEquipLoad.GE_InternalGrantMaxEquipLoad_C
// (None)

class UClass* UGE_InternalGrantMaxEquipLoad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InternalGrantMaxEquipLoad_C");

	return Clss;
}


// GE_InternalGrantMaxEquipLoad_C GE_InternalGrantMaxEquipLoad.Default__GE_InternalGrantMaxEquipLoad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InternalGrantMaxEquipLoad_C* UGE_InternalGrantMaxEquipLoad_C::GetDefaultObj()
{
	static class UGE_InternalGrantMaxEquipLoad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InternalGrantMaxEquipLoad_C*>(UGE_InternalGrantMaxEquipLoad_C::StaticClass()->DefaultObject);

	return Default;
}

}


