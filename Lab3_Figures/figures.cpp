//makes shapes
//Ian Zimmerman
//Feb 5, 2021

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
	int num1 = 0, num2 = 0, midpoint = 0, count = 0;
	bool halfway = false;
	//midpoint, count, and half are only used in figure 5
	//however they are initialized with the other variables

	cout << "Please enter an integer representing figure size: ";
	cin >> num1;
	num2 = (num1 * 2) - 1;
	midpoint = num1 - 1;
	
	//figure 1 - full block
	for (int row = 0; row < num1; ++row) {
		for (int col = 0; col < num1; ++col) {
			cout << "*";
		}
		cout << endl;
	}

	//figure 2 - slant down
	for (int row = 0; row < num1; ++row) {
		for (int col = 0; col< num1; ++col) {
			if (row == col) {
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}

	//figure 3 - slant up
	for (int row = num1; row >= 0; --row) {
		for (int col = 0; col < num1; ++col) {
			if (row == col) {
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}

	//figure 4 - hollow box
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

	//figure 5 - hollow diamond
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
}
