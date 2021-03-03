//Sorts numbers but with a function this time
//Ian Zimmerman
//Feb 26, 2021

#include <iostream>

using std::cout; using std::cin; using std::endl;

void getNums(int&, int&, int&); //takes three inputs from the user
void swap(int&, int&); //sorts two of the numbers entered by the user
void showNums(int&, int&, int&); //displays the sorted numbers

int main() {
	int num1 = 0, num2 = 0, num3 = 0; //the three inputs

	getNums(num1, num2, num3); //takes input for the three

	//swaps the two numbers if needed per each if statement
	if (num1 > num2)
		swap(num1, num2);
	if (num1 > num3)
		swap(num1, num3);
	if (num2 > num3)
		swap(num2, num3);

	showNums(num1, num2, num3); //displays the sorted numbers
}

//inputs the three inputs
void getNums(int& first, int& second, int& third) {
	cout << "Please enter three integers:" << endl;
	cin >> first >> second >> third;
}

//swaps the entered numbers' values
void swap(int& larger, int& smaller) {
    int temp = 0; //Holds the value of the larger number while the two are swapped

	temp = larger;
	larger = smaller;
	smaller = temp;
}

//displays the sorted numbers
void showNums(int& first, int& second, int& third) {
	cout << "Your numbers sorted are " << first << " " << second << " " << third;
}
