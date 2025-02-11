#pragma once
#include"Contact.h"

class Prieten:public  Contact 
{
private:
	char* dataNastere;
	int nrTel;
	char* adresa;
	//char* nume;

public :
	Prieten(char* nume);
	void setNume(char* nume)
	{
		this->nume = nume;
	}
	char * getNume()
	{
		return this->nume;
	}

};

