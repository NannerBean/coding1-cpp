
#include <iostream>  
#include <string>	
#include <cstdlib>	
#include <ctime>	
using namespace std; 

int main() {

	srand(time(0));

	cout << "Welcome, adventurer... a single path lies before you.\n";

	int Health = 10;
	int Turns = 0;

	bool PlayerIsGaming = true;

	while (PlayerIsGaming) {

		if (Turns == 0) {
			cout << "\nAs you walk forward, the light grows dim.\nSuddenly, you encounter an Immortal Beast!!\n";
		}

		string input = "";
		cout << "\nContinue your adventure? (Y/N) \n";
		cin >> input;

		if (input == "Y") {
			cout << "\nThe Beast rears to strike.\n";
			int(Turns += 1);
			cout << "\nTurn: " << (Turns) << "\n";

			int Attack = (rand() % 5 + 0);
			int Block = (rand() % 5 + 0);

			cout << "\nThe Beast attacked with a strength of " << Attack << "!\n";
			cout << "You blocked with a strength of " << Block << "!\n";

			if (Block >= Attack) {
				cout << "\nYou blocked it like a champ!\n";
			}

			else {
				Health = (Health -= Attack);
				cout << "\nYou took " << Attack << " damage!\n";
				cout << "You now have " << Health << " health...\n";
			}

			if (Health <= 0) {
				cout << "\nLooks like your adventure ends here.\n";
				cout << "You made it to turn " << Turns << ".\n";
				return 0;
			}

			if (Turns == 4) {
				cout << "\nThe Beast grows bored and wanders away...rude.\n";
				cout << "\nUh- Congratulations, you won! I guess.\n";
				return 0;
			}
		}	 

		else{
			 PlayerIsGaming = false;
		}

	}

	cout << "\nYou have decided enough is enough.\n";
	return 0;
}	