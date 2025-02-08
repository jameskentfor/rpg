#include <iostream>
#include <utility>
#include <limits>
#include "die.h"
#include "character.h"
#include "item.h"

using namespace std;

int menu() {
	int menuItem;
	cout << "1. Create Character\n";
	cout << "2. Roll a Die\n";
	cout << "3. Item Creation\n";
	cout << "4. Quit\n";
	cout << "----------\n";
	while (!(cin >> menuItem) || (menuItem < 0 || menuItem > 4)) {
		cout << "Invalid input. Please enter a valid menu item: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return menuItem;
}

bool cont() {
	char c;
	cout << "Continue? y: return to menu / n: quit\n";
	cin >> c;
	if (c == 'y') {
		return true;
	} else if (c == 'n') {
		return false;
	} else {
		cout << "Invalid response. Returning to menu.\n";
		return true;
	}
}

int main() {
	bool continue_program = true;
	while (continue_program == true) {
		cout << "----------\n";
		int menuChoice = menu();
		if (menuChoice == 1) {
			Character c;
			c.rollAttributes();
			c.printAllAttr();
			continue_program = cont();
		} else if (menuChoice == 2) {
			int r = 0, s = 0;
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
			continue_program = cont();
		} else if (menuChoice == 3) {
			Item rattler("Rattler", 15.00, 150);
			rattler.display();
			continue_program = cont();
		} else if (menuChoice == 4) {
			continue_program = false;
		} else {
			cout << "Please choose a valid menu item.\n";
		} 
	}
	return 0;
}

