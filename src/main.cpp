#include <iostream>
#include <utility>
#include "die.h"
#include "character.h"

using namespace std;

bool end_of_program_prompt()
{
	char again;
	cout << "Again? (y/n): ";
	cin >> again;
	for (int i = 0; i < 3; i++) {
		if (again == 'y') {
			return true;
		} else if (again == 'n') {
			return false;
		} else {
			cout << "\nPlease enter a valid char\n";
			continue;
		}
	}
	cout << "Since you're being difficult I quit.";
	return false;
}





int main() {
	srand(time(0));
	Character scav;
	scav.rollAttributes();
	scav.printAllAttr();
/*
	cout << "Str: " << scav.getAttrScore(STR) << '(' << scav.getAttrMod(STR) << ")\n";
	cout << "Int: " << scav.getAttrScore(INT) << '(' << scav.getAttrMod(INT) << ")\n";
	cout << "Wis: " << scav.getAttrScore(WIS) << '(' << scav.getAttrMod(WIS) << ")\n";
	cout << "Dex: " << scav.getAttrScore(DEX) << '(' << scav.getAttrMod(DEX) << ")\n";
	cout << "Con: " << scav.getAttrScore(CON) << '(' << scav.getAttrMod(CON) << ")\n";
	cout << "Cha: " << scav.getAttrScore(CHA) << '(' << scav.getAttrMod(CON) << ")\n";
*/


	/*int s = 0;
	int r = 0;
	bool endOrContinue = true;
	while (endOrContinue==true) {
		cout << "Input number of rolls and sides\n" << s << 'D' << r << '\n';
		cin >> r;
		cout << r << 'D' << s << '\n';
		cin >> s;
		cout << r << 'D' << s << '\n';
		Die d(s);
		int total = 0;
		int roll = 0;
		for (int i = 0; i < r; i++) {
			roll = d.rollDie();
			cout << "Roll " << i+1 << ": " << roll << '\n';
			total += roll;
		}
		cout << "Total: " << total << '\n' << '\n';
		endOrContinue = end_of_program_prompt();
		s = 0;
		r = 0;
	}*/
	return 0;
}



