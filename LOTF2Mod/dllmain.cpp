#include "SDK.hpp"

#include <Windows.h>
#include "MinHook.h"

#include <iostream>
#include <unordered_map>
#include <vector>
#include <deque>
#include <unordered_map>
#include <string>
#include <numeric>
#include <chrono>
#include <algorithm>
#include <cmath>
#include <codecvt>
#include "helpers.hpp"
#include "ObjectProcessor.hpp"
#include "MemoryHacking.h"

#include "stdafx.h"



struct FSubsystemCollectionBase
{
  void *__vftable;
  uint8 pad[0x100];//TMap<UClass*, USubsystem*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, USubsystem*, 0> > SubsystemMap;
  //TMap<UClass*, TArray<USubsystem*, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TArray<USubsystem*, TSizedDefaultAllocator<32> >, 0> > SubsystemArrayMap;
  UClass* BaseType;
  UObject* Outer;
  bool bPopulating;
  uint8 pad2[7];
}; 


typedef void(__thiscall* ProcessEvent)(UObject*, UFunction*, void*);
typedef void(__thiscall* PostRender_V)(UGameViewportClient* thisObject, UCanvas* Canvas);
typedef void(__thiscall* PostRender_H)(AHUD* thisObject);
typedef void(__thiscall* ShouldCreateSubsystem)(USubsystem* thisObject, UObject* outer);
typedef void(__fastcall* InitializeSubsystem)(USubsystem* thisObject, FSubsystemCollectionBase* collectionBase);



//using DrawElemWireFunc = void(__fastcall*)(FKShapeElem*, FPrimitiveDrawInterface*, const FTransform& ElemTM, const float, const FColor);
//using DrawElemSolidFunc = void(__fastcall*)(FKShapeElem*, FPrimitiveDrawInterface*, const FTransform& ElemTM, const float, const FMaterialRenderProxy);



UWorld* GWorld = nullptr;
UGameEngine** GEngine = nullptr;
UGameViewportClient* Viewport = nullptr;
UHexLocalPlayer* HLP = nullptr;
UQuestDirector* QuestDirector = nullptr;

UGameplayStatics* gameplayStatics = nullptr;
UFont* font = nullptr;

ProcessEvent OProcessEvent = nullptr;
ShouldCreateSubsystem OShouldCreateDeveloperMenuSubsystem = nullptr;
InitializeSubsystem OInitializeEngineSubsystem = nullptr;
InitializeSubsystem OInitializeDeveloperMenuSubsystem = nullptr;
PostRender_V ViewportPostRenderOriginal = nullptr;
PostRender_H HUDPostRenderOriginal = nullptr;


bool isViewportReady = false;
bool isHUDReady = false;
bool StaticConstructDone = false;



void HUDPostRenderHook(AHUD* HUD) {

    int32 ScreenWidth = HUD->Canvas->SizeX;
    int32 ScreenHeight = HUD->Canvas->SizeY;


    float sp_x = 0.01f * ScreenWidth;
    float sp_y = 0.3f * ScreenHeight;


    if (HLP->PlayerController->Character->IsA(AAnathemaPlayerCharacter_BP_C::StaticClass())) {
        AAnathemaPlayerCharacter_BP_C* AnathemaPlayer = static_cast<AAnathemaPlayerCharacter_BP_C*>(HLP->PlayerController->Character);
        ALOTF2PlayerState_BP_C* AnathemaPlayerState = static_cast<ALOTF2PlayerState_BP_C*>(AnathemaPlayer->PlayerState);
        if (AnathemaPlayerState) {

            EHexLoadingState loadingState = AnathemaPlayerState->LoadingState;

            wstring loadingStateStr = EnumToString(loadingState);
            HUD->DrawText(FString(loadingStateStr.c_str()), RED, sp_x, sp_y - 80, font, 1, false);

            if (loadingState == EHexLoadingState::Loaded) {
                processPlayer(AnathemaPlayer, QuestDirector, HUD, font, sp_x, sp_y);
            }

        }
        objectProcessor(HUD);
    }


    HUDPostRenderOriginal(HUD);
}



void ViewportPostRenderHook(UGameViewportClient* vcli, UCanvas* canvas) {

    if (font && vcli && canvas) {

        int32 ScreenWidth = canvas->SizeX;
        int32 ScreenHeight = canvas->SizeY;

        float sp_x = 0.01f * ScreenWidth;
        float sp_y = 0.3f * ScreenHeight;


        if (HLP->PlayerController->Character->IsA(AAnathemaPlayerCharacter_BP_C::StaticClass())) {

            AAnathemaPlayerCharacter_BP_C* AnathemaPlayer = static_cast<AAnathemaPlayerCharacter_BP_C*>(HLP->PlayerController->Character);
            ALOTF2PlayerState_BP_C* AnathemaPlayerState = static_cast<ALOTF2PlayerState_BP_C*>(AnathemaPlayer->PlayerState);
            if (AnathemaPlayerState) {
                EHexLoadingState LoadingState = AnathemaPlayerState->LoadingState;
                UEquipmentManagerComponent* EquipmentManager = AnathemaPlayerState->EquipmentManagerComponent;
                //ranged weapons from AnathemaPlayerState around 0x450
                bool bPlayerNameSet = AnathemaPlayerState->bPlayerNameSet;
                UInventoryComponent* InventoryComponent = AnathemaPlayerState->InventoryComponent;
                UAIFactionComponent* AIFactionComponent = AnathemaPlayerState->AIFactionComponent;
                UHexDialogueComponent* DialogueComponent = AnathemaPlayerState->DialogueComponent;

                //DeveloperMenuSubsystem->DevSettings;

                EHexLoadingState loadingState = AnathemaPlayerState->LoadingState;

                if (loadingState == EHexLoadingState::Loading && !isHUDReady) {
                    if (HLP->PlayerController->MyHUD->IsA(ALOTF2HUD::StaticClass())) {
                        auto hud = static_cast<ALOTF2HUD*>(HLP->PlayerController->MyHUD);

                        void** HUDVFTable = hud->Vft;
                        DWORD HUDProtect = 0;
                        VirtualProtect(&HUDVFTable[Offsets::HUDPostRenderIdx], 8, PAGE_EXECUTE_READWRITE, &HUDProtect);
                        HUDPostRenderOriginal = reinterpret_cast<decltype(HUDPostRenderOriginal)>(HUDVFTable[Offsets::HUDPostRenderIdx]);
                        HUDVFTable[Offsets::HUDPostRenderIdx] = &HUDPostRenderHook;
                        VirtualProtect(&HUDVFTable[Offsets::HUDPostRenderIdx], 8, HUDProtect, 0);

                        isHUDReady = true;

                        cout << "HUD hook is done" << endl;
                    }
                }
            }
        }
    }

    ViewportPostRenderOriginal(vcli, canvas);
}


bool HkShouldCreateDeveloperMenuSubsystem(USubsystem* thiz, UObject* outer) {
    return true;
}

void HkInitDeveloperMenuSubsystem(USubsystem* thiz, FSubsystemCollectionBase* subbase) {
    OInitializeDeveloperMenuSubsystem(thiz, subbase);
}



void HkProcessEvent(UObject* thiz, UFunction* function, void* parms) {

    if (function->GetFullName() == "Function AnathemaPlayerCharacterController_BP.AnathemaPlayerCharacterController_BP_C.ReceiveBeginPlay" && !isViewportReady) {

        cout << "Player ReceiveBeginPlay called" << endl;

        font = GetFont();

        AAnathemaPlayerCharacterController_BP_C* PCTRL = static_cast<AAnathemaPlayerCharacterController_BP_C*>(thiz);

        HLP = static_cast<UHexLocalPlayer*>(PCTRL->Player);
        if (HLP) {
            GWorld = static_cast<UWorld*>(HLP->PlayerController->MyHUD->Outer->Outer);


            UGameViewportClient* viewport = HLP->ViewportClient;
            void** ViewportVFTable = viewport->Vft;
            DWORD ViewportProtect = 0;
            VirtualProtect(&ViewportVFTable[Offsets::ViewportPostRenderIdx], 8, PAGE_EXECUTE_READWRITE, &ViewportProtect);
            ViewportPostRenderOriginal = reinterpret_cast<decltype(ViewportPostRenderOriginal)>(ViewportVFTable[Offsets::ViewportPostRenderIdx]);
            ViewportVFTable[Offsets::ViewportPostRenderIdx] = &ViewportPostRenderHook;
            VirtualProtect(&ViewportVFTable[Offsets::ViewportPostRenderIdx], 8, ViewportProtect, 0);

            isViewportReady = true;

            cout << "Viewport hook is done" << endl;

            //if (!gameplayStatics) {
                //std::vector<void*> results = memoryManager.PatternScan("E8 ?? ?? ?? ?? 48 8B D8 48 39 75 30 74 15");

                //if (!results.empty())
                //{
                //    // Assuming you want the first result, which should be the address of StaticConstructObject_Internal
                //    void* foundAddress = results[0];
                //    std::cout << "Found StaticConstructObject_Internal at address: " << foundAddress << std::endl;
                //    StaticConstructDone = true;
                //}
                //else
                //{
                //    std::cout << "StaticConstructObject_Internal not found!" << std::endl;
                //}

                //gameplayStatics = UObject::FindObject<UGameplayStatics>("GameplayStatics Engine.Default__GameplayStatics");

            //}
        }

    }

    if (function->GetName() == "OnQuestStateCompleted" && thiz->IsA(UQuest::StaticClass())) {

        UQuest* completedQuest = static_cast<UQuest*>(thiz);
        Params::UQuest_OnQuestStateCompleted_Params* qscp = static_cast<Params::UQuest_OnQuestStateCompleted_Params*>(parms);
        UQuestState* completedQuestState = qscp->QuestState;
        auto tstr = completedQuest->QuestId.ToString();
        lastChangedQuest = std::wstring(tstr.begin(), tstr.end());

    }

    if (function->GetName() == "OnQuestStatusChanged" && thiz->IsA(UQuestDirector::StaticClass())) {

        UQuest* changedQuest = static_cast<UQuest*>(thiz);
        Params::UQuestDirector_OnQuestStatusChanged_Params* qscp = reinterpret_cast<Params::UQuestDirector_OnQuestStatusChanged_Params*>(parms);
        UQuest* completedQuest = qscp->Quest;
        auto tstr = completedQuest->QuestId.ToString();
        lastCompletedQuest = std::wstring(tstr.begin(), tstr.end());
    }

    if (thiz->IsA(UQuestDirector::StaticClass()) && thiz->Outer->IsA(UWorld::StaticClass())) {
        QuestDirector = static_cast<UQuestDirector*>(thiz);
    }

    if (thiz->IsA(UDeveloperMenuSubsystem::StaticClass()) || thiz->IsA(UDeveloperMenuSettings::StaticClass()) || thiz->IsA(UDeveloperMenuSettingsRuntime::StaticClass()) || thiz->IsA(UHexDeveloperSettings::StaticClass())) {
        cout << "DEVELOPER STUFF WAS CALLED. THIS WAS CALLED: " << thiz->GetFullName() << " FUNC: " << function->GetFullName() << endl;

    }

    OProcessEvent(thiz, function, parms);
}


/*
void Detach() {
    // Disable hooks
    MH_DisableHook(MH_ALL_HOOKS);
    MH_Uninitialize();

    // Detach the console
    FreeConsole();

    // Free any allocated resources and perform cleanup here...
    // TODO

    // Terminate the DLL
    // FreeLibraryAndExitThread(static_cast<HMODULE>(GetModuleHandle(NULL)), 0); //Implement somthing better
    // TODO
}
*/

void OnAttach() {


    InitGObjects();
    FName::InitGNames();
    MH_Initialize();

    void** Vft = nullptr;

    while (!UObject::GObjects->Objects) {
        Sleep(100);
    }
    Sleep(1000);
    std::cout << UObject::GObjects->GetByIndex(0) << std::endl;

    Vft = UObject::GObjects->GetByIndex(0)->Vft;

    std::cout << "vft: " << Vft << std::endl;


    //GWorld = reinterpret_cast<UWorld**>(uintptr_t(GetModuleHandle(0)) + Offsets::GWorld);
    //LPVOID** ProcessEvent = reinterpret_cast<LPVOID**>(reinterpret_cast<uintptr_t>(GetModuleHandle(0)) + Offsets::ProcessEvent);

    LPVOID** ProcessEvent = reinterpret_cast<LPVOID**>(reinterpret_cast<uintptr_t>(Vft[Offsets::ProcessEventIdx]));

    cout << "ProcessEvent: 0x" << ProcessEvent << endl;

    //GEngine = reinterpret_cast<UGameEngine**>(uintptr_t(GetModuleHandle(0)) + Offsets::GEngine);

    //GEngine = reinterpret_cast<UGameEngine**>(uintptr_t(GetModuleHandle(0)) + Offsets::GEngine);
    auto gameBase = (uint64_t)GetModuleHandle(0);


    UDeveloperMenuSubsystem* DMS = UObject::FindObject<UDeveloperMenuSubsystem>("DeveloperMenuSubsystem LOTF2.Default__DeveloperMenuSubsystem");

    LPVOID** ShouldCreateDeveloperMenuSubsystem = reinterpret_cast<LPVOID**>(reinterpret_cast<uintptr_t>(DMS->Vft[86]));

    MH_CreateHook(reinterpret_cast<LPVOID>(ShouldCreateDeveloperMenuSubsystem), reinterpret_cast<void*>(HkShouldCreateDeveloperMenuSubsystem), reinterpret_cast<PVOID*>(&OShouldCreateDeveloperMenuSubsystem));
    MH_EnableHook(reinterpret_cast<LPVOID>(ShouldCreateDeveloperMenuSubsystem));


    LPVOID** InitDeveloperMenuSubsystem = reinterpret_cast<LPVOID**>(reinterpret_cast<uintptr_t>(DMS->Vft[87]));


    // 86 bool (__fastcall *ShouldCreateSubsystem)(USubsystem *this, UObject *);
    // 87 void(__fastcall * Initialize)(USubsystem * this, FSubsystemCollectionBase*);

    //HexPersistentDataSubsystem

    //Default__DrawDebugGameplaySubsystem

    UEngineSubsystem* ES = UObject::FindObject<UEngineSubsystem>("EngineSubsystem Engine.Default__EngineSubsystem");

    LPVOID** InitEngineSubsystem = reinterpret_cast<LPVOID**>(reinterpret_cast<uintptr_t>(ES->Vft[87]));

    //MH_CreateHook(reinterpret_cast<LPVOID>(InitDeveloperMenuSubsystem), reinterpret_cast<void*>(HkInitDeveloperMenuSubsystem), reinterpret_cast<PVOID*>(&OInitDeveloperMenuSubsystem));
    //MH_EnableHook(reinterpret_cast<LPVOID>(InitDeveloperMenuSubsystem));

    std::cout << "I am become hook, hooker of worlds" << std::endl;

    while (!globals::mainWindow) {
        Sleep(50);
        globals::mainWindow = (HWND)FindWindow(0, "Lords of the Fallen  ");
    }

    //hooks::Init();
    //cout << "Got mainWindow" << endl;
    //isReady = true;
}




BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
    DisableThreadLibraryCalls(hModule);
    if (ulReasonForCall == DLL_PROCESS_ATTACH) {
        CreateConsoleWindow();
        globals::mainModule = hModule;
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnAttach, NULL, NULL, NULL);
    }
    //else if (ulReasonForCall == DLL_PROCESS_DETACH) {
    //    Detach();
    //}
    return TRUE;
}
