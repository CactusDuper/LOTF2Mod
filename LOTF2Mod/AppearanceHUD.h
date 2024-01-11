#pragma once

#include <Windows.h>

#include <fstream>
#include <ostream>
#include <streambuf>
#include <sstream>
#include "SDK.hpp"
#include <chrono>

class CustomHUD
{
public:
	bool ShouldDraw = true;
	CustomHUD(LPSTR windowName = LPSTR("MassEffect"))
	{
		_windowName = windowName;
	}
	virtual void Update(SDK::UCanvas* canvas)
	{
		_canvas = canvas;
	}
	virtual void Draw() = 0;

protected:
	SDK::UCanvas* _canvas;
	float textScale = 1.0f;
	float lineHeight = 12.0f;
	int yIndex;
	LPSTR _windowName;

	void SetTextScale()
	{
		HWND activeWindow = FindWindowA(NULL, _windowName);
		if (activeWindow)
		{
			RECT rcOwner;
			if (GetWindowRect(activeWindow, &rcOwner))
			{
				long width = rcOwner.right - rcOwner.left;
				long height = rcOwner.bottom - rcOwner.top;

				if (width > 2560 && height > 1440)
				{
					textScale = 2.0f;
				}
				else if (width > 1920 && height > 1080)
				{
					textScale = 1.5f;
				}
				else
				{
					textScale = 1.0f;
				}
				lineHeight = 12.0f * textScale;
			}
		}
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
	void RenderText(std::wstring msg, const float x, const float y, SDK::FLinearColor color, SDK::UFont* font)
	{
		if (_canvas)
		{
			std::wstring formattedValue = msg;// +str;
			_canvas->K2_DrawText(font, SDK::FString(formattedValue.c_str()), SDK::FVector2D{x, y}, SDK::FVector2D{ 1, 1 }, color, 1.0f, color, SDK::FVector2D{ 1, 1 }, false, false, false, color);

		}
	}



};

class AppearanceHUD : public CustomHUD
{
public:
	AppearanceHUD() : CustomHUD(LPSTR("MassEffect")) { }

	void Update(SDK::UCanvas* canvas, SDK::ALHUD* lhud)
	{

		SDK::ABP_CH_PC_Pino_C* pawn = static_cast<SDK::ABP_CH_PC_Pino_C*>(lhud->PlayerOwner->Pawn);
		__super::Update(canvas);
		_lhud = lhud;
		_pawn = pawn;
	}

	void Draw() override
	{
		if (!ShouldDraw) return;

		SetTextScale();
		yIndex = 3;

		SDK::UFont* font = SDK::UObject::FindObject<SDK::UFont>("Font RobotoDistanceField.RobotoDistanceField");
		SDK::FLinearColor RED = SDK::FLinearColor{ 1.0f, 0.f, 0.f, 1.0f };


		if (_pawn != nullptr) {
			//player->LevelLoaded;
			SDK::UCharacterMovementComponent* playerMoveComponent = _pawn->CharacterMovement;
			if (playerMoveComponent) {
				std::wstring formattedValuev = L" X: " + FormatFloat(playerMoveComponent->Velocity.X) + L"  Y: " + FormatFloat(playerMoveComponent->Velocity.Y) + L"  Z: " + FormatFloat(playerMoveComponent->Velocity.Z);// +str;
				std::wstring formattedValuea = L" X: " + FormatFloat(playerMoveComponent->Acceleration.X) + L"  Y: " + FormatFloat(playerMoveComponent->Acceleration.Y) + L"  Z: " + FormatFloat(playerMoveComponent->Acceleration.Z);// +str;
				std::wstring formattedValuel = L" X: " + FormatFloat(playerMoveComponent->LastUpdateLocation.X) + L"  Y: " + FormatFloat(playerMoveComponent->LastUpdateLocation.Y) + L"  Z: " + FormatFloat(playerMoveComponent->LastUpdateLocation.Z);// +str;

				RenderText(formattedValuev, 100, 100, RED, font);
				RenderText(formattedValuea, 100, 150, RED, font);
				RenderText(formattedValuel, 100, 200, RED, font);

				//DrawFVectorValuesOnHUD(HUD, playerMoveComponent->Velocity, 100, 100, font, L"Vel: ");
				//DrawFVectorValuesOnHUD(HUD, playerMoveComponent->Acceleration, 100, 100 + 20, font, L"Acc: ");
				//DrawFVectorValuesOnHUD(HUD, playerMoveComponent->LastUpdateLocation, 100, 100 + 40, font, L"Loc: ");
				//DrawEulerAnglesOnHUD(HUD, playerMoveComponent->LastUpdateRotation, 100 100 + 60, font, L"Rot: ");

			}
		}

	}

private:
	SDK::ALHUD* _lhud;
	SDK::ABP_CH_PC_Pino_C* _pawn;
};