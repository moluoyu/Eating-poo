#include "Dude.h"
#include "Graphics.h"
/**
* \method
*
* \brief ȷ��object�ı߽粻�����������ڵı߽�
* \param x object��x����
* \param width object��������
* \author thnx1
* \date ���� 2018
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
