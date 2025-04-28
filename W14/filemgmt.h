#pragma once	// Only compile things in here once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int arr[] = { 1, 2, 3, 4, 5 };
int size = sizeof(arr) / sizeof(arr[0]);

void WriteArrayToFile(string* arr, int size);
void WriteToFile();
void ReadFromFile();
void ReadFiletoArray();
