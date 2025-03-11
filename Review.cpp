// Ilyanna Foehweriser
// Week 8 recap

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
	cout << "Hello World :D\n";

	// Ask the player if they prefer cheese or pepparoni pizza.
	// Use an if, else, and else-if to check their input.
	// Have the computer agree or disagree with their choice OR berate them for typing anything else.

	string input;
	bool Debug = false;

	cout << "\nDo you prefer Cheese or Pepparoni pizza?\n";
	getline(cin, input);

	if (input == "Cheese") {
		cout << "Kind of a boring answer don't you think?...\n";
	}
	else if (input == "Pepparoni") {
		cout << "Awesome! That one's my favorite too!\n";
	}
	else {
		cout << "Ewwww... How could you ever put " << input << " on a pizza??\n";
	}

	// Guess the number game.
	// Have the computer choose a random number between 1 and 10 (inclusive)
	// Start a while loop and ask the player guess the number...
	// If too high, have computer say lower.
	// If too low, have the computer say higher.
	// If correct, tell the player and end the loop.

	srand(time(0));
	int RandNum = (rand() % 10 + 1);
	int Guess;

	if (Debug) {
		cout << "\nThe Number is " << RandNum << "\n";
	}

	cout << "\nHey! Guess a number between 1 and 10!\n";

	while (true) {
		getline(cin, input);

		if (input == "Quit") {
			cout << "\nOkay :(, bye then.\n";
			break;
		}
		else if (stoi(input) > RandNum) {
			cout << "Lower!\n";
		}
		else if (stoi(input) < RandNum) {
			cout << "Higher!\n";
		}
		else {
			cout << "Wow! You guessed it!\n";
			break;
		}
	}

	return 0;
}