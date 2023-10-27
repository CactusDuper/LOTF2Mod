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


typedef void(__thiscall* ProcessEvent)(UObject*, UFunction*, void*);
typedef void(__thiscall* PostRender_V)(UGameViewportClient* thisObject, UCanvas* Canvas);
typedef void(__thiscall* PostRender_H)(AHUD* thisObject);

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
PostRender_V ViewportPostRenderOriginal = nullptr;
PostRender_H HUDPostRenderOriginal = nullptr;


bool isViewportReady = false;
bool isHUDReady = false;
bool StaticConstructDone = false;







void colStuff(UCanvas* canvas) {

    //UFont* font = GetFont();

    //for (int i = 0; i < UObject::GObjects->Num(); i++)
    //{
    //    UObject* Obj = UObject::GObjects->GetByIndex(i);

    //    if (!Obj)
    //        continue;

    //    if (Obj->IsA(UShapeComponent::StaticClass()) && !Obj->IsDefaultObject())
    //    {
    //        auto shapeComponent = static_cast<UShapeComponent*>(Obj);
    //        shapeComponent->SetHiddenInGame(showOutlines, 1);

    //        if (showNames) {
    //            // Get the actor containing the shape component
    //            AActor* ownerActor = shapeComponent->GetOwner();
    //            if (ownerActor) {
    //                // Get the actor's name

    //                auto tst = ownerActor->Name.ToString();
    //                FString actorName = std::wstring(tst.begin(), tst.end()).c_str();

    //                // Get the location of the shape component in the world
    //                FVector componentLocation = shapeComponent->K2_GetComponentLocation();

    //                // Project the world location to screen coordinates
    //                FVector screenLocation3d = canvas->K2_Project(componentLocation);
    //                FVector2D screenLocation = { screenLocation3d.X, screenLocation3d.Y };

    //                FLinearColor textColor = RED;
    //                //FVector2D textSize = canvas->K2_TextSize(font, actorName, FVector2D(1.0f, 1.0f));
    //                //FVector2D textLocation = screenLocation - FVector2D(textSize.X / 2, -10.0f);  // Adjust as needed
    //                canvas->K2_DrawText(font, actorName, screenLocation, FVector2D(1.0f, 1.0f), textColor, 1, textColor, { 0, 0 }, 0, 0, 0, textColor);
    //            }
    //        }
    //    }

    //    if (showOutlines) {
    //        if (Obj->IsA(UBoxComponent::StaticClass()) && !Obj->IsDefaultObject()) {

    //            auto boxComponent = static_cast<UBoxComponent*>(Obj);

    //            DrawESPCube(boxComponent->K2_GetComponentLocation(), canvas, boxComponent->BoxExtent);
    //        }
    //    }
    //}

}







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


        float vs_x = 0.71f * ScreenWidth;
        float vs_y = 0.94f * ScreenHeight;

        float ts_x = 0.16f * ScreenWidth;
        float ts_y = 0.94f * ScreenHeight;

        float qs_x = 0.91f * ScreenWidth;
        float qs_y = 0.83f * ScreenHeight;

        float vr_x = 0.79f * ScreenWidth;
        float vr_y = 0.83f * ScreenHeight;

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


void HkProcessEvent(UObject* thiz, UFunction* function, void* parms) {

    //cout << "ayo hooking" << endl;

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
        cout << "DEVELOPER SHIT WAS CALLED. THIS WAS CALLED: " << thiz->GetFullName() << " FUNC: " << function->GetFullName() << endl;

    }

    OProcessEvent(thiz, function, parms);
}



//void Detach() {
//    // Disable the hooks and perform any necessary cleanup
//    MH_DisableHook(MH_ALL_HOOKS);
//    MH_Uninitialize();
//
//    // Detach the console
//    FreeConsole();
//
//    // Free any allocated resources and perform cleanup here...
//
//    // Terminate the DLL
//    FreeLibraryAndExitThread(static_cast<HMODULE>(GetModuleHandle(NULL)), 0);
//}

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

    MH_CreateHook(reinterpret_cast<LPVOID>(ProcessEvent), reinterpret_cast<void*>(HkProcessEvent), reinterpret_cast<PVOID*>(&OProcessEvent));
    MH_EnableHook(reinterpret_cast<LPVOID>(ProcessEvent));

    std::cout << "I am become hook, hooker of worlds" << std::endl;
    //isReady = true;
}




BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
    DisableThreadLibraryCalls(hModule);
    if (ulReasonForCall == DLL_PROCESS_ATTACH) {
        CreateConsoleWindow();
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnAttach, NULL, NULL, NULL);
    }
    //else if (ulReasonForCall == DLL_PROCESS_DETACH) {
    //    Detach();
    //}
    return TRUE;
}
