#pragma once
#include "Graphics.h"
#include "Dude.h"
class Poo
{
public:
	void Init(int x,int y,int vx,int vy);
	void Update();
	bool  TestCollision(const Dude& dude) const;
	void Draw(Graphics& gfx);
	
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
