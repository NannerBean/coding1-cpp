
#include <iostream>  // Send and recieves text from the console.
#include <string>	// Allows us to use string variables.
#include <cstdlib>	// for rand() and srand()
#include <ctime>	// for time
using namespace std;	// Adds bloat, but keeps us from typing std:: all the time.

// This is where the program begins.
int main() {

	// always seed your random number generator ONCE, at the beginning of your progression.
	srand(time(0));

	bool debug = true;

	if (debug) cout << "DEBUG MODE IS ON\n";
	// An if statement is a test.
	// If it is true, the code block will run. If it false, it won't.

	cout << "This is the start of week 3's lecture on\n";
	cout << "\tVariables and Logic!\n";

	if (true) {
		cout << "\nThis line of code will always run\n";
	} // End of if(true).

	if (false) {
		cout << "This line of code will never run\n";
	} // End of if(false).

	if (1 + 1 == 2) {
		cout << "\nThank goodness!Math still makes sense!\n";
	}

	if (1 + 3 == 5) {
		cout << "\nUhm, somthing isn't quite right here...\n";
	}

	// Types of variables: 
	// intergers, floats, doubles, characters, strings, and booleans

	// An interager is a whole number, positive or negative, between -2bil and 2bil.

	// When making a value, specify type, name, and value if applicable.
	// We are creating a new variable of the type 'int', with the name "PlpayerScore",
	// With a value of 4550
	int PlayerScore = 4550;

	//Declaring the variable, type int, name = PlayerTwoScore
	int PlayerTwoScore = 0;

	// Constant variables cannot change their value and must be decalred at creation.
	const float EARTH_GRAVITY = -9.81f;

	cout << "\nPlayer 1 Score = " << PlayerScore << ".\n ";
	cout << "Player 2 Score = " << PlayerTwoScore << ".\n";
	cout << "Earth's Gravity is " << EARTH_GRAVITY << " meters/second.\n";

	// A float is a floating point number accurate to 7 digits.
	// Up to 9,999,999 or .0000001

	// A double is accurate to 22 digits.
	//9,999,999,999,999,999,999,999 BIG NUMBER
	
	// Name, PI, with a value of 3.141592653
	const double PI = 3.141592635;

	// A Character is a single unicode. One key on your keyboard.
	char answer = 'n';		// This will store the user's input.

	cout << "\nDo you want to keep playing?\n";
	cin >> answer;

	if (answer == 'y') {
		cout << "\nYipee! Again, again!\n";
	}

	if (answer == 'n') {
		cout << "\nAwe, okay. See you soon!\n";
		return 0;
	}

	// Strings are an array of characters, in an ordered list, one after the other.
	string profName = "Dumbledore";
	string user = "Finn";
	string pass = "VideoGames";
	string input = "";		// This stores the user's text input

	cout << "\nWhat is your username?\n";
	cin >> input;

	if (input == user) {
		cout << "What is your password?\n";
		cin >> input;

		if (input == pass) {
			cout << "\nWelcome Finn, hope you had a great adventure today!\n";
		}

		else {
			cout << "Nice try Jake!\n";
			return 0;
		}
	}
	else {
		cout << "User not recognized.\n";
	}

	// booleans are a variable type that can only be true or false. Yes/No, On/Off, etc.
	bool PlayerIsAlive = true;
	int score = 0;

	// This is the simplest of loops.
	// It Runs as long as the test is TRUE.
	// while(test) { code block }
	while (PlayerIsAlive) {
		string input;

		score += 5;	//Combined assignment operator
		
		cout << "\nAre you dead yet?\n";
		if (debug) cout << "Score = " << score << "\n";
		cin >> input;

		if (input == "yes") {
			PlayerIsAlive = false;
		}
	}
	cout << "Im sorry for your loss :(\n";
	cout << "Your score was " << score << " .\n";
	
	// Let's talk about random. 10 Minutes is definetly enough time for this.

	// At the top of your file... 
	// #include <cstdlib> 
	// #ilclude <ctime>

	cout << "\nHere's a random number... for funsies.\n" << rand() << ".\n";

	cout << "\nHere are TEN random numbers..still for funsies: \n";
	int count = 0;
	while (count < 10) {
		count += 1;
		cout << (rand() % 10) +1 << "\n";
	}
}
// This is the end of main().