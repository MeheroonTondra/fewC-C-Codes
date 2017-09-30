//============================================================================
// Name        : assign5q17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Assign5Q17.9.cpp"
using namespace std;

int main() {
	Map <int, char> one(1, 'b');
	Map<int, char> two(2, 'a');
	Map<int, char> three(5, 'z');
	Map<int, char> four(8, 'c');
	one.getValue();
	one.add(two);
	one.add(four);
	one.add(three);
	one.del(two.getkey(), two);
	one.retrieve(four.getkey(), four);
	return 0;
}
