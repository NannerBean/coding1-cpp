// Ilyanna Foehrweiser
// Files and stuff

#include "filemgmt.h"
#include "item.h"// Import extra functions we've created.

// Read array from file... that'll be homework ;)
// Header and other source files !!!

// In a new source file with a header, create a new class names item with the following variables and functions
	// string name, int location, item(), use(), examine()

int main() {
	cout << "And FinFin was there too!\n";

	ReadFromFile();
	WriteToFile();

	string favs[100];
	int nextIndex = 0;

	cout << "\nList out your favorite games or type 'done' when done:\n";
	while (true) {
		string input;
		cout << "<<";
		getline(cin, input);

		if (input == "done") {
			break;
		}
		
		favs[nextIndex] = input;
		nextIndex++;
	}

	WriteArrayToFile(favs, nextIndex);
	ReadFiletoArray();

	// create 5 items

	// Write all created items into an array
	// Use Function to display array of items
	
	// This code is very broken but I had a mentally draining weekend and I work until 11:45 tonight.
	// I don't have the cognitive capacity to fix it right now :(.

	return 0;
}