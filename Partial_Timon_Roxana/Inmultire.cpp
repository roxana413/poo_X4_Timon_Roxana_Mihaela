#include "Inmultire.h"
#include<string.h>
#include <stdio.h>

Inmultire::Inmultire()
{
	this->name = new char[10];

	strcpy(this->name, "Inmultire");
	strcat(this->name, "\n");
}

char* Inmultire::getName()
{
	return this->name;
}

void Inmultire::setName(char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	strcat(this->name, "\n");
}

void Inmultire::Compute(int x, int y)
{
	printf("Inmultire ( %d, % d ) = %d",x,y, x * y);
}
