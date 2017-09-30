//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef RATIONAL_
#define RATIONAL_
#include <iostream>
#include <fstream>
using namespace std;

class Rational
{
public:
	Rational()//default constructor
	{
		numerator = 0;
		denominator = 1;
	}
	Rational(int whole_number)//constructor for whole numbers
	{
		numerator = whole_number;
		denominator = 1;
	}
	Rational(int num, int den)//constructor for any integer numbers
	{
		numerator = num;
		denominator = den;
	}
	int getNum(); //accessor method
	int getDen();
	void setNum(int n); // mutator method
	void setDen(int d);
	friend istream& operator >>(istream& ins, Rational& r); //input integers for Rational number
	friend ostream& operator <<(ostream& out, Rational& r); // output in rational form; "a/b".
	friend bool operator ==(Rational& r1, Rational& r2); //compares if two rational numbers are equal
	void normalize();// denominator is positive, and the ratio is simplified.
	friend bool operator <(Rational& r1, Rational& r2); //overloading operator; less than
	friend bool operator <=(Rational& r1, Rational& r2); //overloading operator; less than or equal
	friend bool operator >(Rational& r1, Rational& r2); //overloading operator; greater than
	friend bool operator >=(Rational& r1, Rational& r2); //overloading operator; greater than or equal
	friend Rational operator +(Rational& r1, Rational& r2); //addition operator
	friend Rational operator -(Rational& r1, Rational& r2); //subtraction operator
	friend Rational operator *(Rational& r1, Rational& r2); //operator for multiplying
	friend Rational operator /(Rational& r1, Rational& r2); //division operator
private:
	int numerator;
	int denominator;
};

#endif
