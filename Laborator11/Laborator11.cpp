// Laborator11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Array.h"
using namespace std;

int main()
{

	exception e1, e2;
	Array<int> v(5);
	v += 1;
	v += 2;
	v += 3;
	Array<int> v2(5);
	v2 += 1;
	v2 += 2;
	v2 += 3;
	try
	{  
		cout << v[-1];
	}
	catch (exception& e1)
	{
		cout << "Exceptie: " << e1.what() << '\n';
	}
	v.Sort();
	/*if (v == v2)
		cout << "Sortarea functioneaza corect!";
	else
		cout << "Algoritmul de sortare nu functioneaza corect!";
		*/
	
	try {
		v += 2;
		v += 3;
		v += 1;
	}
	catch (exception& e1)
	{
		cout << "Exceptie: " << e1.what() << '\n';
	}

	v.Print();
	

	return 0;
}

