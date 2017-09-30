//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {
	string some;
	double coin;
	double total = 0.0;
	bool extra = false;
	double SUM = 3.50; //cost for a twinkie
	cout << "$3.50 for a deep-fried twinkie." << endl;
	cout << "Press y to buy one." << endl;
	cin >> some;
	if(some == "y" || some == "Y")
	{

		while(!extra && total < SUM)
		{
			cout << "Insert coin: " << endl;
			cin >> coin; //prompting user for inserting coins
			if(coin == 1.00 || coin == 0.25 || coin == 0.10 || coin == 0.05)
			{
				cout << coin << " is inserted!" << endl;
				total = total + coin; //total coins added
				cout << "Total: "<< total << endl;
				if(total >= SUM)
				{
					extra = true;
				}
			}
			else
			{
				cout << "Only a dollar, quarter, dime and nickel accepted";
				extra = true;
			}


		}
		double change = total - SUM; //the change after all coins added
		cout << "Enjoy your deep-fried twinkie!" << endl;
		cout << "Your change is: " << change << endl;
	}
	else
	{
		cout << "Press y to buy and N to exit:" << endl;
		cin >> some;
	}
	return 0;
}
