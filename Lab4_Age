//tells a story about a troll and a prince
//Ian Zimmerman
//Feb 12, 2021

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

int main() {
	srand(time(nullptr)); //feeding the rng an unpredictable seed
	int age = rand() % (200 - 100 + 1) + 100; //generates troll's original age
	int guess = 0; //initializes the variable for the user's guess

	//sets up the story
	cout << "A maiden is locked in a castle guarded by a troll. He will only let you, a prince," << endl;
	cout << "pass if you can properly guess his age. If you guess correctly, he will let you pass." << endl;
	cout << "Otherwise, you will be sent away to return the following year." << endl << endl;
	
	//loops until the previous age and guess match
	while (guess != (age - 1)) {
		cout << "Troll: How old do you think I am?" << endl;
		cout << "Prince: ";
		cin >> guess;

		if (guess > age)
			cout << "Troll: That's too old. come back next year." << endl;
		else if (guess < age)
			cout << "Troll: That's too young. Come back next year." << endl;
		else if (guess == age)
			cout << "Troll: I am " << age << ". You may pass." << endl;

		cout << "A year passes..." << endl << endl;
		age = age + 1;
	}

	cout << "You live happily with the maiden for the rest of your days." << endl << endl << "THE END.";
}
