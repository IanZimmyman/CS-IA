//displays the spelled out day when given numerical day
//Ian Zimmerman
//January 29, 2021

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
	int day = 00;
	
	cout << "Input a number from 01 to 31: ";
	cin >> day;

	const int ones = day % 10;
	const int tens = day / 10;

	if (tens == 1) {
		switch (ones) {
			case 0:
				cout << "ten"; break;
			case 1:
				cout << "eleven"; break;
			case 2:
				cout << "twelve"; break;
			case 3:
				cout << "thirteen"; break;
			case 4:
				cout << "fourteen"; break;
			case 5:
				cout << "fifteen"; break;
			case 6:
				cout << "sixteen"; break;
			case 7:
				cout << "seventeen"; break;
			case 8:
				cout << "eighteen"; break;
			case 9:
				cout << "nineteen"; break;
			default:
				cout << "Please use a valid value (error with ones)"; break;
		}
	}
	else {
		switch (tens) {
		case 0:
			break;
		case 2:
			cout << "twenty "; break;
		case 3:
			cout << "thirty "; break;
		}

		switch (ones) {
		case 0:
			break;
		case 1:
			cout << "one"; break;
		case 2:
			cout << "two"; break;
		case 3:
			cout << "three"; break;
		case 4:
			cout << "four"; break;
		case 5:
			cout << "five"; break;
		case 6:
			cout << "six"; break;
		case 7:
			cout << "seven"; break;
		case 8:
			cout << "eight"; break;
		case 9:
			cout << "nine"; break;
		}
	}
}
