#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int Health = 10;
int Treasure;

void story() {
	cout << "\tYou live on the edge of a quiet village in the midst of the forest. All was as it should be until one day";
	cout << " a coniving wizard appeared in the center of town, promising to put a curse on you all if he were not paid";
	cout << " in a healthy sum of gold. After a passionate game of noes-goes, it was decided that YOU will be the one to";
	cout << " fulfill this request.\n---- So, shield in hand, you venture into the wild, hoping for riches to save your town. ----\n";
}

bool askYesNo(string question = "Yes/No?") {
	do {
		cout << question << endl;
		string input;
		getline(cin, input);

		if (input == "Yes") {
			return true;
		}
		else if (input == "No") {
			return false;
		}
		else {
			cout << "Please type 'Yes' or 'No'.\n";
		}

	} while (true);
}

int RollDie() {
	srand;
	int Side = (rand() % 6 + 0);

	return Side;
}

void Adventure() {
	cout << "\nA monster blocks your path!\n";

	int Attack = RollDie();
	int Block = RollDie();
	
	cout << "\nThe Monster attacked with a strength of " << Attack << "!\n";
	cout << "You blocked with a strength of " << Block << "!\n";

	if (Attack > Block) {
		cout << "Ouch... that looked like it hurt.\n";
		Health -= Attack;
	}

	else {
		cout << "You succesfully blocked the attack!\n";
	}

	Treasure += RollDie();
	cout << "The monster runs away and drops some gold as it leaves!\n";

	cout << "\nYou now have " << Health << " health left.\n";
	cout << "You now have a total of " << Treasure << " Gold.\n";
}

void Ending() {
	cout << "\n You ended with " << Health << " health and " << Treasure << " gold.";
}

int main() {
	story();

	while (true) {

		if (askYesNo("\nWould you like to continue adventuring?")) {
			cout << "\nYou conitnue on your way!\n";
		}
		else {
			cout << "\nYou decide to return to town...\n";

			if (Treasure < 15) {
				cout << "The Wizard is displeased with your offering!\n";
				cout << "You and the rest of the town have now been turned into frogs... are you happy with yourself?\n"; 

				Ending();
				break;
			}
			if (Treasure >= 15) {
				cout << "The wizard nods in approval at your donation... it seems the town is saved!! For now...\n";

				Ending();
				break;
			}
		}

		Adventure();

		if (Health <= 0) {
			cout << "It seems fate was more powerful than you today...\n";
			Ending();

			return 0;
		}
	}

}
