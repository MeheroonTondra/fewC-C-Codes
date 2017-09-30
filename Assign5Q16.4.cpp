//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class MonthError
{
public:
	MonthError()
{
		month = 1;
}
	MonthError(int m)
	{
		if((m >= 1) && (m <= 12))
		{
			month = m;
		}
		else
		{
			cout << "invalid month number; please try again." << endl;
		}
	}
	int getMonth();
private:
	int month;
};

class DayError
{
public:
	DayError()
{
		day = 1;
}
	DayError(int d, MonthError m)
	{
		if(m.getMonth()== 2)
		{
			if((d >= 1) && (d <= 29))
			{
				day = d;
			}
			else
			{
				cout << "invalid day for February." << endl;
			}
		}
		else if((m.getMonth()== 1)|| (m.getMonth()== 3) || (m.getMonth()== 5) || (m.getMonth()== 7) || (m.getMonth()== 8)|| (m.getMonth()== 10) ||(m.getMonth()== 12))
		{
			if((d >= 1) && (d <= 31))
			{
				day = d;
			}
			else
			{
				cout << "invalid day for the month." << endl;
			}
		}
		else
		{
			if((d >= 1) && (d <= 30))
			{
				day = d;
			}
			else
			{
				cout << "invalid day for the month." << endl;
			}
		}
	}
	int getDay();
private:
	int day;
	MonthError m;
};

int main() {
	string date; string again = "y";
	while(again != "n")
	{
	cout << "Enter date in numerical format, e.g. 1/31" << endl;
	getline(cin, date);
	if(date[0]> '1')
	{

	}
	cout << "That is the same as" << endl;
	if(date[0] == '1')
		cout << "January " + date.substr(2, (date.length()-1)) << endl;
	else if(date[0] == '2')
		cout << "February" + date.substr(2, (date.length()-1)) << endl;

	else if(date[0] == '3')
			cout << "March " + date.substr(2, (date.length()-1)) << endl;
	else if(date[0] == '4')
			cout << "April " + date.substr(2, (date.length()-1)) << endl;
	else if(date[0] == '5')
			cout << "May " + date.substr(2, (date.length()-1)) << endl;
	else if(date[0] == '6')
			cout << "June " + date.substr(2, (date.length()-1)) << endl;
	else if(date[0] == '7')
			cout << "July " + date.substr(2, (date.length()-1)) << endl;
	else if(date[0] == '8')
			cout << "August " + date.substr(2, (date.length()-1)) << endl;
	else if(date[0] == '9')
			cout << "September " + date.substr(2, (date.length()-1)) << endl;
	else if((date[0] == '1') || (date[1] == '0'))
			cout << "October " + date.substr(3, (date.length()-1)) << endl;
	else if((date[0] == '1') || (date[1] == '1'))
			cout << "November " + date.substr(3, (date.length()-1)) << endl;
	else if((date[0] == '1') || (date[1] == '2'))
			cout << "December " + date.substr(3, (date.length()-1)) << endl;

    cout << "Again?(y/n)" << endl;
    cin >> again;
	}

	int mon, d;
		try{
			cout<< "enter the same month and day" << endl;
			cin >> mon >> d;
			if(mon > 12)
			{
				throw MonthError(mon);
			}
			if((d < 0)|| (d >= 31))
			{
				throw DayError(d, mon);
			}
		}
		catch(MonthError& e)
		{
			cout << "Please try again." << endl;
		}
		catch(DayError& e)
		{
			cout << "please try another date." << endl;
		}

	return 0;
}

int MonthError::getMonth()
{
	return month;
}

int DayError::getDay()
{
	return day;
}
