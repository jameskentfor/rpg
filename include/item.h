#pragma once
#include <string>
#include "enums.h"

class Item
{
	std::string name;
	double weight;
	int value;
	TechLevel techLevel;

public:
	Item(std::string s, double w, int v, TechLevel tl);
	std::string getName();
	double getWeight();
	int getValue();
	TechLevel getTechLevel();
	void display();
};
