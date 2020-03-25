#pragma once
#include"Graphics.h"
#include "Collector.h"
class Goods {
public:
	void Update();
	void ProcesssConsumption(const Collector &c1);
	void Draw( Graphics &gfx) const;
		int x;
		int y;
		int vx;
		int vy;

		static constexpr int width = 24;
		static constexpr int height = 24;
		bool isEaten = false;

};