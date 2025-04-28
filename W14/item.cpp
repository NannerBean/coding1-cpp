#include "item.h"

enum ItemLocation { GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY };

item::item() {
	cout << "Creating a new item...\n";
	ItemLocation = MARKET;
}

void Use(){
	cout << "You take out your item!\n";
}

void Examine() {
	cout << "You examine it closely... This item appears to be from" << getItemLocation() << "\n.";
}
