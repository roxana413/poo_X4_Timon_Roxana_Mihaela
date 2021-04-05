#include "Scadere.h"
#include<string.h>
#include <stdio.h>

Scadere::Scadere()
{
    this->name = new char[10];

    strcpy(this->name, "Scadere");
    strcat(this->name, "\n");

}

void Scadere::setName(char* name)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    strcat(this->name, "\n");
}

char* Scadere::getName()
{
    return nullptr;
}

void Scadere::Compute(int x, int y)
{
    printf("Scadere (%d, %d) = %d ", x, y , x - y);
}
