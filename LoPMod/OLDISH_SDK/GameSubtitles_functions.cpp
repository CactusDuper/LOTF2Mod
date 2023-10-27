#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameSubtitles.MediaSubtitlesPlayer
// (None)

class UClass* UMediaSubtitlesPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaSubtitlesPlayer");

	return Clss;
}


// MediaSubtitlesPlayer GameSubtitles.Default__MediaSubtitlesPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaSubtitlesPlayer* UMediaSubtitlesPlayer::GetDefaultObj()
{
	static class UMediaSubtitlesPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaSubtitlesPlayer*>(UMediaSubtitlesPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSubtitles.MediaSubtitlesPlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaSubtitlesPlayer::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSubtitlesPlayer", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameSubtitles.MediaSubtitlesPlayer.SetSubtitles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOverlays*                   Subtitles                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaSubtitlesPlayer::SetSubtitles(class UOverlays* Subtitles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSubtitlesPlayer", "SetSubtitles");

	Params::UMediaSubtitlesPlayer_SetSubtitles_Params Parms{};

	Parms.Subtitles = Subtitles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameSubtitles.MediaSubtitlesPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaSubtitlesPlayer::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSubtitlesPlayer", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameSubtitles.MediaSubtitlesPlayer.BindToMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaSubtitlesPlayer::BindToMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSubtitlesPlayer", "BindToMediaPlayer");

	Params::UMediaSubtitlesPlayer_BindToMediaPlayer_Params Parms{};

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameSubtitles.SubtitleDisplay
// (None)

class UClass* USubtitleDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitleDisplay");

	return Clss;
}


// SubtitleDisplay GameSubtitles.Default__SubtitleDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class USubtitleDisplay* USubtitleDisplay::GetDefaultObj()
{
	static class USubtitleDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitleDisplay*>(USubtitleDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSubtitles.SubtitleDisplay.HasSubtitles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USubtitleDisplay::HasSubtitles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitleDisplay", "HasSubtitles");

	Params::USubtitleDisplay_HasSubtitles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameSubtitles.SubtitleDisplayOptions
// (None)

class UClass* USubtitleDisplayOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitleDisplayOptions");

	return Clss;
}


// SubtitleDisplayOptions GameSubtitles.Default__SubtitleDisplayOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class USubtitleDisplayOptions* USubtitleDisplayOptions::GetDefaultObj()
{
	static class USubtitleDisplayOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitleDisplayOptions*>(USubtitleDisplayOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSubtitles.SubtitleDisplaySubsystem
// (None)

class UClass* USubtitleDisplaySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitleDisplaySubsystem");

	return Clss;
}


// SubtitleDisplaySubsystem GameSubtitles.Default__SubtitleDisplaySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USubtitleDisplaySubsystem* USubtitleDisplaySubsystem::GetDefaultObj()
{
	static class USubtitleDisplaySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitleDisplaySubsystem*>(USubtitleDisplaySubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


