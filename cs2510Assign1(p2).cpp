//============================================================================
// Name        : cs2510Assign1(p2).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "How many exercises to input: ";
	cin >> N;
	int score = 0;
	int total = 0;
    for(int i = 1; i <= N; i++)
    {
    	int score1;
    	cout << "Score received for exercise " << i << ": ";
    	cin >> score1;
    	score = score + score1;
    	int tot;
    	cout << "Total points possible for exercise " << i << ": ";
    	cin >> tot;
    	total = total + tot;
    }
    double percent = ((double)score * 100.00)/total;
    cout << "Your total is " << score << " out of " << total << ", or ";
    cout.precision(2);
    cout << percent << "%";

	return 0;
}
