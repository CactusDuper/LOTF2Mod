#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x308 - 0x2A0)
// BlueprintGeneratedClass BP_ProxyManager.BP_ProxyManager_C
class ABP_ProxyManager_C : public AProxyManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FF_Actors>          Data;                                              // 0x2B0(0x50)(Edit, BlueprintVisible)
	class FName                                  MapName;                                           // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProxyManager_C* GetDefaultObj();

	void AddSelectionToMap(const TArray<class AActor*>& TmpArray, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, const struct FF_Actors& K2Node_MakeStruct_F_Actors, const struct FF_Actors& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetVisibility(class FName& LevelName, bool bVisible);
	void ExecuteUbergraph_BP_ProxyManager(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName K2Node_Event_levelName, bool K2Node_Event_bVisible, const struct FF_Actors& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
};

}


