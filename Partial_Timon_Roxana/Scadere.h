#pragma once
#include"Operatii.h"
class Scadere: public Operatii
{ 
	char* name;

public:
	  Scadere();
	  void setName(char* name);
	  char* getName();
	  void Compute(int x, int y);
};

