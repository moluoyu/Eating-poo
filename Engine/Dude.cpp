#include "Dude.h"
#include "Graphics.h"
/**
* \method
*
* \brief 确保object的边界不超过整个窗口的边界
* \param x object的x坐标
* \param width object的整体宽度
* \author thnx1
* \date 七月 2018
*/
void Dude::ClampToScreen()
{
	const int right = x + width;
	if (x < 0)
	{

		x = 0;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;

	}
	
	const int bottom = y + height;
	if (y < 0)
	{

		y = 0;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		x = (Graphics::ScreenHeight - 1) - height;

	}
	
}
