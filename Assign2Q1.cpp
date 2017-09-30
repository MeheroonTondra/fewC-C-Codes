//============================================================================
// Name        : Assign2Q1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void getMoney(double c); // putting coins in the machine and prompting
                 // the user for inserting
double add(double c, double& s, double d, double q, double di, double n);

int main() {
	int twinkies;
	double coin;
	string again = "y";
	double dollar = 1.00;
	double quarter = 0.25;
	double dime = 0.10;
	double nickel = 0.05;
	double sum = 0.0;
	double change;
	cout << "Price: $3.50" << endl;

	if(again == "y" || again == "Y")
	{
		add(coin, sum, dollar, quarter, dime, nickel);
		cout << "Enjoy your deep-fried twinkie!" << endl;
		cout << "Your change is: " << change;
	}
	cout << "Would you like to go again? (Y/N)" << endl;
	cin >> again;
	return 0;
}

void getMoney(double c)
{
	cout << "Insert coin" << endl;
	cin >> c;
}

double add(double c, double& s, double d, double q, double di, double n)
{
	while(s < 3.50)
	{
		getMoney(c);
		if(c == d)
		{
			s = s + d;
			cout << c << " is inserted" << endl;
			cout << "total: " << s << endl;
		}
		else if(c == q)
		{
			s = s + d;
			cout << c << " is inserted" << endl;
		}
		else if(c == di)
		{
			s = s + d;
			cout << c << " is inserted" << endl;
		}
		else if(c == n)
		{
			s = s + d;
			cout << c << " is inserted" << endl;
		}
	}
	return s;
}
