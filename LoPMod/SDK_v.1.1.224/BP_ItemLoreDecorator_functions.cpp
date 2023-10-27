#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemLoreDecorator.BP_ItemLoreDecorator_C
// (None)

class UClass* UBP_ItemLoreDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemLoreDecorator_C");

	return Clss;
}


// BP_ItemLoreDecorator_C BP_ItemLoreDecorator.Default__BP_ItemLoreDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ItemLoreDecorator_C* UBP_ItemLoreDecorator_C::GetDefaultObj()
{
	static class UBP_ItemLoreDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ItemLoreDecorator_C*>(UBP_ItemLoreDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


