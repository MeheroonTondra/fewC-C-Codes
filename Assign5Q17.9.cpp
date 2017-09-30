//============================================================================
// Name        : 9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T, class V>
class Map
{
public:
	Map()
{
		key = 0;
		value = 0;
		next = 0;
}
	Map(T k, V v)
	{

		key = k;
		value = v;
		next = 0;
	}
	T getkey()
	{
		return key;
	}
	V getValue()
	{
		return value;
	}
	T getNext()
	{
		return next;
	}
	void setKey(T k)
	{
		key = k;
	}
	void setValue(V v)
	{
		value = v;
	}
	void setNext(T n)
	{
		next = n;
	}
	void add(Map m)
	{
		setNext(m.getkey());
	}
	void set(T k)
	{
		bool found = false;
		while(!found)
		{
			if(key == k)
			{
				setKey(k);
				found = true;
			}
			else
			{
				key.getNext();
			}
		}
	}
	void del(T k, Map m)
	{
		bool found = false;
		while(!found)
		{
			if(key == k)
			{
				found = true;
				key = m.getNext();
			}
			else
			{
				key = m.getNext();
			}
		}
	}
	bool check(T k)
	{
		bool found = false;
		while(!found)
		{
			if(key == k)
			{
				found = true;
			}
			else
			{
				key.getNext();
			}
		}
		return found;
	}

	V retrieve(T k, Map m)
	{
		bool found = false;
				while(!found)
				{
					if(key == k)
					{
						found = true;
						return m.getValue();
					}
					else
					{
						m.getNext();
					}
				}
	}
private:
	T key;
	V value;
	T next;
};
