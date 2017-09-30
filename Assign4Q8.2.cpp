//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int word(string s);//takes a line of text, counts and returns the number of words
void letters(string m);

int main() {
	string s;
	cout << "Enter a line of text: " << endl;
	getline(cin, s);
	cout << word(s) << "words" << endl;
	letters(s);
	return 0;
}

int word(string s)
{
	int word = 0;
	for(int i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == ' ')
		{
			word++;
		}
		else if(s[i] == ',')
		{
			word++;
		}
		else if(s[i] == '.')
		{
			word++;
		}
	}
	return word + 1;
}

void letters(string m)
{
	int a = 0;int b = 0;int c = 0;int d = 0;int e = 0;int f = 0;int g = 0;
	int h = 0;int I = 0; int j = 0; int K = 0;int l = 0;int M = 0;int n = 0;
	int o = 0;int p = 0;int q = 0;int r = 0;int s = 0;int t = 0;int u = 0;
	int v = 0;int w = 0;int x = 0;int y = 0;int z = 0;
	for(unsigned int i = 0; i < m.length(); i++)
	{
		if((m[i] == 'a') || (m[i] == 'A'))
		{
			a = a + 1;
			cout << a << "a" << endl;
		}
		else if((m[i] == 'b') || (m[i] == 'B'))
		{
			b = b + 1;
			cout << b << "b" << endl;
		}
		else if((m[i] == 'c') || (m[i] == 'C'))
		{
			c = c+ 1;
			cout << c << "c" << endl;
		}
		else if((m[i] == 'd') || (m[i] == 'D'))
		{
			d=d+1;
			cout << d << "d" << endl;
		}
		else if((m[i] == 'e') || (m[i] == 'E'))
		{
			e=e+1;
			cout << e << "e" << endl;
		}
		else if((m[i] == 'f') || (m[i] == 'F'))
		{
			f=f+1;
			cout << f << "f" << endl;
		}
		else if((m[i] == 'g') || (m[i] == 'G'))
		{
			g=g+1;
			cout << g << "g" << endl;
		}
		else if((m[i] == 'h') || (m[i] == 'H'))
		{
			h=h+1;
			cout << h << "h" << endl;
		}
		else if((m[i] == 'i') || (m[i] == 'I'))
		{
			I=I+1;
			cout << I << "i" << endl;
		}
		else if((m[i] == 'j') || (m[i] == 'J'))
		{
			j=j+1;
			cout << j << "j" << endl;
		}
		else if((m[i] == 'k') || (m[i] == 'K'))
		{
			K=K+1;
			cout << K << "k" << endl;
		}
		else if((m[i] == 'l') || (m[i] == 'L'))
		{
			l=l+1;
			cout << l << "l" << endl;
		}
		else if((m[i] == 'm') || (m[i] == 'M'))
		{
			M=M+1;
			cout << M << "m" << endl;
		}
		else if((m[i] == 'n') || (m[i] == 'N'))
		{
			n=n+1;
			cout << n << "n" << endl;
		}
		else if((m[i] == 'o') || (m[i] == 'O'))
		{
			o=o+1;
			cout << o << "o" << endl;
		}
		else if((m[i] == 'p') || (m[i] == 'P'))
		{
			p=p+1;
			cout << p << "p" << endl;
		}
		else if((m[i] == 'q') || (m[i] == 'Q'))
		{
			q=q+1;
			cout << q << "q" << endl;
		}
		else if((m[i] == 'r') || (m[i] == 'R'))
		{
			r=r+1;
			cout << r << "r" << endl;
		}
		else if((m[i] == 's') || (m[i] == 'S'))
		{
			s=s+1;
			cout << s << "s" << endl;
		}
		else if((m[i] == 't') || (m[i] == 'T'))
		{
			t=t+1;
			cout << t << "t" << endl;
		}
		else if((m[i] == 'u') || (m[i] == 'U'))
		{
			u=u+1;
			cout << u << "u" << endl;
		}
		else if((m[i] == 'v') || (m[i] == 'V'))
		{
			v=v+1;
			cout << v << "v" << endl;
		}
		else if((m[i] == 'w') || (m[i] == 'W'))
		{
			w=w+1;
			cout << w << "w" << endl;
		}
		else if((m[i] == 'x') || (m[i] == 'X'))
		{
			x=x+1;
			cout << x << "x" << endl;
		}
		else if((m[i] == 'y') || (m[i] == 'y'))
		{
			y=y+1;
			cout << y << "y" << endl;
		}
		else if((m[i] == 'z') || (m[i] == 'Z'))
		{
			z=z+1;
			cout << z << "z" << endl;
		}
	}
	cout << a << "a" << endl;
}
