//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string* addEntry(string *dynamicArray, int &size, string newEntry);
string* deleteEntry(string *dynamicArray, int &size, string entryToDelete);

int main() {
	typedef string* StringP;
	StringP s;
	s = new string[5];
	s[0]= "name1";
	s[1]= "name2";
	s[2]= "name3";
	s[3]= "name4";
	s[4]= "name5";
	string v = "nam";
	int m = 5;
	addEntry(s, m, v);
	deleteEntry(s, m, v);
	for (int i = 0; i < 6; i++)
	{
		cout << s[i] << endl;
	}
	return 0;
}

string* addEntry(string *dynamicArray, int &size, string newEntry)
{
	typedef string* StringP;
	StringP a;
	a = new string[size + 1];
	*a = *dynamicArray;
	a[size] = newEntry;
	size = size + 1;
	delete []dynamicArray;
	return a;

}

string* deleteEntry(string *dynamicArray, int &size, string entryToDelete)
{
	for(int i = 0; i < size; i++)
	{
		if(dynamicArray[i] == entryToDelete)
		{
			typedef string* StringP;
			StringP a;
			a = new string[size - 1];
			for(int j = 0; j < size-1; j++)
			{
				a[j] = dynamicArray[j];
			}
			size = size - 1;
			dynamicArray = a;
		}
	}
	return dynamicArray;
}
