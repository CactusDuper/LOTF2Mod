#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x3B0 - 0x391)
// BlueprintGeneratedClass HexSoulFlayableObject_DissolvingYankableDude_BP.HexSoulFlayableObject_DissolvingYankableDude_BP_C
class AHexSoulFlayableObject_DissolvingYankableDude_BP_C : public AHexSoulFlayableObject_SimpleYankableDude_BP_C
{
public:
	uint8                                        Pad_435C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     PNS_SoulFlayDude_Blast_VFX;                        // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDissolveFXComponent_C*                DissolveFXComponent;                               // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHexSoulFlayableObject_DissolvingYankableDude_BP_C* GetDefaultObj();

	void InitializeForSoulFlay();
	void OnSoulFlayYank();
	void OnDissolveStart_Event(bool IsReverse);
	void ExecuteUbergraph_HexSoulFlayableObject_DissolvingYankableDude_BP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_IsReverse);
};

}


