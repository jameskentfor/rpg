#pragma once
#include <utility>
#include <map>
#include <string>
#include "enums.h"

static const std::map<Attributes,std::string> attrStr{
	{STR, "Str"},
	{INT, "Int"},
	{WIS, "Wis"},
	{DEX, "Dex"},
	{CON, "Con"},
	{CHA, "Cha"}
};

class Character
{
	std::pair<int, int> attrModPairs[ATTR_COUNT];

public:
	void rollAttributes();
	int getAttrScore(int attr);
	int getAttrMod(int attr);
	void printAttr(int attr);
	void printAllAttr();
	
};
