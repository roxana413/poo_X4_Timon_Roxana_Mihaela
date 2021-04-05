#pragma once
#include "Operatii.h"
class Calculator
{
	int count;
	int size;
	Operatii * op;
	
public : 
	
	Calculator();
	Operatii getOP( int index)const;
	Operatii* getO() const;
	int getSize()const;
	void setSize(int x );
	void setCount(int x);
	
	bool operator [] ( char * name);
	int operator () (int);
	void Compute(int x, int y);
	Calculator& operator += (Operatii op);


};

Calculator operator += (const Calculator& c, Operatii op);
Calculator operator -= (const Calculator& c, Operatii op);

