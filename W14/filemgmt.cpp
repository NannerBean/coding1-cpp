#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void WriteArrayToFile(string* arr, int size) {

	ofstream file("favs.txt");

	if (!file.is_open()) {
		return;
	}

	for (int i = 0; i < size; i++) {
		file << arr[i] << "\n";
	}

	file.close();
}

void WriteToFile() {
	// Creates and opens file.txt
	ofstream file("file.txt");

	// Write a line to the file... or to the buffer at least
	file << "Play Ocarina of Time!!!";

	// Close the file
	file.close();
}

void ReadFromFile() {
	string fileContents;

	ifstream file("file.txt");

	while (getline(file, fileContents)) {
		cout << fileContents;
	}

	file.close();
}

void ReadFiletoArray() {

	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);

	ifstream file ("list.txt");

	for (int i = 0; i < size; ++i);

	file.close();

	cout << "Here's the list: ";
	for (int i = 0; i < 10; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}