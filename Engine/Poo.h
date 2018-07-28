#pragma once
#include "Graphics.h"
#include "Dude.h"
class Poo
{
public:
	void Init(float x,float y,float vx,float vy);
	void Update();
	bool  TestCollision(const Dude& dude) const;
	void Draw(Graphics& gfx);
	
private:
	float x;
	float y;
	float vx;
	float vy;
	bool isEaten = false;
	static constexpr float width = 24;
	static constexpr float  height = 24;
	bool initialized = false;


};
