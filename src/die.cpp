#include "die.h"
#include <cstdlib>

Die::Die(int s)
	:sides{s}
{
}

int Die::rollDie() {
	return std::rand() % sides + 1;
}

int Die::rollDie(int rolls) {
	int total = 0;
	for(int i = 0; i< rolls; i++) {
		total += rollDie();
	}
	return total;
}
