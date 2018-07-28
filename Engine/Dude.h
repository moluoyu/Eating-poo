#pragma once
#include "Graphics.h"
#include "Keyboard.h"
class Dude
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx);
	float GetX()const;
	float GetY()const;
	static float GetWidth();
	static float GetHeight();

	void Update( const Keyboard& kbd); 
private:
	float x = 400.0f;
	float y = 300.0f;
	static constexpr float speed = 1.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
};