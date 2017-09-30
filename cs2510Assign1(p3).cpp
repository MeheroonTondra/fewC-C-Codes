//============================================================================
// Name        : cs2510Assign1(p3).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "How many cards do you have: ";
	cin >> num;
	int score = 0;
	int convert;
    if((num == 2) || (num == 3) || (num == 4) || (num == 5))
    {
    	char val;
    	cout << "What is your card value: ";
    	cin >> val;
    	bool done = true;
    	while(!done)
    	{
    		switch(val)
    		{
    		case 'a':
    		case 'A':
						convert = 1 || 11;
						break;
    		case '2':
    					convert = 2 || 10;
    					break;
    		case '3':
    					convert = 3 || 10;
    					break;
    		case '4':
    					convert = 4 || 10;
    					break;
    		case '5':
    					convert = 5 || 10;
    					break;
    		case '6':
    					convert = 6 || 10;
    					break;
    		case '7':
    					convert = 7 || 10;
    					break;
    		case '8':
    					convert = 8 || 10;
    					break;
    		case '9':
    					convert = 9 || 10;
    					break;
    		case 't':
    		case 'T':
    					convert = 10;
    					break;
    		case 'j':
    		case 'J':
    					convert = 10;
    					break;
    		case 'q':
    		case 'Q':
    					convert = 10;
    					break;
    		case 'k':
    		case 'K':
    					convert = 10;
    					break;
    		default:
    			 	 	done = false;
    		}
    	}
    	score = score + convert;
    	if(score >= 2 && score <= 21)
    	{
    		cout << score;
    	}
    	else
    	{
    		cout << "Busted";
    	}
    }
	return 0;
}
