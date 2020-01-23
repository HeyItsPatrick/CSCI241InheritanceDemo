/*********************************************************************
   PROGRAM:    CSCI 241 Assignment 9
   PROGRAMMER: Patrick Schlapp
   LOGON ID:   z1806407
   DUE DATE:   11/29/2016
 
   FUNCTION:   Defines methods of the Circle object
*********************************************************************/
#include "Circle.h"
Circle::Circle(const string& c, const int r) : Shape(c){ //alternative constructor for Circle object
	radius = r;
}
void Circle::print() const{ //prints the data members of the Circle
	Shape::print();
	cout << " circle, radius " << radius << ", area " << getArea() << endl;
}
double Circle::getArea() const{ //returns the area of the circle
	return (radius*radius*M_PI);
}
