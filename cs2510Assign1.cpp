//============================================================================
// Name        : cs2510Assign1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double computeFace(double amount, double interest, double month);

int main() {
	double amount, interest, duration;
	cout << "Enter the amount the consumer needs to receive: " << endl;
	cin >> amount;
	cout << "Enter the interest rate: " << endl;
	cin >> interest;
	cout << "Enter the duration of the loan in months: " << endl;
	cin >> duration;

	cout << "The face value required in order for the consumer to receive the amount need: "
		 << computeFace(amount, interest, duration) << endl;
    double monthlyPay = computeFace(amount, interest, duration)/duration;
    cout << "Monthly Payment: " << monthlyPay;
	return 0;
}
double computeFace(double amount, double interest, double month)
{
	double value;
	value = amount/(1 - ((interest * month)/12));
	return value;


}
