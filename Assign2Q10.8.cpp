//============================================================================
// Name        : 8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Odometert
{
public:
	Odometert() //constructor
	{
		miles = 0.0;
		efficiency = 0.0;
	}
	double getMiles();//to access miles value
	double getEfficiency(); // to access efficiency
	void setMiles(double m); //changes miles value
	void setEfficiency(double e);// changes the value of efficiency
	void add(double val, double m);//uses val to change the odometer total miles
	double gallons(double m, double e);//takes miles and efficiency and returns gallons
private:
	double miles;
	double efficiency;
};

double Odometert::getMiles()
{
	return miles;
}
double Odometert::getEfficiency()
{
	return efficiency;
}
void Odometert::setMiles(double m)
{
	miles = m;
}

void Odometert::setEfficiency(double e)
{
	efficiency = e;
}

void add(double val, double m)
{
	m = m + val;
	cout << m << endl;
}

double gallons(double m, double e)
{
	double g = m/e;
	return g;
}


int main() {
	Odometert one;
	one.setMiles(22.9);
	one.setEfficiency(2.3);
	double val;
	cout << "Enter miles driven: " << endl;
	cin >> val;
	add(val, one.getMiles());
	double gas = gallons(one.getMiles(), one.getEfficiency());
	cout << "Number of gallons: " << gas << endl;
	return 0;
}
