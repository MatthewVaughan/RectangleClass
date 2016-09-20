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
#include "Drive.h"
#pragma once

Rectangle::Rectangle()
{
	height = 0;
	width = 0;
};

Rectangle::Rectangle(int h, int w)
{
	height = h;
	width = w;
};

int Rectangle::getHeight() const
{
	//return the private field width
	return height;
};

int Rectangle::getWidth() const
{
	//return the private field width
	return width;
};

int Rectangle::getArea() const
{
	//declare new int to store the area and return it
	int area = height * width;
	return area;
};