// Ilyanna Foehrweiser

#include <iostream>
#include <string>
using namespace std;

class human {

private:
	string name;
	int health = 10;
	int damage = 4;

public:
	human(string givenName, int givenHealth, int givenDamage) {
		
		name = givenName;
		health = givenHealth;
		damage = givenDamage;

		cout << "\nAnother human populates the world!\n";
	}

	void SayHello() {
		cout << "My name is " << name << ", I have " << health << " health and do " << damage << " damage! It's nice to meet you!\n";
	}

	void setHealth(int givenHealth) {
		if (givenHealth < 0) {
			health = 0;
		}
		else if (givenHealth > 25) {
			health = 25;
		}
		else {
			health = givenHealth;
		}
	}

	void changeHealth(int byAmount = 1) {
		health += byAmount;
		setHealth(health);
	}

	int getHealth() {
		return health;
	}

	void setDamage(int givenDamage) {
		if (givenDamage < 1) {
			damage = 1;
		}
		else if (givenDamage > 15) {
			damage = 15;
		}
		else {
			damage = givenDamage;
		}
	}

	int getDamage() {
		return damage;
	}

	void setName(string givenName) {
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

	string getName() {
		return name;
	}
};

int main() {
	cout << "Welcome to earth!!";

	human sponch("Evil Sponch", 15, 2);

	sponch.SayHello();
	sponch.changeHealth(-5);

	cout << "\nOuch! Sponch stubbed their toe and now only has " << sponch.getHealth() << " health...\n";

	return 0;
}