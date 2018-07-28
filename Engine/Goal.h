#pragma once
#include "Graphics.h"
#include "Dude.h"
class Goal
{
public:
	Goal(float in_x,float in_y)
		:x(in_x),
		y(in_y)
	{

	}
	void Draw(Graphics& gfx)
	{

		gfx.DrawRectDim(int(x), int(y), int(dimension), int(dimension), c);
		//gfx.DrawRect(290, 100, 300, 130, c);


	}
	bool  TestCollision(const Dude& dude) const
	{
			const float duderight = dude.GetX() + dude.GetWidth();
			const float dudebottom = dude.GetY() + dude.GetHeight();
			const float pooright = x + dimension;
			const float poobottoom = y + dimension;

			return (duderight >= x &&
					dude.GetX() <= pooright &&
					dudebottom >= y &&
					dude.GetY() <= poobottoom);
	}
	void Respawn(float in_x,float in_y)
	{
		x = in_x;
		y = in_y;
	}
	void UpdateColors()
	{
		if (colorIncreasing)
		{
			if(c.GetR()>= 253)
			{
				colorIncreasing = false;
			}
			else
			{

				c = Color(c.GetR() + 2, c.GetG() + 4, c.GetB() + 4);
				
			}

		}
		else
		{
			if (c.GetR() <= 15)
			{
				colorIncreasing = true;
			}
			else
			{
				c = Color(c.GetR() - 2, c.GetG() - 4, c.GetB() - 4);

			}
		}

	}
private:
	Color c = {15,32,23};
	static constexpr float dimension = 40.0f;
	bool colorIncreasing = true;
	float x;
	float y;
};










