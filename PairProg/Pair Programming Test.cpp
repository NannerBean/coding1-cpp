// Pair Programming Test.cpp : This file contains the 'main' function. Program execution begins and ends there.


// In-Out Stream
#include <iostream>

int main()
{ //Everything within brackets is the program.
    std::cout << "Hello Zack!\nHello Ilyanna!\nHow are you two today :)?\n";    // \n = new line \t= tab

    std::cout << "\nI hope your day is going well!\nI'm feeling a tad laggy :(\n";


    //Variables, (integar, float, string, char, boolean)
    // (Type Name = Value)
    int distance = 45; //miles

    std::string destination = "Portland, OR"; //city,state


    // Type is bool, Name is areWeThereYet, value is false.
    bool areWeThereYet = false;

    //use variable to talk to the user
    // write the sentence "We are going to destination, it is <distance> miles away."

    std::cout << "\nWe are going to " << destination << ". It is "<< distance <<" miles away.\n";
}