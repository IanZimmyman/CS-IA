//Simulates a lottery
//Ian Zimmerman
//Feb 26, 2021

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

void assign(int [], const int); //initializes an array wins[] with 0 in every element
void draw(int [], const int); //inputs random non repeating values into wins[]
bool check(int [], int, const int); //checks if a number is already in wins[]
int entry(); //asks for a number 1-100 and returns it
void printOut(int, int [], const int, bool); //prints the winning numbers and winning guess

int main() {
	srand(time(nullptr)); //feeding the rng an unpredictable seed
	const int winSize = 10; //size for wins array
	int wins[winSize]; //holds the winning values
	int count = 0; //counts the entry loop
	int input = 0;//takes a user input
	bool won = false; //tells printOut() if the player won

	assign(wins, winSize);
	draw(wins, winSize);

	//takes user input and compares it with winning numbers
	//exits if the user wins
	cout << "You have five chances to guess a number and win." << endl;
	while (count < 5) {
		cout << "Please enter an integer: ";
		cin >> input;
		if (check(wins, input, winSize)) {
			count = 6; // breaks the loop if the entry is a winning number
			cout << input << " was a winning number!" << endl;
			won = true;
		}
		else
			cout << "That was not a winning number." << endl;
		++count;
	}

	printOut(input, wins, winSize, won); //outputs the winning number
}

//sets every element of an array to 0
void assign(int input[], const int size) {
	for (int i = 0; i < size; ++i)
		input[i] = 0;
}

//draws unique numbers to fill wins[]
void draw(int input[], const int size) {
	int temp = 0;

	for (int i = 0; i < size; ++i) {
		//gives temp a random number between 1 and 100 and checks if it is in input[] already
		//if it is, then it gives a new number to temp
		do {
			temp = rand() % 100 + 1;
		} while (check(input, temp, size));
		
		//inputs the unique number into input[i]
		input[i] = temp;
	}
}

//checks if a number is already a winning number
bool check(int inputCheck[], int checkNum, const int sizeCheck) {
	for (int i = 0; i < sizeCheck; ++i) {
		if (inputCheck[i] == checkNum) //checks if the current element is equal to the random number
			return true; //if it is, it returns true
	}
	//if the number is unique it returns false
	return false;
}

//asks for a user input and returns it
int entry() {
	int guess = 0; //holds user input
	cout << "Please input an integer from 1 to 100: ";
	cin >> guess;
	return guess;
}

//prints the winning numbers and specifies the number that won if applicable
void printOut(int winGuess, int winners[], const int sizeWin, bool wonPrint) {
	cout << "The winning numbers were: ";
	for (int i = 0; i < sizeWin; ++i) {
		cout << winners[i] << " ";
	}
	if (wonPrint)
		cout << endl << "You won with " << winGuess;
	else
		cout << endl << "You did not win.";
}
