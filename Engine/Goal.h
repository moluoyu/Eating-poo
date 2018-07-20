#pragma once
#include "Graphics.h"
#include "Dude.h"
class Goal
{
public:
	Goal(int in_x,int in_y)
		:x(in_x),
		y(in_y)
	{

	}
	void Draw(Graphics& gfx)
	{

		gfx.DrawRectDim(x, y, dimension, dimension, c);
		//gfx.DrawRect(290, 100, 300, 130, c);


	}
	bool  TestCollision(const Dude& dude) const
	{
			const int duderight = dude.GetX() + dude.GetWidth();
			const int dudebottom = dude.GetY() + dude.GetHeight();
			const int pooright = x + dimension;
			const int poobottoom = y + dimension;

			return (duderight >= x &&
					dude.GetX() <= pooright &&
					dudebottom >= y &&
					dude.GetY() <= poobottoom);
	}
	void Respawn(int in_x,int in_y)
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
	static constexpr int dimension = 40;
	bool colorIncreasing = true;
	int x;
	int y;
};










