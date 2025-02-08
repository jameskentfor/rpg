#include <item.h>
#include <iostream>

Item::Item(std::string n, double w, int v) 
{
	name = n;
	weight = w;
	value = v;
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

void Item::display() {
	std::cout << std::endl << "Item: " << name << "\n" << "Weight: " << weight<< "\n" << "Value: " << value << std::endl;
}
