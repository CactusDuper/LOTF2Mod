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

// 0x30 (0x30 - 0x0)
// Function Obera.OberaBPLibrary.SetStringFieldInJsonObject
struct UOberaBPLibrary_SetStringFieldInJsonObject_Params
{
public:
	struct FOberaJSonObject                      Object;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringValue;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Obera.OberaBPLibrary.SetObjectFieldInJsonObject
struct UOberaBPLibrary_SetObjectFieldInJsonObject_Params
{
public:
	struct FOberaJSonObject                      Object;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOberaJSonObject                      ObjectValue;                                       // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Obera.OberaBPLibrary.SetJsonValueAsString
struct UOberaBPLibrary_SetJsonValueAsString_Params
{
public:
	struct FOberaJSonValue                       Value;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                StringValue;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOberaJSonValue                       ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Obera.OberaBPLibrary.SetJsonValueAsObject
struct UOberaBPLibrary_SetJsonValueAsObject_Params
{
public:
	struct FOberaJSonValue                       Value;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FOberaJSonObject                      ObjectValue;                                       // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FOberaJSonValue                       ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.SetJsonValueAsFloat
struct UOberaBPLibrary_SetJsonValueAsFloat_Params
{
public:
	struct FOberaJSonValue                       Value;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOberaJSonValue                       ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.SetJsonValueAsBool
struct UOberaBPLibrary_SetJsonValueAsBool_Params
{
public:
	struct FOberaJSonValue                       Value;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOberaJSonValue                       ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Obera.OberaBPLibrary.SetJsonValueAsArray
struct UOberaBPLibrary_SetJsonValueAsArray_Params
{
public:
	struct FOberaJSonValue                       Value;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FOberaJSonValue>               ArrayValue;                                        // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FOberaJSonValue                       ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.SetFloatFieldInJsonObject
struct UOberaBPLibrary_SetFloatFieldInJsonObject_Params
{
public:
	struct FOberaJSonObject                      Object;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.SetBoolFieldInJsonObject
struct UOberaBPLibrary_SetBoolFieldInJsonObject_Params
{
public:
	struct FOberaJSonObject                      Object;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1570[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Obera.OberaBPLibrary.SetArrayFieldFromJsonObject
struct UOberaBPLibrary_SetArrayFieldFromJsonObject_Params
{
public:
	struct FOberaJSonObject                      Object;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOberaJSonValue>               ValueArray;                                        // 0x20(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.SaveStringIntoFile
struct UOberaBPLibrary_SaveStringIntoFile_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringToSvae;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1573[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.SaveJsonObjectIntoFile
struct UOberaBPLibrary_SaveJsonObjectIntoFile_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOberaJSonObject                      Object;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1574[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.LoadJsonObjectFromFile
struct UOberaBPLibrary_LoadJsonObjectFromFile_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1575[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOberaJSonObject                      ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.LoadFileIntoString
struct UOberaBPLibrary_LoadFileIntoString_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1576[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Obera.OberaBPLibrary.GetStringFieldFromJsonObject
struct UOberaBPLibrary_GetStringFieldFromJsonObject_Params
{
public:
	struct FOberaJSonObject                      Object;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnString;                                      // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1577[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Obera.OberaBPLibrary.GetObjectFieldFromJsonObject
struct UOberaBPLibrary_GetObjectFieldFromJsonObject_Params
{
public:
	struct FOberaJSonObject                      Object;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOberaJSonObject                      ReturnObject;                                      // 0x20(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1578[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.GetJsonValueAsString
struct UOberaBPLibrary_GetJsonValueAsString_Params
{
public:
	struct FOberaJSonValue                       Value;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                ReturnString;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1579[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.GetJsonValueAsObject
struct UOberaBPLibrary_GetJsonValueAsObject_Params
{
public:
	struct FOberaJSonValue                       Value;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FOberaJSonObject                      ReturnObject;                                      // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Obera.OberaBPLibrary.GetJsonValueAsFloat
struct UOberaBPLibrary_GetJsonValueAsFloat_Params
{
public:
	struct FOberaJSonValue                       Value;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	float                                        ReturnFloat;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Obera.OberaBPLibrary.GetJsonValueAsBool
struct UOberaBPLibrary_GetJsonValueAsBool_Params
{
public:
	struct FOberaJSonValue                       Value;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnBool;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.GetJsonValueAsArray
struct UOberaBPLibrary_GetJsonValueAsArray_Params
{
public:
	struct FOberaJSonValue                       Value;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FOberaJSonValue>               ReturnArray;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.GetFloatFieldFromJsonObject
struct UOberaBPLibrary_GetFloatFieldFromJsonObject_Params
{
public:
	struct FOberaJSonObject                      Object;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnFloat;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Obera.OberaBPLibrary.GetBoolFieldFromJsonObject
struct UOberaBPLibrary_GetBoolFieldFromJsonObject_Params
{
public:
	struct FOberaJSonObject                      Object;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnBool;                                        // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Obera.OberaBPLibrary.GetArrayFieldFromJsonObject
struct UOberaBPLibrary_GetArrayFieldFromJsonObject_Params
{
public:
	struct FOberaJSonObject                      Object;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOberaJSonValue>               ReturnArray;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1580[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


