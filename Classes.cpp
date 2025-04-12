// Ilyanna Foehrweiser
// Classes

#include <iostream>
#include <string>
using namespace std;

// Use keyword to make a class called robot.
// Semicolon at the end!!
class robot {
private:			// Anyone can see, call, or change these
	string name;
	string phrase;
	int charge = 10;
	int maxcharge = 100;
	int mincharge = 0;

public:
	// construsctor, has to be named... just like the class and it has no return type
	robot(string givenName, string givenPhrase, int givenCharge) {
		// Assigns this instance's variables to the given values.
		name = givenName;
		phrase = givenPhrase;
		charge = givenCharge;

		cout << "\nA new robot has been constructed!\n";
	}

	// Overloading constructor with a default:
	robot() {
		cout << "\nUsing DEFAULT constructor.\n";
		cout << "Hey programmer, please fix this in the source!!\n";
	}

	void SayHello() {
		cout << "My name is " << name << ", my charge is " << charge << ".\n";
		cout << phrase << "!\n";
		ChangeCharge();
	}

	// Setters and Getters give access to private variable through whatever tests we want to write.
	// SetCharge clamps charge to a range 0 - 100
	void SetCharge(int givenCharge) {
		if (givenCharge < 0) {
			charge = 0;
		}
		else if (givenCharge > 100) {
			charge = 100;
		}
		else {
			charge = givenCharge;
		}
	}
	void ChangeCharge(int by = 1) {
		charge += by;
		SetCharge(charge);
	}
	int GetCharge() {
		return charge;
	}

	void SetName(string givenName) {
		if (givenName.size() < 2) {
			cout << "Name is too short!\n";
			return;
		}
		else if (givenName.size() > 20) {
			cout << "Name is too long!\n";
		}
		else {
			name = givenName;
		}
	}
	string GetName() {
		return name;
	}
};

int main() {
	cout << "Classes!! Yep uh-huh yea yes absolutely-\n";

	robot creature;		// Constructor runs here!
	creature.SetName("The Creature");
	creature.SetCharge(4);

	cout << "\nLook at my newest robot design!! Their name is " << creature.GetName() << "!\n";
	cout << "They're still charging... Their charge is currently " << creature.GetCharge() << ".\n";

	creature.ChangeCharge(50);
	cout << "\nTwo hours later... The Creature's charge is now " << creature.GetCharge() << "!\n";

	robot bip("Bippity", "Hocus Pocus", 42);
	cout << "Here's another one, they're quite a fickle thing... their name is " << bip.GetName() << ".\n";

	cout << "They can introduce themselves, see!\n";
	bip.ChangeCharge(-200); // Rough day at the office...
	bip.SayHello();

	return 0;
}