#pragma once

#include "SDK.hpp"

#include <Windows.h>
#include "MinHook.h"

#include <iostream>
#include <vector>
#include <deque>
#include <unordered_map>
#include <string>
#include <numeric>
#include <chrono>
#include <algorithm>
#include <cmath>

#define PI 3.14159265358979323846

#define CC(Object, ClassType) \
Object->IsA(ClassType::StaticClass())

#define CHECK_AND_CAST(Object, ClassType) \
(Object->IsA(ClassType::StaticClass()) ? static_cast<ClassType*>(Object) : nullptr)

#define CAST_(Object, ClassType) \
static_cast<ClassType*>(Object)

#define CAC(Object, ClassType, Function) \
if (Object->IsA(ClassType::StaticClass())){ \
auto x = CAST_(Object, ClassType); \
Function(x, HUD, font); \
}

using namespace SDK;

FLinearColor RED = { 1.0f, 0.0f, 0.0f, 1.0f };
FLinearColor GREEN = { 0.0f, 1.0f, 0.0f, 1.0f };
FLinearColor BLUE = { 0.0f, 0.0f, 1.0f, 1.0f };
FLinearColor WHITE = { 1.0f, 1.0f, 1.0f, 1.0f };
FLinearColor BLACK = { 0.0f, 0.0f, 0.0f, 1.0f };
FLinearColor GRAY = { 0.5f, 0.5f, 0.5f, 1.0f };
FLinearColor LIGHT_GRAY = { 0.7f, 0.7f, 0.7f, 1.0f };
FLinearColor DARK_GRAY = { 0.3f, 0.3f, 0.3f, 1.0f };
FLinearColor YELLOW = { 1.0f, 1.0f, 0.0f, 1.0f };
FLinearColor ORANGE = { 1.0f, 0.5f, 0.0f, 1.0f };
FLinearColor PURPLE = { 0.5f, 0.0f, 1.0f, 1.0f };
FLinearColor PINK = { 1.0f, 0.0f, 0.5f, 1.0f };
FLinearColor CYAN = { 0.0f, 1.0f, 1.0f, 1.0f };
FLinearColor MAGENTA = { 1.0f, 0.0f, 1.0f, 1.0f };
FLinearColor LIME = { 0.5f, 1.0f, 0.0f, 1.0f };
FLinearColor TEAL = { 0.0f, 0.5f, 0.5f, 1.0f };
FLinearColor BROWN = { 0.6f, 0.3f, 0.0f, 1.0f };
FLinearColor BEIGE = { 0.9f, 0.8f, 0.6f, 1.0f };
FLinearColor GOLD = { 1.0f, 0.84f, 0.0f, 1.0f };
FLinearColor SILVER = { 0.75f, 0.75f, 0.75f, 1.0f };
FLinearColor INDIGO = { 0.29f, 0.0f, 0.51f, 1.0f };
FLinearColor AQUA = { 0.0f, 1.0f, 1.0f, 1.0f };
FLinearColor SALMON = { 0.98f, 0.5f, 0.45f, 1.0f };
FLinearColor LAVENDER = { 0.71f, 0.49f, 0.86f, 1.0f };
FLinearColor CORAL = { 1.0f, 0.5f, 0.31f, 1.0f };
FLinearColor TURQUOISE = { 0.25f, 0.88f, 0.82f, 1.0f };
FLinearColor CHOCOLATE = { 0.48f, 0.25f, 0.0f, 1.0f };
FLinearColor OLIVE = { 0.5f, 0.5f, 0.0f, 1.0f };
FLinearColor MAROON = { 0.5f, 0.0f, 0.0f, 1.0f };
FLinearColor NAVY = { 0.0f, 0.0f, 0.5f, 1.0f };
FLinearColor LILAC = { 0.78f, 0.64f, 0.78f, 1.0f };
FLinearColor MINT = { 0.44f, 0.98f, 0.61f, 1.0f };
FLinearColor ROSE = { 1.0f, 0.41f, 0.71f, 1.0f };
FLinearColor LEMON = { 1.0f, 1.0f, 0.13f, 1.0f };
FLinearColor RUBY = { 0.88f, 0.07f, 0.37f, 1.0f };
FLinearColor SLATE = { 0.44f, 0.5f, 0.56f, 1.0f };
FLinearColor PERIWINKLE = { 0.8f, 0.8f, 1.0f, 1.0f };
FLinearColor AUBERGINE = { 0.44f, 0.11f, 0.28f, 1.0f };
FLinearColor PLUM = { 0.56f, 0.27f, 0.52f, 1.0f };
FLinearColor BEET = { 0.44f, 0.0f, 0.11f, 1.0f };
FLinearColor JADE = { 0.0f, 0.66f, 0.42f, 1.0f };
FLinearColor TANGERINE = { 1.0f, 0.56f, 0.0f, 1.0f };
FLinearColor CHARCOAL = { 0.21f, 0.27f, 0.31f, 1.0f };
FLinearColor PEACH = { 1.0f, 0.85f, 0.73f, 1.0f };
FLinearColor LILY = { 0.96f, 0.92f, 0.93f, 1.0f };
FLinearColor MANGO = { 1.0f, 0.63f, 0.0f, 1.0f };
FLinearColor BRONZE = { 0.8f, 0.5f, 0.2f, 1.0f };
FLinearColor IVORY = { 1.0f, 1.0f, 0.94f, 1.0f };
FLinearColor ROSEWOOD = { 0.4f, 0.0f, 0.04f, 1.0f };
FLinearColor SKY_BLUE = { 0.53f, 0.81f, 0.98f, 1.0f };
FLinearColor LILY_PAD = { 0.11f, 0.35f, 0.22f, 1.0f };
FLinearColor SUNFLOWER = { 0.94f, 0.9f, 0.16f, 1.0f };
FLinearColor SEAFOAM = { 0.47f, 0.87f, 0.73f, 1.0f };



FColor fRED = { 1.0f, 0.0f, 255, 255 };
FColor fGREEN = { 0, 255, 0, 255 };
FColor fBLUE = { 255, 0, 0, 255 };
FColor fWHITE = { 255, 255, 255, 255 };
FColor fBLACK = { 0, 0, 0, 255 };
FColor fGRAY = { 128, 128, 128, 255 };
FColor fLIGHT_GRAY = { 179, 179, 179, 255 };
FColor fDARK_GRAY = { 77, 77, 77, 255 };
FColor fYELLOW = { 0, 255, 255, 255 };
FColor fORANGE = { 0, 128, 255, 255 };
FColor fPURPLE = { 255, 0, 128, 255 };
FColor fPINK = { 128, 0, 255, 255 };
FColor fCYAN = { 255, 255, 0, 255 };
FColor fMAGENTA = { 255, 0, 255, 255 };
FColor fLIME = { 0, 255, 128, 255 };
FColor fTEAL = { 128, 128, 0, 255 };
FColor fBROWN = { 0, 0, 153, 255 };
FColor fBEIGE = { 229, 204, 153, 255 };
FColor fGOLD = { 255, 216, 0, 255 };
FColor fSILVER = { 192, 192, 192, 255 };
FColor fINDIGO = { 130, 0, 74, 255 };
FColor fAQUA = { 255, 255, 0, 255 };
FColor fSALMON = { 255, 128, 116, 255 };
FColor fLAVENDER = { 219, 125, 220, 255 };
FColor fCORAL = { 255, 128, 80, 255 };
FColor fTURQUOISE = { 82, 224, 204, 255 };
FColor fCHOCOLATE = { 122, 64, 0, 255 };
FColor fOLIVE = { 128, 128, 0, 255 };
FColor fMAROON = { 128, 0, 0, 255 };
FColor fNAVY = { 0, 0, 128, 255 };
FColor fLILAC = { 200, 163, 200, 255 };
FColor fMINT = { 113, 250, 157, 255 };
FColor fROSE = { 255, 105, 181, 255 };
FColor fLEMON = { 255, 255, 33, 255 };
FColor fRUBY = { 224, 18, 94, 255 };
FColor fSLATE = { 112, 128, 140, 255 };
FColor fPERIWINKLE = { 204, 204, 255, 255 };
FColor fAUBERGINE = { 113, 28, 71, 255 };
FColor fPLUM = { 143, 69, 133, 255 };
FColor fBEET = { 113, 0, 28, 255 };
FColor fJADE = { 0, 168, 107, 255 };
FColor fTANGERINE = { 255, 140, 0, 255 };
FColor fCHARCOAL = { 54, 69, 79, 255 };
FColor fPEACH = { 255, 216, 186, 255 };
FColor fLILY = { 245, 234, 238, 255 };
FColor fMANGO = { 255, 160, 0, 255 };
FColor fBRONZE = { 204, 128, 51, 255 };
FColor fIVORY = { 255, 255, 240, 255 };
FColor fROSEWOOD = { 102, 0, 10, 255 };
FColor fSKY_BLUE = { 134, 207, 255, 255 };
FColor fLILY_PAD = { 28, 89, 56, 255 };
FColor fSUNFLOWER = { 240, 230, 41, 255 };
FColor fSEAFOAM = { 120, 222, 186, 255 };



// Function to convert EHexLoadingState enum to a string
std::wstring EnumToString(EHexLoadingState loadingState)
{
    switch (loadingState)
    {
    case EHexLoadingState::None:
        return L"None";
    case EHexLoadingState::Loading:
        return L"Loading";
    case EHexLoadingState::Loaded:
        return L"Loaded";
    default:
        return L"Invalid"; // Handle invalid enum values
    }
}



double CustomDistance(const FVector& A, const FVector& B) {
    double XDiff = A.X - B.X;
    double YDiff = A.Y - B.Y;
    double ZDiff = A.Z - B.Z;

    return sqrt(XDiff * XDiff + YDiff * YDiff + ZDiff * ZDiff);
}

std::wstring StringToWString(const std::string& tempString) {


    // Get the required buffer size for the wide string
    int bufferSize = MultiByteToWideChar(CP_UTF8, 0, tempString.c_str(), -1, NULL, 0);

    // Allocate buffer
    wchar_t* wstr = new wchar_t[bufferSize];

    // Perform the actual conversion
    MultiByteToWideChar(CP_UTF8, 0, tempString.c_str(), -1, wstr, bufferSize);

    // Create a std::wstring from the wide character array
    std::wstring wstringResult(wstr);

    delete[] wstr;


    return wstringResult;
}

void CreateConsoleWindow() {
    // Allocate a new console window
    AllocConsole();

    // Attach the new console to the current process
    AttachConsole(GetCurrentProcessId());

    // Redirect standard input to the console
    FILE* pConsoleInput;
    if (freopen_s(&pConsoleInput, "CONIN$", "r", stdin) != 0) {
        // Handle error (if any)
    }

    // Redirect standard output to the console
    FILE* pConsoleOutput;
    if (freopen_s(&pConsoleOutput, "CONOUT$", "w", stdout) != 0) {
        // Handle error (if any)
    }

    // Redirect standard error to the console
    FILE* pConsoleError;
    if (freopen_s(&pConsoleError, "CONOUT$", "w", stderr) != 0) {
        // Handle error (if any)
    }
}

UFont* GetFont() {
    static UFont* font;
    if (!font)
        font = UObject::FindObject<UFont>("Font Roboto.Roboto");
    //font = UObject::FindObject<UFont>("Font RobotoDistanceField.RobotoDistanceField");

    return font;
}


// Function to convert a quaternion to Euler angles in degrees
FVector ConvertQuatToEuler(const FQuat& quat)
{
    FVector euler;

    // Roll (X-axis rotation)
    euler.X = atan2(2 * (quat.X * quat.Y + quat.W * quat.Z), quat.W * quat.W + quat.X * quat.X - quat.Y * quat.Y - quat.Z * quat.Z) * 180.0f / PI;

    // Pitch (Y-axis rotation)
    euler.Y = asin(2 * (quat.W * quat.Y - quat.X * quat.Z)) * 180.0f / PI;

    // Yaw (Z-axis rotation)
    euler.Z = atan2(2 * (quat.W * quat.X + quat.Y * quat.Z), quat.W * quat.W - quat.X * quat.X - quat.Y * quat.Y + quat.Z * quat.Z) * 180.0f / PI;

    return euler;
}

// Function to format a float value with a fixed width of 8 characters and trailing zeros
std::wstring FormatFloat(float value)
{
    // Convert the float to a string with a fixed number of decimal places
    std::ostringstream ss;
    ss << std::fixed << std::setprecision(2) << value;

    // Get the string representation of the float
    std::string strValue = ss.str();

    // Add trailing zeros to reach a total width of 8 characters
    if (strValue.length() < 8)
    {
        strValue.append(8 - strValue.length(), '0');
    }

    // Convert the formatted string to a wide string
    std::wstring wstrValue(strValue.begin(), strValue.end());

    return wstrValue;
}

// Function to draw formatted Euler angles on the HUD
void DrawEulerAnglesOnHUD(AHUD* HUD, const FQuat& quat, int32 x, int32 y, UFont* font, FLinearColor color, float scale, const std::wstring& str = L"")
{
    // Convert the quaternion to Euler angles
    FVector euler = ConvertQuatToEuler(quat);

    std::wstring formattedValue = str + L" R: " + FormatFloat(euler.X) + L"  P: " + FormatFloat(euler.Y);// +str;//L"  Y: " + FormatFloat(euler.Z) + str;
    HUD->DrawText(FString(formattedValue.c_str()), color, (float)x, (float)y, font, scale, false);
}

// Function to draw formatted FVector values on the HUD
void DrawFVectorValuesOnHUD(AHUD* HUD, FVector vector, int32 x, int32 y, UFont* font, FLinearColor color, float scale, const std::wstring& str = L"")
{

    std::wstring formattedValue = str + L" X: " + FormatFloat(vector.X) + L"  Y: " + FormatFloat(vector.Y) + L"  Z: " + FormatFloat(vector.Z);// +str;
    HUD->DrawText(FString(formattedValue.c_str()), color, (float)x, (float)y, font, scale, false);

}

// Function to draw formatted Euler angles on the HUD
void DrawEulerAnglesOnCanvas(UCanvas* canvas, const FQuat& quat, float x, float y, UFont* font, FLinearColor color, float scale, const std::wstring& str = L"")
{
    // Convert the quaternion to Euler angles
    FVector euler = ConvertQuatToEuler(quat);

    std::wstring formattedValue = str + L" R: " + FormatFloat(euler.X) + L"  P: " + FormatFloat(euler.Y);// +str;//L"  Y: " + FormatFloat(euler.Z) + str;
    canvas->K2_DrawText(font, FString(formattedValue.c_str()), { x, y }, { scale, scale }, color, 1, color, { 0, 0 }, 0, 1, 0, color);
}

// Function to draw formatted FVector values on the HUD
void DrawFVectorValuesOnCanvas(UCanvas* canvas, FVector vector, float x, float y, UFont* font, FLinearColor color, float scale, const std::wstring& str = L"")
{
    std::wstring formattedValue = str + L" X: " + std::to_wstring(vector.X) + L"  Y: " + std::to_wstring(vector.Y) + L"  Z: " + std::to_wstring(vector.Z);
    canvas->K2_DrawText(font, FString(formattedValue.c_str()), { x, y }, { scale, scale }, color, 1, color, { 0, 0 }, 0, 1, 0, color);
}





//inline float Red = 0.255f;
//inline float Blue = 0.0f;
//inline float Green = 0.0f;
//inline float Alpha = 0.255f;
//inline float Thickness = 0.75f;
//
//// Define the indices for different face pairs
//const int FaceIndices[][2] = {
//    {0, 1}, {1, 2}, {2, 3}, {3, 0},
//    {4, 5}, {5, 6}, {6, 7}, {7, 4},
//    {0, 4}, {1, 5}, {2, 6}, {3, 7}
//};
//
//inline void DrawESPCube(FVector location, UCanvas* canvas, FVector const& Box)
//{
//    auto Center = location;
//    auto Color = FLinearColor(Red, Green, Blue, Alpha);
//
//    for (const auto& indices : FaceIndices) {
//        FVector vector1(Center + FVector(Box.X, Box.Y, Box.Z));
//        FVector vector2(Center + FVector(Box.X, -Box.Y, Box.Z));
//        vector1 = canvas->K2_Project(vector1);
//        vector2 = canvas->K2_Project(vector2);
//
//        if (vector1.X < canvas->SizeX && vector1.Y < canvas->SizeY &&
//            vector2.X < canvas->SizeX && vector2.Y < canvas->SizeY &&
//            vector1.X > -50 && vector1.Y > -50 &&
//            vector2.X > -50 && vector2.Y > -50) {
//            canvas->K2_DrawLine(FVector2D(vector1.X, vector1.Y), FVector2D(vector2.X, vector2.Y), Thickness, Color);
//        }
//    }
//}


inline float Red = .255f;
inline float Blue = 0;
inline float Green = 0;
inline float Alpha = .255f;
inline float Thickness = 2.0f;

inline void DrawESPCube(FVector location, UCanvas* canvas, FVector const& Box)
{
    auto Center = location;
    auto Color = FLinearColor(Red, Green, Blue, Alpha);

    auto ProjectAndDrawLine = [&](FVector point1, FVector point2) {
        FVector projectedPoint1 = canvas->K2_Project(point1);
        FVector projectedPoint2 = canvas->K2_Project(point2);

        if (projectedPoint1.X < canvas->SizeX && projectedPoint1.Y < canvas->SizeY && projectedPoint1.X < canvas->SizeX && projectedPoint1.Y < canvas->SizeY)
        {
            //if (vector.X > -50 && vector.Y > -50 && vector1.X > -50 && vector1.Y > -50)
            //{
                canvas->K2_DrawLine(FVector2D(projectedPoint1.X, projectedPoint1.Y), FVector2D(projectedPoint2.X, projectedPoint2.Y), Thickness, Color);
            //}
        }
        };

    // Draw lines between points
    ProjectAndDrawLine(Center + FVector(Box.X, Box.Y, Box.Z), Center + FVector(Box.X, -Box.Y, Box.Z));
    ProjectAndDrawLine(Center + FVector(Box.X, -Box.Y, Box.Z), Center + FVector(-Box.X, -Box.Y, Box.Z));
    ProjectAndDrawLine(Center + FVector(-Box.X, -Box.Y, Box.Z), Center + FVector(-Box.X, Box.Y, Box.Z));
    ProjectAndDrawLine(Center + FVector(-Box.X, Box.Y, Box.Z), Center + FVector(Box.X, Box.Y, Box.Z));
    ProjectAndDrawLine(Center + FVector(Box.X, Box.Y, -Box.Z), Center + FVector(Box.X, -Box.Y, -Box.Z));
    ProjectAndDrawLine(Center + FVector(Box.X, -Box.Y, -Box.Z), Center + FVector(-Box.X, -Box.Y, -Box.Z));
    ProjectAndDrawLine(Center + FVector(-Box.X, -Box.Y, -Box.Z), Center + FVector(-Box.X, Box.Y, -Box.Z));
    ProjectAndDrawLine(Center + FVector(-Box.X, Box.Y, -Box.Z), Center + FVector(Box.X, Box.Y, -Box.Z));
    ProjectAndDrawLine(Center + FVector(Box.X, Box.Y, Box.Z), Center + FVector(Box.X, Box.Y, -Box.Z));
    ProjectAndDrawLine(Center + FVector(Box.X, Box.Y, -Box.Z), Center + FVector(Box.X, -Box.Y, -Box.Z));
    ProjectAndDrawLine(Center + FVector(Box.X, -Box.Y, -Box.Z), Center + FVector(-Box.X, -Box.Y, -Box.Z));
    ProjectAndDrawLine(Center + FVector(-Box.X, -Box.Y, -Box.Z), Center + FVector(-Box.X, Box.Y, -Box.Z));
    ProjectAndDrawLine(Center + FVector(-Box.X, Box.Y, -Box.Z), Center + FVector(Box.X, Box.Y, -Box.Z));
}


void DrawESPCube(FVector Origin, AHUD* HUD, FVector Extent, FLinearColor LineColor, float LineThickness)
{
    // Check if HUD is valid
    if (HUD == nullptr)
    {
        return;
    }

    // Calculate the corners of the cube
    FVector Min = Origin - Extent;
    FVector Max = Origin + Extent;

    // Get the screen size
    FVector2D ScreenSize = { HUD->Canvas->SizeX, HUD->Canvas->SizeY };

    // Convert world coordinates to screen coordinates
    FVector2D MinScreen;
    FVector2D MaxScreen;

    if (HUD->GetOwningPlayerController()->ProjectWorldLocationToScreen(Min, &MinScreen, 0) && HUD->GetOwningPlayerController()->ProjectWorldLocationToScreen(Max, &MaxScreen, 0))
    {
        // Draw the wireframe cube
        HUD->DrawLine(MinScreen.X, MinScreen.Y, MaxScreen.X, MinScreen.Y, LineColor, LineThickness);
        HUD->DrawLine(MinScreen.X, MinScreen.Y, MinScreen.X, MaxScreen.Y, LineColor, LineThickness);
        HUD->DrawLine(MaxScreen.X, MinScreen.Y, MaxScreen.X, MaxScreen.Y, LineColor, LineThickness);
        HUD->DrawLine(MinScreen.X, MaxScreen.Y, MaxScreen.X, MaxScreen.Y, LineColor, LineThickness);

        HUD->DrawLine(MinScreen.X, MinScreen.Y, MinScreen.X, MinScreen.Y, LineColor, LineThickness);
        HUD->DrawLine(MinScreen.X, MaxScreen.Y, MaxScreen.X, MaxScreen.Y, LineColor, LineThickness);
        HUD->DrawLine(MaxScreen.X, MinScreen.Y, MaxScreen.X, MaxScreen.Y, LineColor, LineThickness);
        HUD->DrawLine(MaxScreen.X, MinScreen.Y, MaxScreen.X, MaxScreen.Y, LineColor, LineThickness);
    }
}



inline void DrawESPCube(FVector Location, UCanvas* Canvas, FVector const& Box, FLinearColor LineColor, float LineThickness)
{
    auto Center = Location;

    auto ProjectAndDrawLine = [&](FVector Point1, FVector Point2) {
        FVector ProjectedPoint1 = Canvas->K2_Project(Point1);
        FVector ProjectedPoint2 = Canvas->K2_Project(Point2);

        if (ProjectedPoint1.X < Canvas->SizeX && ProjectedPoint1.Y < Canvas->SizeY &&
            ProjectedPoint2.X < Canvas->SizeX && ProjectedPoint2.Y < Canvas->SizeY)
        {
            Canvas->K2_DrawLine(FVector2D(ProjectedPoint1.X, ProjectedPoint1.Y), FVector2D(ProjectedPoint2.X, ProjectedPoint2.Y), LineThickness, LineColor);
        }
        };

    // Calculate the vertices of the 3D box
    FVector BoxVertices[8];
    BoxVertices[0] = Center + FVector(Box.X, Box.Y, Box.Z);
    BoxVertices[1] = Center + FVector(Box.X, -Box.Y, Box.Z);
    BoxVertices[2] = Center + FVector(-Box.X, -Box.Y, Box.Z);
    BoxVertices[3] = Center + FVector(-Box.X, Box.Y, Box.Z);
    BoxVertices[4] = Center + FVector(Box.X, Box.Y, -Box.Z);
    BoxVertices[5] = Center + FVector(Box.X, -Box.Y, -Box.Z);
    BoxVertices[6] = Center + FVector(-Box.X, -Box.Y, -Box.Z);
    BoxVertices[7] = Center + FVector(-Box.X, Box.Y, -Box.Z);

    // Draw the lines to connect the vertices
    ProjectAndDrawLine(BoxVertices[0], BoxVertices[1]);
    ProjectAndDrawLine(BoxVertices[1], BoxVertices[2]);
    ProjectAndDrawLine(BoxVertices[2], BoxVertices[3]);
    ProjectAndDrawLine(BoxVertices[3], BoxVertices[0]);

    ProjectAndDrawLine(BoxVertices[4], BoxVertices[5]);
    ProjectAndDrawLine(BoxVertices[5], BoxVertices[6]);
    ProjectAndDrawLine(BoxVertices[6], BoxVertices[7]);
    ProjectAndDrawLine(BoxVertices[7], BoxVertices[4]);

    ProjectAndDrawLine(BoxVertices[0], BoxVertices[4]);
    ProjectAndDrawLine(BoxVertices[1], BoxVertices[5]);
    ProjectAndDrawLine(BoxVertices[2], BoxVertices[6]);
    ProjectAndDrawLine(BoxVertices[3], BoxVertices[7]);
}


//void DrawBrushDetails(ABrush* Brush, AHUD* HUD, FLinearColor LineColor, float LineThickness)
//{
//    // Iterate through the polygons of the brush
//    for (int32 PolyIdx = 0; PolyIdx < Brush->Brush->Polys->Element.Num(); ++PolyIdx)
//    {
//        const FPoly* Poly = &Brush->Brush->Polys->Element[PolyIdx];
//
//        if (Poly->Vertices.Num() > 2)
//        {
//            FVector Vertex0 = Poly->Vertices[0];
//            FVector Vertex1 = Poly->Vertices[1];
//
//            // Draw the edges of the polygon
//            for (int32 VertexIdx = 2; VertexIdx < Poly->Vertices.Num(); ++VertexIdx)
//            {
//                const FVector Vertex2 = Poly->Vertices[VertexIdx];
//                DrawESPCube(Vertex0, HUD->Canvas, Vertex1 - Vertex0, LineColor, LineThickness);
//                Vertex0 = Vertex1;
//                Vertex1 = Vertex2;
//            }
//        }
//    }
//}
