#include "Adunare.h"
#include<string>

Adunare::Adunare()
{
	
	this->name = new char[10];

	strcpy(this->name, "Adunare");
	strcat(this->name, "\n");
}

void Adunare::setName(char* namee)
{
	name = new char[strlen(namee) + 1];
	strcpy(name, namee);
}

char* Adunare::getName()
{
	return this->name;
}

void Adunare::Compute(int x, int y)
{  
	printf("Adunare ( %d, %d ) = %d ", x, y , x+y);
}
