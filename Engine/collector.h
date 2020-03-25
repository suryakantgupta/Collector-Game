#pragma once
#include "Graphics.h"
class Collector {
public:
	
	int x = 400;
	int y = 300;
	static constexpr int width = 20;
	static constexpr int height = 20;
	void ClampScreen();
	void DrawFace(Graphics &gfx);
};