// Ilyanna Foehrweiser
// Inheritance :DD

#include <iostream>
#include <string>
using namespace std;

bool debug = true;

class human {

protected:
	string name;
	int health;
	int damage;

public:
	human(string givenName, int givenHealth = 10, int givenDamage = 4) {
		setName(givenName);
		setHealth(givenHealth);
		setDamage(givenDamage);

		cout << "Another human populates the world!\n";
		// SayHello();
	}

	human() {
		cout << "\nUsing default constructor.\n";
		// SayHello();
	}

	void SayHello() {
		cout << "My name is " << name << ", I have " << health << " health and do " << damage << " damage!\n";
	}

	void setHealth(int byAmount) {
		if (health < 0) health = 0;
		if (health > 100) health = 100;
		if (debug) {
			cout << "\nAt SetHealth(byAmount), health = " << getHealth() << ", byAmount = " << byAmount << ".\n";
		}
		health += byAmount;
	}
	int getHealth() {
		return health;
	}

	void setDamage(int givenDamage) {
		damage = givenDamage;
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

class barbarian : public human {
	// This class inherits all of the same things as human.
	// add a constructor
	// add a Yell() function
	// add a doubleSwing() function
	
public:
	barbarian(string givenName, int givenHealth = 10, int givenDamage = 4) {
		setName(givenName);
		setHealth(givenHealth);
		setDamage(givenDamage);
	}

	void Yell() {
		cout << "The barbarian unleahses a mighty yell that boosts all of his team's stats.\n";
	}

	void doubleSwing(human& target) {
		cout << getName() << " swings both weapons at " << target.getName() << "!\n";
		
		// Call setDamage() function on human target
		// Use the damage from "this" barbarian
		// Double the damage for 2 swings!
		int tempdamage = this->getDamage() * 2;
		target.setHealth(-tempdamage);
	}
}; 

class shopkeep : public human {
protected:
	string ShopName;
	int gold;

public:
	shopkeep(string givenName, string givenShopName, int givenGold = 100, int givenHealth = 10, int givenDamage = 2) {
		setName(givenName);
		setShopName(givenShopName);
		setGold(givenGold);
		setHealth(givenHealth);
		setDamage(givenDamage);
	}

	void setGold(int givenGold) {
		gold = givenGold;
	}
	int getGold() {
		return gold;
	}

	void setShopName(string givenShopName) {
		ShopName = givenShopName;
	}
	string getShopName() {
		return ShopName;
	}
};

int main() {
	cout << "Welcome to earth!!";

	barbarian bane("Bane", 20, 4);
	bane.SayHello();

	human sponch("Evil Sponch", 15, 2);
	sponch.SayHello();

	sponch.setHealth(-5);

	cout << "\nOuch! Sponch stubbed their toe and now only has " << sponch.getHealth() << " health...\n";

	bane.doubleSwing(sponch);
	sponch.SayHello();

	shopkeep servil("Servil", "The Potion Stop", 20, 10, 2);
	cout << "Welcome to my store, " << servil.getShopName() << "!\n";
	servil.SayHello();

	bane.doubleSwing(servil);

	return 0;
}