#pragma once
#include "Graphics.h"
#include "Keyboard.h"
class Dude
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx);
	int GetX()const;
	int GetY()const;
	static int GetWidth();
	static int GetHeight();

	void Update( const Keyboard& kbd); 
private:
	int x = 400;
	int y = 300;
	static constexpr int width = 20;
	static constexpr int height = 20;
	static constexpr int speed = 1;
};