#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function CommonLoadingScreen.LoadingProcessInterface.K2_ShouldShowLoadingScreen
struct ILoadingProcessInterface_K2_ShouldShowLoadingScreen_Params
{
public:
	class FString                                OutDebugReason;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonLoadingScreen.LoadingProcessTask.SetShowLoadingScreenReason
struct ULoadingProcessTask_SetShowLoadingScreenReason_Params
{
public:
	class FString                                InDebugReason;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonLoadingScreen.LoadingProcessTask.CreateLoadingScreenProcessTask
struct ULoadingProcessTask_CreateLoadingScreenProcessTask_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShowLoadingScreenReason;                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULoadingProcessTask*                   ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonLoadingScreen.LoadingScreenManager.SetLoadingBarEnabled
struct ULoadingScreenManager_SetLoadingBarEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonLoadingScreen.LoadingScreenManager.RemoveLoadingScreenWatcher
struct ULoadingScreenManager_RemoveLoadingScreenWatcher_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonLoadingScreen.LoadingScreenManager.K2_SetLoadingScreenCustomText
struct ULoadingScreenManager_K2_SetLoadingScreenCustomText_Params
{
public:
	class UWorld*                                WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewText;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonLoadingScreen.LoadingScreenManager.GetLoadingScreenCustomText
struct ULoadingScreenManager_GetLoadingScreenCustomText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonLoadingScreen.LoadingScreenManager.GetLoadingBarStage
struct ULoadingScreenManager_GetLoadingBarStage_Params
{
public:
	enum class ELoadingBarStage                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonLoadingScreen.LoadingScreenManager.GetLoadingBarProgress
struct ULoadingScreenManager_GetLoadingBarProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonLoadingScreen.LoadingScreenManager.GetLoadingBarEnabled
struct ULoadingScreenManager_GetLoadingBarEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonLoadingScreen.LoadingScreenManager.GetDebugReasonForShowingOrHidingLoadingScreen
struct ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonLoadingScreen.LoadingScreenManager.GetCurrentLoadingMap
struct ULoadingScreenManager_GetCurrentLoadingMap_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonLoadingScreen.LoadingScreenManager.AddLoadingScreenWatcher
struct ULoadingScreenManager_AddLoadingScreenWatcher_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


