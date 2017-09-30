//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

void reverse(char s[]);// takes c string and reveres it
void reverse_string(char*ptr); // takes a c string and uses pointer
							   // to swap and reverse the string

int main() {
	char str[7];
	cout << "enter c_string" << endl;
	cin.getline(str, 7);
	reverse(str);
	cout << str << endl;
    cout << "The reverse of beautiful is: " << endl;
	char buffer[]= "beautiful";
	reverse_string(buffer);
	cout << buffer;


	return 0;
}

void reverse(char s[])
{
	for(unsigned int i=0;i <strlen(s)/2;i++)
	{
	    char temp=s[i];
	    s[i]=s[strlen(s)-i-1];
	    s[strlen(s)-i-1]=temp;
	}

}

void reverse_string(char*ptr) {

	int n = strlen(ptr); // length of string pointed by ptr
	int i = 0;  // index of first character
	int j = n-1;// index of last character
	char temp;

	while( i < j ) {

		// Swap the characters
		temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;

		// move forward both in front and back
		i++;
		j--;
	}
}
