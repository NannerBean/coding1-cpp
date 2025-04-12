// Ilyanna Foehrweiser
// Structures
// ... are identical to classes except public by default.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum enemyType {GRUNT, MINIBOSS, BOSS};

// POD structures:
// Custom Variable Type)
struct enemy {
	//these data memebers are public by default.

	int health = 10;
	int damage = 4;
	string name = "Bad Guy";
	enemyType type = GRUNT;
};

struct address {
	string StreetName;
	int StreetNumber;
	string City;
	string State;
	int ZipCode;
};

struct employee {
	int ID = 0;
	string name;
	int age;
	
	address addr;
	float wage;
};

string AddressOneLine(address addr) {
	string oneLine = "";
	oneLine += to_string(addr.StreetNumber);
	oneLine += " " + addr.StreetName;
	oneLine += ", " + addr.City;
	oneLine += ", " + addr.State;
	oneLine += ", " + to_string(addr.ZipCode);

	return oneLine;
}

int main() {

	enemy Brayden;
	Brayden.health = 10;
	Brayden.damage = 4;
	Brayden.name = "Evil Brayden";
	Brayden.type = GRUNT;

	cout << "Here's " << Brayden.name << "! His health is " << Brayden.health << "!\n";

	enemy Sneeb;
	Sneeb.damage = 6;
	Sneeb.health = 100;
	Sneeb.name = "Lord Sneebis";
	Sneeb.type = BOSS;

	cout << Sneeb.name << " is attacking " << Brayden.name << "!\n";
	Brayden.health -= Sneeb.damage;

	if (Brayden.health < 1) {
		cout << Brayden.name << " had been killed!!\n";
	}
	else {
		cout << Brayden.name << " has " << Brayden.health << " health left...\n";
	}

	vector<enemy> enemies;
	enemies.push_back(Brayden);
	enemies.push_back(Sneeb);

	cout << "\nStatus of all enemies;\n";

	for (int i = 0; i < enemies.size(); i++) {
		cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
		cout << "Their damage is " << enemies[i].damage << " and their type is ";
		switch (enemies[i].type)
		{
		case GRUNT:
			cout << "grunt";
			break;
		case MINIBOSS:
			cout << "mini-boss";
			break;
		case BOSS:
			cout << "boss";
			break;
		default:
			cout << "unknown";
			break;
		}

		cout << ".\n";
	}

	employee Nanners;
	Nanners.ID = 10284;
	Nanners.name = "Ilyanna Foehrweiser";
	Nanners.age = 19;
	Nanners.wage = 10;
	Nanners.addr.StreetNumber = 1229;
	Nanners.addr.StreetName = "Lendwide Dr";
	Nanners.addr.City = "Omaha";
	Nanners.addr.State = "NE";
	Nanners.addr.ZipCode = 60123;

	cout << "\n" << Nanners.name << " lives at " << AddressOneLine(Nanners.addr) << "!\n";

	return 0;
} 