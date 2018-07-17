#include "Poo.h"
#include "Graphics.h"
void Poo::Update()
{
	x += vx;
	y += vy;

	const int right = x + width;
	//������߽練��
	if (x < 0)
	{

		x = 0;
		vx = -vx;
	}
	//��ײ�ұ߽練�����������������ķֽ⣬��poo�˶���Ϊx����y�᷽��
			//����������ת
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;

	}

	const int bottom = y + height;
	//��ײ�ϱ߽練��
	if (y < 0)
	{
		y = 0;
		vy = -vy;
	}
	//�����±߽�
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}





}

/**
* \method
*
* \brief �ж�����rectangle �Ƿ�collide(��ײ)
* \param x0,y0 ��һ��rectangle�����Ͻ����꣬right0,bottom0���½ǵ�����
* \param
* \author thnx1
* \date ���� 2018
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
