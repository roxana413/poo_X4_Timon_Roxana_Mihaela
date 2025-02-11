#include"Global.h"
#include<string.h>

int CompareName(Phone p1, Phone p2)
{

	if (strcmp(p1.GetName(), p2.GetName()))//daca primul nume este lexicografic ordonat dupa cel de al doilea
		return 1;
	else
		if (strcmp(p1.GetName(), p2.GetName()) == 0)//daca sunt egale
			return 0;
		else
			return -1;//daca primul nume este inaintea celui de al doilea 


}

int CompareNrOfStars(Phone p1, Phone p2)
{

	if (p1.GetNrStars() < p2.GetNrStars())
		return -1;
	else
		if (p1.GetNrStars() == p2.GetNrStars())
			return  0;
		else
			return 1;



}
int CompareRating(Phone p1, Phone p2)
{

	if (p1.GetUserRating() < p2.GetUserRating())
		return -1;
	else
		if (p1.GetUserRating() == p2.GetUserRating())
			return  0;
		else
			return 1;



}
int CompareAvg(Phone p1, Phone p2)
{

	if (p1.GetAvg() < p2.GetAvg())
		return -1;
	else
		if (p1.GetAvg() == p2.GetAvg())
			return  0;
		else
			return 1;



}

int ComparePrice(Phone p1, Phone p2)
{

	if (p1.GetPrice() < p2.GetPrice())
		return -1;
	else
		if (p1.GetPrice() == p2.GetPrice())
			return  0;
		else
			return 1;



}