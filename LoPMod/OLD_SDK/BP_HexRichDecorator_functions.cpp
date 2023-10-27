#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HexRichDecorator.BP_HexRichDecorator_C
// (None)

class UClass* UBP_HexRichDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HexRichDecorator_C");

	return Clss;
}


// BP_HexRichDecorator_C BP_HexRichDecorator.Default__BP_HexRichDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HexRichDecorator_C* UBP_HexRichDecorator_C::GetDefaultObj()
{
	static class UBP_HexRichDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HexRichDecorator_C*>(UBP_HexRichDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


