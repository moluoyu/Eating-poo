#pragma once
#include "Graphics.h"
#include "Dude.h"
class Poo
{
public:
	void Init(int x,int y,int vx,int vy);
	void Update();
	void ProcessConsumption(Dude& dude);
	void Draw(Graphics& gfx);
	bool IsEaten()const;
private:
	int  x;
	int  y;
	int vx;
	int vy;
	bool isEaten = false;
	static constexpr int width = 24;
	static constexpr int  height = 24;
	bool initialized = false;


};
