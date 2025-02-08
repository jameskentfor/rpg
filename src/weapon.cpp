#include "weapon.h"
#include "enums.h"

Weapon::Weapon(string s, double w, int v, TechLevel tl, int sides, int rolls, int nrmlRng, int maxRng, int magCap, Attributes a) : Item(s, w, v, tl) , Die(sides) {
	dmgDieRolls = rolls;
	normalRange = nrmlRng;
	maxRange = maxRng;
	magazineCapacity = magCap;
	attr = a;
}


int& Weapon::getDmgDieRolls() {
	return dmgDieRolls;
}
