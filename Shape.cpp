/*********************************************************************
   PROGRAM:    CSCI 241 Assignment 9
   PROGRAMMER: Patrick Schlapp
   LOGON ID:   z1806407
   DUE DATE:   11/29/2016
 
   FUNCTION:   Defines methods of the abstract Shape object
*********************************************************************/
#include "Shape.h"
Shape::Shape(const string& c){ //constructor for theh Shape object
	color = c;
}
Shape::~Shape(){ //Destructor for Shape object
}
void Shape::print() const { //prints the color of the Shape object
	cout << color;
}
