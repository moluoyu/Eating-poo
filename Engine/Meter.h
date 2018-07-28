#pragma once
#include "Colors.h"
#include "Graphics.h"
/************************************************************************/
/* 左上角红色长方形增长速度 类
 * 
 * */
/************************************************************************/
class Meter
{
public:
	Meter(int in_x, int in_y)
		:x(in_x),
		 y(in_y)
	{
		
	}
	void IncreaseLevel()
	{
		level +=4;
	}
	int GetLevel()const
	{
		return level;
	}
	void Draw(Graphics& gfx)const
	{
		gfx.DrawRectDim(x,y,level * scale,grith,c);



	}
	//gtith :周长
private:
	static constexpr Color c = Colors::Red;
	static constexpr int grith = 12;
	static constexpr int scale = 4;
	int level = 0;
	int x;
	int y;
};
