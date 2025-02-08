#include <item.h>
#include <iostream>
#include "enums.h"

Item::Item(std::string n, double w, int v, TechLevel tl) 
{
	name = n;
	weight = w;
	value = v;
	techLevel = tl;
}

std::string Item::getName() {
	return name;
}

double Item::getWeight() {
	return weight;
}

int Item::getValue() {
	return value;
}

TechLevel Item::getTechLevel() {
	return techLevel;
}
void Item::display() {
	std::cout << std::endl << "Item: " << name << "\n" << "Weight: " << weight<< "\n" << "Value: " << value << '\n' << "Tech Level: " << techLevel << '\n' << std::endl;
}
