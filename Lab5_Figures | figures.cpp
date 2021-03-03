//definitions for functions that print shapes
//Ian Zimmerman
//Feb 19, 2021

#include <iostream>
#include "figures.hpp"

using std::cin; using std::cout; using std::endl;

//prints a filled square of size num1
int filledSquare(int num1) {
	for (int row = 0; row < num1; ++row) {
		for (int col = 0; col < num1; ++col) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

//prints a hollow square of size num1
int hollowSquare(int num1) {
	for (int row = 0; row < num1; ++row) {
		for (int col = 0; col < num1; ++col) {
			if (row == 0)
				cout << "*";
			else if ((row) == (num1 - 1))
				cout << "*";
			else if (col == 0)
				cout << "*";
			else if ((col) == (num1 - 1))
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}

//prints a slash of size num1
int slash(int num1) {
	for (int row = num1; row >= 0; --row) {
		for (int col = 0; col < num1; ++col) {
			if (row == col) {
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}

//prints a backslash of size num1
int backslash(int num1) {
	for (int row = 0; row < num1; ++row) {
		for (int col = 0; col < num1; ++col) {
			if (row == col) {
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}

//prints a hollow diamond based on size num1, modified to the full size of num2
int diamond(int num1) {
	int num2 = (num1 * 2) - 1; //full size of final shape
	int midpoint = num1 - 1; //the value of the halfway point of num2
	int count = 0; //used to tell the loop how to print the bottom slants
	bool halfway = false; //when true, the loops will print the bottom slants

	for (int row = 0; row < num2; ++row) {
		for (int col = 0; col <= num2; ++col) {
			if ((midpoint + 1) == row) {
				halfway = true;
				count = midpoint - 1;
			}

			if (halfway == false) {
				if ((col == (midpoint - row)) || (col == (midpoint + row)))
					cout << "*";
				else
					cout << " ";
			}
			else {
				if ((col == (midpoint - count)) || (col == (midpoint + count)))
					cout << "*";
				else
					cout << " ";
			}
		}

		if (halfway == true)
			--count;

		cout << endl;
	}
	return 0;
}
