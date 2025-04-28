#pragma once
#include <iostream>
using namespace std;

class item {
protected:
	string ItemName;
	string ItemLocation;

public:

	item();

	void Use();
	void Examine();

	void setItemLocation(string givenItemLocation) {
		ItemLocation = givenItemLocation;
	}

	string getItemLocation() {
		return ItemLocation;
	}

	void setItemLocation(string givenName){
		ItemName = givenName;
		}

	string getItemLocation() {
		return ItemName;
	}
};

