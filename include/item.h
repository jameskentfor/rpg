#pragma once
#include <string>

class Item
{
	std::string name;
	double weight;
	int value;

public:
	Item(std::string s, double w, int v);
	std::string getName();
	double getWeight();
	int getValue();
	void display();
};
