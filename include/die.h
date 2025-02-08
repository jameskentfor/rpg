#pragma once

class Die
{
	int sides;

public:
	Die(int s);
	int rollDie();
	int rollDie(int rolls);
	int rollDieClassic();
	void testDie();
	int getSides();
};
