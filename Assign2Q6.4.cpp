//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void compute(ifstream& input, string , ofstream& output);
//inputs from file from "fileOne.dat"
//reads it to find the average length
//of words in the file
//output in another file

int main() {
	string some = "";
	ifstream input;
	ofstream output;
	input.open("fileOne.dat");
	output.open("outfile.dat");
	compute(input, some, output);
    output.close();
    input.close();
    return 0;
}

void compute(ifstream& input, string next, ofstream& output)
{
	double sum = 0.0;
	int count = 0;
	while(!input.eof())
	{
		input >> next;
		sum = sum + next.length();
		count = count + 1;
	}
	double avg = sum/count;
	output << "Average length: " << avg << endl;
}
