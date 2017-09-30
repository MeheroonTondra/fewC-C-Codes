//============================================================================
// Name        : 2(p2).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "Assign3Q12.2.h"
using namespace std;

int main() {
	Rational val();
	Rational val1(1, 3);
	Rational val2(1, 4);
	cout << val1 << endl;
	cout << val2 << endl;
	Rational some = val1 + val2;
	cout << some;
	Rational another = some * val1;
	cout << another;
	if(some == another)
	{
		cout << "true" << endl;
	}
	else if(some < another)
	{
		cout << some <<" less than " << another << endl;
	}
	else
	{
		cout << some << " greater than " << another << endl;
	}


	return 0;
}


