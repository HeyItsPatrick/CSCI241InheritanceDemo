/*********************************************************************
   PROGRAM:    CSCI 241 Assignment 9
   PROGRAMMER: Patrick Schlapp
   LOGON ID:   z1806407
   DUE DATE:   11/29/2016
 
   FUNCTION:   Assignment 9 driver program to test Shape inheritance
*********************************************************************/

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
	cout << fixed << setprecision(2);
	vector<Shape *> shapes(6);
	shapes[0] = new Circle("green", 10);
	shapes[1] = new Rectangle("red", 8, 6);
	shapes[2] = new Triangle("yellow", 8, 4);
	shapes[3] = new Triangle("black", 4, 10);
	shapes[4] = new Circle("orange", 5);
	shapes[5] = new Rectangle("blue", 3, 7);
	cout << "Printing all shapes" << endl;
	for (size_t i = 0; i < shapes.size(); i++){
		shapes[i]->print();
	}
	cout << endl << "Printing only triangles" << endl << endl;
	for (size_t i = 0; i < shapes.size(); i++){
		Triangle* ptr = dynamic_cast<Triangle *>(shapes[i]);
		if (ptr != 0)
			shapes[i]->print();
	}
	for (size_t i = 0; i < shapes.size(); i++){
		shapes[i]->~Shape();
	}
}
