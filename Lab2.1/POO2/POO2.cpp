// POO2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumberList.h"






using namespace std;

int main()
{   
    NumberList l = NumberList();
    l.Init();
    l.Add(2);
    l.Add(7.2);
    l.Add(3);
    l.Add(12.4);
    l.Add(5);
    l.Sort();
    l.Print();
    printf("\n");



     cout << "Hello World!\n";
}
