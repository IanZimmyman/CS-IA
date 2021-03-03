//calulates Basal Metabolic Rate
//Ian Zimmerman
//February 19, 2021

#include <iostream>

using std::cout; using std::cin; using std::endl;

double bmrWomen(double, double, double);
double bmrMen(double, double, double);

int main() {
	double weight = 0, height = 0, age = 0; //the three variables needed to calculae bmr
	double feet = 0, inches = 0; //used to calculate height
	double bmr = 0; //final bmr
	int doughnut_num = 0; //the number of doughnuts you can eat
	char gender = 'x'; //the choice variable for gender
	const int doughnut = 195; //calories per doughnut

	//collecting information
	cout << "How much do you weight in pounds? ";
	cin >> weight;

	//calculates height with collected information feet and inches
	cout << "How tall are you in feet? (additional inches are asked next) ";
	cin >> feet;
	cout << "How many additional inches taller are you? ";
	cin >> inches;
	height = inches + (feet * 12);

	cout << "How old are you in years? ";
	cin >> age;

	cout << "Are you male or female? (m/f) ";
	cin >> gender;

	//calls functions according to gender and assigns bmr
	if ((gender == 'm') || (gender == 'M'))
		bmr = bmrMen(weight, height, age);
	else if ((gender == 'f') || (gender == 'F'))
		bmr = bmrWomen(weight, height, age);
	else cout << "That is not a valid gender." << endl;

	doughnut_num = bmr / doughnut; //calculates number of daily doughnuts

	cout << "Your Basal Metabolic Rate is " << bmr << endl; //displays bmr
	cout << "You can eat " << doughnut_num << " doughnuts per day."; //displays number of daily doughnuts

}

// calculates bmr for women, using weight, height, and age
double bmrWomen(double w, double h, double a) {
	double result = 0; //calculated bmr

	result = 655 + (4.3 * w) + (4.7 * h) - (4.7 * a);
	return result;
}

// calculates bmr for men, using weight, height, and age
double bmrMen(double w, double h, double a) {
	double result = 0; //calculated bmr

	result = 66 + (6.3 * w) + (12.9 * h) - (6.8 * a);
	return result;
}
