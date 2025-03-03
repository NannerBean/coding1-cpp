
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

#include <iostream>
#include <string>

using namespace std;

int main() {
	int GameCount = 0;
	string (input);
	string FaveGames[20];

	cout << "Hello! Welcome to the Favorite Games list-o-matic!\n";

	do {
		cout << "\nWhat would you like to do?\n ---------------------------------------- \n ADD\tEDIT\tREMOVE\t SHOW\tQUIT\n";
		
		getline(cin, input);

		if (input == "QUIT") {

			cout << "\nThank you for your contributions!\n";
			break;
		}

		if (input == "ADD") {

			cout << "\nWhat title would you like to add?\n";
			getline(cin, input);
			
			FaveGames[GameCount++] = input;
			cout << input << " was added to the list!\n";
			GameCount += 1;
		}

		if (input == "SHOW") {

			cout << "\nHere's the list so far...\n";

			for (int i = 0; i < GameCount; i++) {

				if (FaveGames[i] == "") {
					continue;
				}

				cout << FaveGames[i] << "\n";
			}
		}

		if (input == "EDIT") {

			cout << "\nWhat title would you like to edit?\n";
			getline(cin, input);
			
			for (int i = -1; i < GameCount; i++) {
				i += 1;

				if (FaveGames[i] == input) {
					cout << "\nWhat would you like to change it to?\n";
					getline(cin, input);

					FaveGames[i] = input;

					cout << "Changed title to " << input << "!\n";

					break;
				}

				if (i == GameCount) {
					cout << "That title wasn't found :(\n";
				}
			}
		}

		if (input == "REMOVE") {

			cout << "\nWhich title would you like to remove?\n";
			getline(cin, input);

			for (int i = -1; i < GameCount; i++) {
				i += 1;

				if (FaveGames[i] == input) {
					FaveGames[i] = "";

					cout << input << " was removed!\n";

					break;
				}

				if (i == GameCount) {
					cout << "That title wasn't found :(\n";
				}

			}

		}

	} while (true);
}
