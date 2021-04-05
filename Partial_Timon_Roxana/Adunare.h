#pragma once
#include "Operatii.h"
class Adunare : public Operatii
{
	char* name;
public : 

	Adunare();
	void setName(char* name);
	char* getName();
	void Compute(int x, int y);



	
};

