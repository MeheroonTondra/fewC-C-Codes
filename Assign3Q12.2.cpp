//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <fstream>
#include "Assign3Q12.2.h"
using namespace std;


int Rational::getNum()
{
	return numerator;
}
int Rational::getDen()
{
	return denominator;
}
void Rational::setNum(int n)
{
	numerator = n;
}
void Rational::setDen(int d)
{
	denominator = d;
}

void Rational:: normalize()
{
	if (numerator < 0 || denominator < 0)
	{
		numerator = -numerator;
	}
	else if (numerator < 0 && denominator < 0)
	{
		numerator = +numerator;
		denominator = + denominator;
	}
	int a = numerator;
	int b = denominator;
	int temp;
	while(b)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	int gcd = a;
	if(gcd != 0)
	{
		numerator = numerator/gcd;
		denominator = denominator/gcd;
	}
}

istream& operator >>(istream& ins, Rational& r)
{
	int n, d;
	ins >> n >> d;
	return ins;
}
ostream& operator <<(ostream& out, Rational& r)
{
	out << r.getNum() << "/" << r.getDen();
	return out;
}

bool operator ==(Rational& r1, Rational& r2)
{
	return ((r1.getNum() * r2.getDen()) == (r1.getDen() * r2.getNum()));
}

bool operator <(Rational& r1, Rational& r2)
{
	return ((r1.getNum() * r2.getDen()) < (r1.getDen() * r2.getNum()));
}

bool operator <=(Rational& r1, Rational& r2)
{
	return ((r1.getNum() * r2.getDen()) <= (r1.getDen() * r2.getNum()));
}

bool operator >(Rational& r1, Rational& r2)
{
	return ((r1.getNum() * r2.getDen()) > (r1.getDen() * r2.getNum()));
}

bool operator >=(Rational& r1, Rational& r2)
{
	return ((r1.getNum() * r2.getDen()) >= (r1.getDen() * r2.getNum()));
}

Rational operator +(Rational& r1, Rational& r2)
{
	int n, d;
	n = r1.getNum()*r2.getDen() + r1.getDen()*r2.getNum();
	d = r1.getDen()*r2.getDen();
    Rational c(n, d);
    return c;
}

Rational operator -(Rational& r1, Rational& r2)
{
	int n, d;
	n = r1.getNum()*r2.getDen() - r1.getDen()*r2.getNum();
	d = r1.getDen()*r2.getDen();
	Rational c(n, d);
    return c;
}

Rational operator *(Rational& r1, Rational& r2)
{
	int n, d;
	n = r1.getNum()*r2.getNum();
	d = r1.getDen()*r2.getDen();
	Rational c(n, d);
	return c;
}

Rational operator /(Rational& r1, Rational& r2)
{
	int n, d;
	n = r1.getNum()*r2.getDen();
	d = r1.getDen()*r2.getNum();
	Rational c(n, d);
	return c;
}

