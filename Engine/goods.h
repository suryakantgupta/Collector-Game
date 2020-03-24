#pragma once

class Goods {
public:
	void Update();
	void ProcesssConsumption(int cx, int cy, int cw, int ch);
		int x;
		int y;
		int vx;
		int vy;

		static constexpr int width = 24;
		static constexpr int height = 24;
		bool isEaten = false;

};