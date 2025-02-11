
#include <iostream>  
#include <string>	
#include <cstdlib>	
#include <ctime>	
using namespace std; 

int main() {

	srand(time(0));															// Seed randome number generator.

	cout << "Welcome, adventurer... a single path lies before you.\n";		// Welcome player.

	int Health = 10;														//Setup Game.
	int Turns = 0;

	bool PlayerIsGaming = true;												

	while (PlayerIsGaming) {												// Start loop.

		if (Turns == 0) {
			cout << "\nAs you walk forward, the light grows dim.\nSuddenly, you encounter an Immortal Beast!!\n";		// Start encounter.
		}

		string input = "";
		cout << "\nContinue your adventure? (Y/N) \n";						// Ask if they'd like to continue adventure.
		cin >> input;

		if (input == "Y") {
			cout << "\nThe Beast rears to strike.\n";
			int(Turns += 1);
			cout << "\nTurn: " << (Turns) << "\n"; 

			int Attack = (rand() % 5 + 0);									// Generate random numbers for attack and block within a range of 1-4
			int Block = (rand() % 5 + 0);

			cout << "\nThe Beast attacked with a strength of " << Attack << "!\n";
			cout << "You blocked with a strength of " << Block << "!\n";

			if (Block >= Attack) {											// If Block > Attack, succesful block!
				cout << "\nYou blocked it like a champ!\n";
			}

			else {															// Else, subtract Attack from Health.
				Health = (Health -= Attack);
				cout << "\nYou took " << Attack << " damage!\n";
				cout << "You now have " << Health << " health...\n";
			}

			if (Health <= 0) {												// If Health is below 0, tell player they're dead.
				cout << "\nLooks like your adventure ends here.\n";
				cout << "You made it to turn " << Turns << ".\n";
				return 0;
			}

			if (Turns == 4) {													// End loop after 4 turns
				cout << "\nThe Beast grows bored and wanders away...rude.\n";		// If Health is > 0, congratulate Player.
				cout << "\nUh- Congratulations, you won! I guess.\n";
				return 0;
			}
		}	 

		else{																// If they don't want to continue, break out of loop.
			 PlayerIsGaming = false;
		}

	}

	cout << "\nYou have decided enough is enough.\n";
	return 0;
}	