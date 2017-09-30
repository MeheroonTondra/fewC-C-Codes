//============================================================================
// Name        : Assign2Q2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

double index(double s, double t, double w);
//given wind speed and temperature
//calculates and returns windchill index


int main() {
	double speed, temp;
	double windchill;
	cin >> speed >> temp;
	cout << index(speed,temp, windchill);
	return 0;
}

double index(double s, double t, double w)
{
	w = 13.12 + (0.6215 * t) - (11.37 * pow(s, 0.16)) + (0.3965 * t * pow(s, 0.016));
	return w;
}
