#pragma once
#include "Operatii.h"
class Inmultire : public Operatii
{
	char* name;
public :
	Inmultire();
	char* getName();
	void setName(char* name);
	void Compute(int x, int y);


};

