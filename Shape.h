/*********************************************************************
   PROGRAM:    CSCI 241 Assignment 9
   PROGRAMMER: Patrick Schlapp
   LOGON ID:   z1806407
   DUE DATE:   11/29/2016
 
   FUNCTION:   Header for Shape object
*********************************************************************/
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;
class Shape{
private:
	string color;
public:
	Shape(const string&);
	virtual ~Shape();
	virtual void print() const ;
	virtual double getArea() const = 0;
};
#endif
