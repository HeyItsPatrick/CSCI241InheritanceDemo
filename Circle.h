/*********************************************************************
   PROGRAM:    CSCI 241 Assignment 9
   PROGRAMMER: Patrick Schlapp
   LOGON ID:   z1806407
   DUE DATE:   11/29/2016
 
   FUNCTION:   Header for Circle object
*********************************************************************/
#ifndef CIRCLE_H
#define CIRCLE_H
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <math.h>
#include "Shape.h"
using namespace std;
class Circle : public Shape{
private:
	int radius;
public:
	Circle(const string&, const int);
	virtual void print() const;
	virtual double getArea() const;
};
#endif
