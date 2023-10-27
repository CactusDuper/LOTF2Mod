#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x290 - 0x278)
// WidgetBlueprintGeneratedClass WBP_DebugAttributes3DContainer.WBP_DebugAttributes3DContainer_C
class UWBP_DebugAttributes3DContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_0;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACharacter*                            WidgetCharacter;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Interp, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DebugAttributes3DContainer_C* GetDefaultObj();

	void HideAttributesDebug();
	void DisplayAttributesDebug(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_DebugAttributes3D_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_DebugAttributes3DContainer(int32 EntryPoint);
};

}


