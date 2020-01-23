/*********************************************************************
   PROGRAM:    CSCI 241 Assignment 9
   PROGRAMMER: Patrick Schlapp
   LOGON ID:   z1806407
   DUE DATE:   11/29/2016
 
   FUNCTION:   Header for Rectangle object
*********************************************************************/
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <string>
#include "Shape.h"
using namespace std;
class Rectangle : public Shape{
private:
	int height;
	int width;
public:
	Rectangle(const string&, const int, const int);
	void print() const;
	double getArea() const;
};
#endif
