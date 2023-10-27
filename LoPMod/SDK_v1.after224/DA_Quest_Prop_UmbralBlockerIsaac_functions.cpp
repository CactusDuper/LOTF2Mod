#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_Quest_Prop_UmbralBlockerIsaac.DA_Quest_Prop_UmbralBlockerIsaac_C
// (None)

class UClass* UDA_Quest_Prop_UmbralBlockerIsaac_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_Quest_Prop_UmbralBlockerIsaac_C");

	return Clss;
}


// DA_Quest_Prop_UmbralBlockerIsaac_C DA_Quest_Prop_UmbralBlockerIsaac.Default__DA_Quest_Prop_UmbralBlockerIsaac_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_Quest_Prop_UmbralBlockerIsaac_C* UDA_Quest_Prop_UmbralBlockerIsaac_C::GetDefaultObj()
{
	static class UDA_Quest_Prop_UmbralBlockerIsaac_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_Quest_Prop_UmbralBlockerIsaac_C*>(UDA_Quest_Prop_UmbralBlockerIsaac_C::StaticClass()->DefaultObject);

	return Default;
}

}


