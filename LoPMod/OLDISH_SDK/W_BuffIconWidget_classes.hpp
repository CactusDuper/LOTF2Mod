#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x2F1 - 0x2D8)
// WidgetBlueprintGeneratedClass W_BuffIconWidget.W_BuffIconWidget_C
class UW_BuffIconWidget_C : public UBuffIconWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnDeactivated;                                     // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnActivated;                                       // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                         Activated;                                         // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_BuffIconWidget_C* GetDefaultObj();

	void BP_SetDuration(float Duration);
	void BP_OnDeactivated();
	void BP_OnActivated();
	void ExecuteUbergraph_W_BuffIconWidget(int32 EntryPoint, bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_Event_duration, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


