/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */

	void DrawFace(int x, int y);
	void DrawGoods(int x, int y);
	int ClampScreenX(int x, int width);
	int ClampScreenY(int x, int height);
	bool IsColliding(int x0, int y0, int width0, int height0,
		int x1, int y1, int width1, int height1);

	void DrawGameOver(int x, int y);

	void DrawTitleScreen(int x, int y);


	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */

	int collectorX=400;
	int collectorY=300;

	int collectorWidth = 20;
	int collectorHeight = 20;


	bool goods1IsEaten = false;
	int goods1X=100;
	int goods1Y=150;

	bool goods2IsEaten = false;
	int goods2X=600;
	int goods2Y=400;

	bool goods3IsEaten = false;
	int goods3X=100;
	int goods3Y=500;

	int goodsWidth = 24;
	int goodsHeight = 24;

	int g1vx = 1;
	int g1vy = 1;

	int g2vx = 1;
	int g2vy = 1;

	int g3vx = 1;
	int g3vy = 1;
	bool isStarted = false;
	/********************************/
};