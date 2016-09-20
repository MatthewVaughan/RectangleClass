// File Prologue for a typical header file
// - The header file contains class definitions and function declarations
// Author: Matthew Vaughan
// Course: CS 1410 
// Project: Lab #3 Example Program
// - Illustrates strucure and style of a C++ program
// Date Last Modified: July 2016
//
// I declare that the following code was written by me or provided 
// by the instructor for this project. I understand that copying source
// code from any other source constitutes cheating, and that I will receive
// a zero on this project if I am found in violation of this policy.
// ---------------------------------------------------------------------------
#pragma once

class Rectangle
{
public:
	// Default Constructor
	// Purpose: Initializes height and width at zero
	// Parameters: none
	// Returns: none
	Rectangle();

	// Parameterized Constructor
	// Purpose: Initializes the number of tokens to n
	// Parameters: h, w, the height and width
	// Returns: none
	Rectangle(int, int);

	// getWidth Function
	// Purpose: returns the width
	// Parameters: none
	// Returns: an integer
	int getWidth() const;

	// getHeight Function
	// Purpose: returns the height
	// Parameters: none
	// Returns: an integer
	int getHeight() const;

	// getArea Function
	// Purpose: returns the Area of the Rectangle
	// Parameters: none
	// Returns: an integer
	int getArea() const;

private:
	int height;
	int width;
};