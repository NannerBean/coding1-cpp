// Week 10 Functions

// Create an array with 3 names
// Make a loop that displays all of the names

#include <iostream>
#include <string>

using namespace std;

// Whenever possible, DONT use glabal variables... it avoids a lot of issues.
string professor = "Brian";			// Global variable
int currentSizeElement = 0;			// Keeps track of the shirtSize array

// Declaring and Defining a new function
// The function must be declared before it is used, but it can be defined later on.
// It returns nothing.
// This function's name is 'sayHello()'
void sayHello() {
	cout << "Hello!\n";
}
void sayGoodbye() {
	cout << "Goodbye!\n";
}

// Adding two numbers with parameters:
// Parameters go inside parenthesis
// They are the INPUTS for the function
// Optionally, we can add default values for the input parameters
void add(int number1 = 2, int number2 = 0) {
	cout << "The Sum of " << number1 << " and " << number2 << " is...";
	cout << number1 + number2 << endl;
}

// Overload the add function;
// This one adds 2 floats, joyous!!
// Don't forget to call in main.
void add(float firstNum, float secondNum) {
	cout << firstNum << " plus " << secondNum << " equals ";
	cout << firstNum + secondNum << endl;
}

void add(string firstWord, string secondWord) {
	cout << firstWord << " plus " << secondWord << " equals ";
	cout << firstWord + secondWord << endl;
}

// Return types is the OUTPUT of the function.
bool askYN(string question = "y/n?") {
	
	// In a dowhile loop,
		// Ask the user the question
		// Get input from player
		// If y, return True
		// If n, return False
		// Else, loop again
	do {
		cout << question << endl;
		string input;
		getline(cin, input);

		if (input == "y") {
			return true;
		}
		else if (input == "n") {
			return false;
		}
		else{
			cout << "Please type 'y' or 'n'.\n";
		}

	} while (true);
}

// Show array elements function:
// Doesn't return anything.
// Accepts one parameter as a pointer (You don't know these yet.... uhhh sucks.
void show(string* array, int arraySize) {
	cout << "\nHere are the contents of your array!\n";

	for (int i = 0; i < arraySize; i++) {
		cout << array[i] << endl;
	}
}

// Create a function that accepts a pointer to an array of strings,
// Let i sadd another element, as long as there are spaces.
void addShirtSize(string* array) {
	string input;

	while (true) {

		if (currentSizeElement == 10) {
			cout << "\nThat's the max amount of sizes we can carry!\n";
			break;
		}

		cout << "\nAdd a shirt size or type DONE if you're finished.\n";
		getline(cin, input);

		if (input == "DONE") {
			break;
		}
		else (array[currentSizeElement++] = input);
	}
}

int main() {

	// SETUP
	string shirtSizes[10];			// Creates the array of shirtSHizes.
	int currentSize = 0;
	addShirtSize(shirtSizes);
	show(shirtSizes, currentSizeElement);

	string playerName = "NannerZ";	// Local variable

	// Calling the sayHello() function:
	sayHello();
	sayGoodbye();
	add();
	add(47);
	add(47, 19);
	add(22.1f, 8.6f);		// Floats need 'f' at the end of the number.
	add("Nanner", "Bean");	// Strings need to be in quotations.

	if (askYN("Do you like pizza?")) {
		cout << "Let's get some pizza for lunch!\n";
	}
	else {
		cout << "...Get out of my sight.\n";
	}

	int NameCount = 0;
	string NameList[3]; 

	NameList[0] = "Brayden";
	NameList[1] = "Geoffrey";
	NameList[2] = "Radley";

	for (int i = 0; i < 3; i++) {
		cout << NameList[i] << endl;
	}

	show(NameList, 3);
}