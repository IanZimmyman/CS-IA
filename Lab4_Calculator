//it's a calculator
//Ian Zimmerman
//Feb 12, 2021

#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

int main() {
	char count = 'a';
	int choice = 0;
	double base = 0.0, mod = 0.0, result = 0.0;

	while (count == 'a') {
		cout << "Please choose the operation you would like to use" << endl;
		cout << "1. Absolute Value" << endl;
		cout << "2. Square Root" << endl;
		cout << "3. Floor" << endl;
		cout << "4. Power" << endl;
		cout << "Enter anything else to exit." << endl;
		
		cin >> choice;

		if ((choice >= 1) && (choice <= 4)) {
			cout << "Please enter the base number in decimal form: ";
			cin >> base;
		}

		//absolute value
		if (choice == 1) {
			result = abs(base);
			cout << "The absolute value of " << base << " is " << result << endl;
		}

		//square root
		else if (choice == 2) {
			result = sqrt(base);
			cout << "The square root of " << base << " is " << result << endl;
		}

		//floor
		else if (choice == 3) {
			result = floor(base);
			cout << base << " lowered to the nearest whole number is " << result << endl;
		}

		//power
		else if (choice == 4) {
			cout << "To what power do you want to raise " << base << ", in decimal form: ";
			cin >> mod;
			result = pow(base, mod);
			cout << base << " raised to the power of " << mod << " is " << result << endl;
		}
		else
			count = 'b';
	}
}
