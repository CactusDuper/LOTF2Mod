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

// 0x1 (0x1 - 0x0)
// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
struct UNiagaraSystemWidget_UpdateTickWhenPaused_Params
{
public:
	bool                                         NewTickWhenPaused;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
struct UNiagaraSystemWidget_UpdateNiagaraSystemReference_Params
{
public:
	class UNiagaraSystem*                        NewNiagaraSystem;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
struct UNiagaraSystemWidget_GetNiagaraComponent_Params
{
public:
	class UNiagaraUIComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
struct UNiagaraSystemWidget_ActivateSystem_Params
{
public:
	bool                                         Reset;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


