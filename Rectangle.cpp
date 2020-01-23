/*********************************************************************
   PROGRAM:    CSCI 241 Assignment 9
   PROGRAMMER: Patrick Schlapp
   LOGON ID:   z1806407
   DUE DATE:   11/29/2016
 
   FUNCTION:   Defines methods of the Rectangle object
*********************************************************************/
#include "Rectangle.h"
Rectangle::Rectangle(const string& c, const int h, const int w) : Shape(c){ //constructor for Rectangle object
	height = h;
	width = w;
}
void Rectangle::print() const{ //prints data members of Rectangle object
	Shape::print();
	cout << " rectangle, height " << height << ", width " << width << ", area " << getArea() << endl;
}
double Rectangle::getArea() const{ //returns area of the Rectangle object
	return (height * width);
}
