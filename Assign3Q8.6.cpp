//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string text;
	cout << "Enter a line of text: " << endl;
	getline(cin, text); // inputs line with text
	cout << text << endl; // outputs the line
	for(string::size_type i = 0; i < text.length(); i++)
	{
		if((text[i] == ' ') && (isdigit(text[i+1])))
		{
			int j = 1;
			do
			{
				text[i+j] = 'x';
				j++;
			} while(text[i+j] != ' ');

		}
	}
	cout << text;// outputs the modified line
	return 0;
}
