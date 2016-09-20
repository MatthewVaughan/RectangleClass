// File Prologue for a .cpp file - it contains the implementation code
// Author: Matthew Vaughan
// Course: CS 1410 
// Project: Lab #3 Example Program
//        Illustrates strucure and style of a C++ program
// Date Last Modified: July 2016
//
// I declare that the following code was written by me or provided 
// by the instructor for this project. I understand that copying source
// code from any other source constitutes cheating, and that I will receive
// a zero on this project if I am found in violation of this policy.
// ---------------------------------------------------------------------------
// Need to #include the header file assocoiated with this .cpp file
#include <iostream>
#include "Drive.h"   // we #include the header file for the Tokengiver class
using namespace std;

int main()
{
	//declare two const int
	const int
		FOUR = 4,
		SEVEN = 7;

	// Create a new TokenGiver object
	Rectangle Rectangle(FOUR, SEVEN); // this object is on the stack

	//Display the objects height, width, and area by means of the objects methods
	cout << "The rectangles height: " << Rectangle.getHeight();
	cout << "\nThe rectangles width: " << Rectangle.getWidth();
	cout << "\nThe rectangles area: " << Rectangle.getArea();

	//End the program
	cout << endl;
	system("PAUSE");
	return 0;
}