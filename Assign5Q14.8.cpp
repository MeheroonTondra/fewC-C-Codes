//============================================================================
// Name        : 8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permutation(char *a, int l, int r)
{
   int i;
   if (l == r)
     cout << " " << a;
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permutation(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}


int main() {
	char str[] = "123";
	int n = strlen(str);
	permutation(str, 0, n-1);

	return 0;
}
