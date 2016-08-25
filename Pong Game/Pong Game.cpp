// Pong Game.cpp : Defines the entry point for the console application.
//Simple Pong Game in C++ Console
//Made by following a 3-parts tutorial from youtube
//https://www.youtube.com/watch?v=y8QL62SDlcQ&list=PLrjEQvEart7faAurUFBS0zHyxktPUuyEI&index=1

#include<iostream>

using namespace std;
enum eDir {
	STOP=0,
	LEFT=1,
	UPLEFT=2,
	DOWNLEFT=3,
	RIGHT=4,
	UPRIGHT=5,
	DOWNRIGHT=6
};

class cBall
{
private:
	int x, y;
	int originalX, originalY;
	eDir direction;
public:
	cBall(int posX, int posY)
	{
		originalX = posX;
		originalY = posY;
		x = posX;
		y = posY;
		direction = STOP;
	}
	void Reset()
	{
		x = originalX;
		y = originalY;
		direction = STOP;
	}
	void changeDIrection(eDir d)
	{
		direction = d;
	}
	int getX() { return x; }

};

int main()
{
	cBall *cBallz = new cBall(10, 10);
    return 0;
	}
}

