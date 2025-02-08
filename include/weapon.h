#pragma once
#include "item.h"
#include "die.h"
#include <string>
#include "enums.h"

using namespace std;

class Weapon : public Item, public Die
{
	int dmgDieRolls = 0;
	int normalRange = 0;
	int maxRange = 0;
	int magazineCapacity = 0;
	Attributes attr;

public:
	Weapon(string s, double w, int v, TechLevel tl, int sides, int rolls, int nrmlRng, int maxRng, int magCap, Attributes a);

	int& getDmgDieRolls();
};
