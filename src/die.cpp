#include "die.h"
#include <cstdlib>
#include <random>
#include <map>
#include <iostream>

Die::Die(int s)
	:sides{s}
{
}

int Die::rollDie() {
	std::random_device rd;
	std::uniform_int_distribution<int> dist(1, sides);
	return dist(rd);
}

int Die::rollDie(int rolls) {
	int total = 0;
	for(int i = 0; i< rolls; i++) {
		total += rollDie();
	}
	return total;
}

int Die::rollDieClassic() {
	srand(time(nullptr));
	return std::rand() % sides + 1;
}

void Die::testDie() {
	std::map<int, int> m{{1,0}, {2,0}, {3,0}, {4,0}, {5,0}, {6,0}};
	for (int i = 0; i < 10000000; i++) {
		m[rollDieClassic()] += 1;
	}
	for (auto x : m) {
		std::cout << x.first << ':' << x.second << '\n';
	}
	for (int i = 1; i < 7; i++) {
		m[i] = 0;
	}
	for (int i = 0; i < 10000000; i++) {
		m[rollDie()] += 1;
	}
	for (auto x : m) {
		std::cout << x.first << ':' << x.second << '\n';
		x.second = 0;
	}

}


