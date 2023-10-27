#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xE10 - 0xDF9)
// BlueprintGeneratedClass BP_Enemy_UmbralSparrow.BP_Enemy_UmbralSparrow_C
class ABP_Enemy_UmbralSparrow_C : public ABP_UmbrieBase_C
{
public:
	uint8                                        Pad_3CE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     Right_Eyes_Trail_VFX;                              // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Left_Eyes_Trail_VFX;                               // 0xE08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Enemy_UmbralSparrow_C* GetDefaultObj();

};

}


