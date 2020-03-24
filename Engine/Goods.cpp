#include "goods.h"
#include "Graphics.h"

void Goods::Update()
{
	x += vx;
	y += vy;


	const int right = x + width;
	if (x < 0) {
		x=0;
		vx = -vx;
	}
	else if (right >= Graphics::ScreenWidth) {
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const int bottom = y + height;
	if (y < 0) {
		y=0;
		vy = -vy;
	}
	else if (bottom >= Graphics::ScreenHeight) {
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}

}

void Goods::ProcesssConsumption(int cx, int cy, int cw, int ch)
{
	const int right0 = cx + cw;
	const int bottom0 = cy + ch;
	const int right1 = x + width;
	const int bottom1 = y + height;

	if (
		right0 >= x &&
		cx <= right1 &&
		bottom0 >= y &&
		cy <= bottom1)
	{
		isEaten = true;
	}

}
