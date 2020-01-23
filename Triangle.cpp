/*********************************************************************
   PROGRAM:    CSCI 241 Assignment 9
   PROGRAMMER: Patrick Schlapp
   LOGON ID:   z1806407
   DUE DATE:   11/29/2016
 
   FUNCTION:   Defines methods of the Triangle object
*********************************************************************/
#include "Triangle.h"
Triangle::Triangle(const string& c, const int h, const int b) : Shape(c){ //constructor for the Triangle object
	height = h;
	base = b;
}
void Triangle::print() const{ //outputs the private members of the Triangle object
	Shape::print();
	cout << " triangle, height " << height << ", base " << base << ", area " << getArea() << endl;
}
double Triangle::getArea() const{ //returns the area of the Triangle object
	return (height * base) / 2;
}
