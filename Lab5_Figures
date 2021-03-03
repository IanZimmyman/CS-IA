//main for multi-file figure program
//Ian Zimmerman
//Feb 19,2021

#include <iostream>
#include "figures.hpp"

using std::cin; using std::cout; using std::endl;

int main() {
	int choice1 = 1, choice2 = 0; //used to navigate menus
	int size = 0; //size of shapes

	do {
		//prompt for shape
		cout << "Please select a shape:" << endl
			<< "1. Square" << endl
			<< "2. Slash" << endl
			<< "3. Backslash" << endl
			<< "4. Diamond" << endl;
		cin >> choice1;

		//if the choice is valid, it prompts for size
		if ((choice1 <= 4) && (choice1 >= 1)) {
			cout << "What size would you like the figure to be?" << endl;
			cin >> size;
		}

		//asks if square will be hollow or full
		if (choice1 == 1) {
			cout << "Would you like the square to be" << endl
				<< "1. Filled" << endl
				<< "2. Hollow" << endl;
			cin >> choice2;

			if (choice2 == 1)
				filledSquare(size); //prints filled square
			else if (choice2 == 2)
				hollowSquare(size); //prints hollow square
		}

		//prints slash
		else if (choice1 == 2)
			slash(size);

		//prints backslash
		else if (choice1 == 3)
			backslash(size);

		//prints diamond
		else if (choice1 == 4)
			diamond(size);

	} while ((choice1 >= 1) && (choice1 <= 4)); //checks if the choice was valid
	
	cout << endl; //added for readability in terminal
}
