// ProblemaLab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"Global.h"
#include"Phone.h"
using namespace std;
int main()
{

	Phone p1 = Phone();
	Phone p2 = Phone();
	char s1[10] = "S10";
	char s2[10] = "Iphone11";
	char* n1;
	char* n2;
	n1 = s1;
	n2 = s2;
	p1.SetName(n1);
	p2.SetName(n2);
	p1.SetPrice(700.50);
	p2.SetPrice(1200.50);
	p1.SetNrStars(9.4);
	p2.SetNrStars(9.9);
	p1.SetUserRating(80.09);
	p2.SetUserRating(81.09);
	printf("The first phone  has the following characteristcs : name = %s,  price =  %f ,  nrOfStars = %f, user_rating= %f, avg = %f !\n",
		p1.GetName(), p1.GetPrice(), p1.GetNrStars(), p1.GetUserRating(), p1.GetAvg());
	printf("The second phone has the following characteristcs : name = %s,  price =  %f ,  nrOfStars = %f, user_rating= %f, avg = %f !\n",
		p2.GetName(), p2.GetPrice(), p2.GetNrStars(), p2.GetUserRating(), p2.GetAvg());

	printf("Comparare pret : %d ", ComparePrice(p1, p2));
	printf("Comparare nr de stele : %d ", CompareNrOfStars(p1, p2));
	printf("Comparare rating : %d ", CompareRating(p1, p2));
	printf("Comparare nume : %d ", CompareName(p1, p2));
	printf("Comparare avg : %d  ", CompareAvg(p1, p2));




	std::cout << "Hello World!\n";
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
