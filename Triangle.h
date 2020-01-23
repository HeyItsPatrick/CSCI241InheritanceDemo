/*********************************************************************
   PROGRAM:    CSCI 241 Assignment 9
   PROGRAMMER: Patrick Schlapp
   LOGON ID:   z1806407
   DUE DATE:   11/29/2016
 
   FUNCTION:   Header for Triangle object
*********************************************************************/
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <string>
#include "Shape.h"
using namespace std;
class Triangle : public Shape{
private:
	int height;
	int base;
public:
	Triangle(const string&, const int, const int);
	void print() const;
	double getArea() const;
};
#endif
