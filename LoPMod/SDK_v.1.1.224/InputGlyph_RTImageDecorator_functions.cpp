#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InputGlyph_RTImageDecorator.InputGlyph_RTImageDecorator_C
// (None)

class UClass* UInputGlyph_RTImageDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputGlyph_RTImageDecorator_C");

	return Clss;
}


// InputGlyph_RTImageDecorator_C InputGlyph_RTImageDecorator.Default__InputGlyph_RTImageDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInputGlyph_RTImageDecorator_C* UInputGlyph_RTImageDecorator_C::GetDefaultObj()
{
	static class UInputGlyph_RTImageDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputGlyph_RTImageDecorator_C*>(UInputGlyph_RTImageDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


