#include "Poo.h"
#include "Graphics.h"
void Poo::Update()
{
	x += vx;
	y += vy;

	const int right = x + width;
	//碰到左边界反弹
	if (x < 0)
	{

		x = 0;
		vx = -vx;
	}
	//碰撞右边界反弹，利用类似于力的分解，将poo运动分为x轴与y轴方向，
			//将步进方向反转
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;

	}

	const int bottom = y + height;
	//碰撞上边界反弹
	if (y < 0)
	{
		y = 0;
		vy = -vy;
	}
	//碰到下边界
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}





}

/**
* \method
*
* \brief 判断两个rectangle 是否collide(碰撞)
* \param x0,y0 第一个rectangle的左上角坐标，right0,bottom0右下角的坐标
* \param
* \author thnx1
* \date 七月 2018
*/
void Poo::ProcessConsumption(int dudex, int dudey, int dudewidth, int dudeheight)
{
	const int duderight = dudex + dudewidth;
	const int dudebottom = dudey + dudeheight;
	const int pooright = x + width;
	const int poobottoom = y + height;

	if (duderight >= x &&
		dudex <= pooright &&
		dudebottom >= y &&
		dudey <= poobottoom)
	{

		isEaten = true;
	}
}
