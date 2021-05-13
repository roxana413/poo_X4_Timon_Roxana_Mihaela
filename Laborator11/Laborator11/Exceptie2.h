#pragma once
#include <exception>
using namespace std;
class exceptie2 : public exception
{
	virtual const char* what() const throw()
	{
		return "Numarul de elemente este prea mare";
	}
};
