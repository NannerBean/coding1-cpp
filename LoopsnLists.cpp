// Ilyanna Foehrweiser Coding 1 week 6 Spring 2025
// Loops and Lists :)

#include <iostream>
#include <string>

using namespace std;

int main() {

	// We're building an array!
	// An array is an ordered list of a single type of variable.

	// Create an array of interegers with a size of 10:

	const int MAX_SIZE = 10;		// This variable cannot be changed after this line.
									// ALL_CAPS denotes a constant variable.
	int element = 0;

	int scores[MAX_SIZE];			// This array has created 10 spots for integers.

	// Add a value to the first element of the array:
	scores[0] = 9001;

	// Display the values to confirm it works:
	cout << "The highest score in the list is " << scores[0] << ". \n";

	// Add 3 more scores using elemnt++ to keep track of where you are:

	element = 1;				// Points at the second element in the list.
	scores[element++] = 682;	// The postfix incremator adds 1 AFTER the line runs.
	scores[element++] = 604;
	scores[element++] = -12;
	scores[element++] = 412;

	cout << "\nThe second score is " << scores[1] << ".\n";

	// Print all the scores
		// Use a while loop to run through all the scores.
		// The loop is done when the loop counter is equal to element.

	int counter = 0;
	while (counter < element) {		// While counter is less than element, keep looping!
		if (scores[counter] < 0) {
			counter += 1;
			continue;				// Stop code here and go back to start of loop.
		}

		cout << "The score says " << scores[counter] << ".\n";
		counter += 1;	//add 1 counter to every loop.
	}
	
	// Create an array of strings named bestFriends
	// Use a while loop to ask the user to add names, or quit.
	// At the end, we will use a for loop to display all the names.

	// Create an array of string variables. You MUST specify a size.
	string bestFriends[20];
	int friendCount = 0;

	string(input);

	do {
		cout << "\nWe're making a list of best friends! Who would you like to add? \n";
		cout << "or, type 'quit' to quit.\n";
		getline (cin, input);

		// Add fail cases first...

		if (input == "quit") {
			cout << "\nThanks for helping the list grow!\n";
			break;
		}

		if (friendCount >= 19) {
			cout << "\nOh no! We've run out of room for more friends :(.\n";
			break;
		}

		// Then add functionality:
		bestFriends[friendCount++] = input;		// Adds what players typed to the array.
												// Then add one to friendcount.

	} while (true);

	// A for loop runs for a certain amount of times.
	// A for loop includes the counter, the test, and the increment action all on the same line.

	// This is a standard for loop:
	// for(setup; test; action) { code block}
	for (int i = 0; i < friendCount; i++) {	// For as long as i (starting at 0).
		if (bestFriends[i] == "") {
			continue;
		}
		cout << i + 1 << ".\t";				// Add 1		// Is less than friendCount
		cout << bestFriends[i] << ".\n";	
	}
	 
}

/*  PSUEDOCODE FOR FAVEGAMES ASSIGNMENT
	
	Setup
		int gamecount = 0;
		string  games[size];
		Start loop

		Ask player "what option they'd like to choose".

	1.ADD
		Ask the player "what name they want to add",
		get input,
		Add that name to the list and increment gamecount,
		Tell Player "what name has been added".

	2.EDIT
		Ask the player "which name they would like to edit",
		get input,
		Check the list to see if the name is on it, use for loop to compare input to games[i]
			If yes - Ask player "What they want to edit it to",
				Change the name and confirm its new name.
			If no - tell the player "the name wasn't found", Go back to start.

	3.REMOVE
		Ask the player "what name they want to remove",
		get input,
		Check the list to see if the name is on there, use for loop to compare input to games[i]
			If yes - set the list's spot to nothing and "confirm it was removed."
			If no - tell the player "the name wasn't found", Go back to start.

	4.SHOW
		Display the current list of names.

	5.QUIT
		Break out of the loop,
		"Thank the player for sharing."

		
*/