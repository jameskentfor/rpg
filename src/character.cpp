#include "character.h"
#include "die.h"
#include <utility>
#include <iostream>
using namespace std;

void Character::rollAttributes() {
	Die d(6);
	int roll;
	int total;
	int mod;
	for (int i = 0; i < 6; i++) {
		roll = 0;
		total = d.rollDie(3);
		if (total < 4) {
			mod = -2;
		} else if (total < 8) {
			mod = -1;
		} else if (total < 14) {
			mod = 0;
		} else if (total < 18) {
			mod = 1;
		} else {
			mod = 2;
		}
		attrModPairs[i] = make_pair(total, mod);
		mod = 0;
	}
}

int Character::getAttrScore(int attr) {
	return attrModPairs[attr].first;
}

int Character::getAttrMod(int attr) {
	return attrModPairs[attr].second;
}

void Character::printAttr(int attr) {
	cout << getAttrScore(attr) << '('<< getAttrMod(attr) << ")\n";
}

void Character::printAllAttr() {
	for (int i = 0; i < ATTR_COUNT; i++) {
		printAttr(i);
	}
}
