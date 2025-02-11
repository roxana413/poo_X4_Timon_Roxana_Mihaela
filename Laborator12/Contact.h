#pragma once
#include<iostream>
#include<string.h>
class Contact
{
protected:
	char* nume;

public:
	virtual void setNume(char* nume) = 0;
	virtual char* getNume() = 0;



};

