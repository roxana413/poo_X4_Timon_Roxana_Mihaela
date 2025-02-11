// Laborator3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Printer.h"
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
	Printer m;
	char p[10] = "Ana";
	char r[10] = "Maria";
	char* a = p;
	char* b = r;
	
	
	m.PrintAdd(3, 5);
	m.PrintAdd(2, 3, 4);
	m.PrintAdd(3.5, 4.5);
	m.PrintAdd(3.5, 4.5, 7.5);
	m.PrintMul(3, 5);
	m.PrintMul(3, 2, 2);
	m.PrintMul(1.5, 2.0);
    m.PrintMul(1.5, 2.0, 1.0);
	m.PrintAdd(4, 3, 4, 5, 6);
    m.PrintAdd(a, b);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
