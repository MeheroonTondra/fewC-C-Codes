//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

double stanDev(double a[], int s);//calculates standard deviation of the partially filled array
								  //and return the the calculated value

int main() {
	double arr[10] = {4.0, 23.0, 7.0, 4.4, 90.0};
	for(int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}
	double v = stanDev(arr, 5);
	cout << "Standard deviation: " << v;
	return 0;
}

double stanDev(double a[], int s)
{
	double sum2;
	double sum = 0.0;
	double tot = 0.0;
	for(int i = 0; i < s; i++)
	{
		tot = tot + a[i];
	}
	double avg = tot/s;
	for(int i = 0; i < s; i++)
	{
		sum = sum + (pow((a[i] - avg), 2));
	}
	sum2 = sqrt(sum/s);
	return sum2;
}
