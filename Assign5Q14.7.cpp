//============================================================================
// Name        : 7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int calculate(int n);

int main() {
    int dollars = 20;
    cout << calculate(dollars);
	return 0;
}

int calculate(int n)
{
	int coupons = n;
	int chocolate = n;
	if(coupons%7 == 0)
	{
		return chocolate + n/7;
		coupons = coupons - 7*chocolate;
		coupons = coupons + n/7;

	}
	else
	{
		return 1 + calculate(coupons-1);
	}
}
