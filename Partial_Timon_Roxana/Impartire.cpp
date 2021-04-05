#include "Impartire.h"
#include <string>

Impartire::Impartire()
{
    this->name = new char[10];

    strcpy(this->name, "Impartire");
    strcat(this->name, "\n");

}

void Impartire::setName(char* name)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);

}

char* Impartire::getName()
{
    return name;
}

void Impartire::Compute(int x, int y)
{
    printf("Impartire ( %d, %d ) = %d", x, y,  x / y);

}
