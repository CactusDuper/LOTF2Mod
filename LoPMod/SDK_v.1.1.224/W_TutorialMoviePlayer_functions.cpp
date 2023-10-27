#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TutorialMoviePlayer.W_TutorialMoviePlayer_C
// (None)

class UClass* UW_TutorialMoviePlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TutorialMoviePlayer_C");

	return Clss;
}


// W_TutorialMoviePlayer_C W_TutorialMoviePlayer.Default__W_TutorialMoviePlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TutorialMoviePlayer_C* UW_TutorialMoviePlayer_C::GetDefaultObj()
{
	static class UW_TutorialMoviePlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TutorialMoviePlayer_C*>(UW_TutorialMoviePlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


