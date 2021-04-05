#include "calculator.h"
#include <string.h>
#include <stdio.h>

Calculator::Calculator()
{
	count = 4; 
	size = 0;
}

Operatii Calculator::getOP(int index) const
{
	return this->op[index];
}

Operatii* Calculator::getO() const
{
	return this->op;
}


int Calculator::getSize() const 
{
	return size;
}

void Calculator::setSize(int x)
{
	size = size + x;
}

void Calculator::setCount(int x)
{
	this->count = count + x;
}

bool Calculator::operator[](  char * name)
{
	for ( int i=0;i<this->getSize();i++)
		if (strcmp (name, this->getOP(i).getName()))
			return true;
	return false;

}

int Calculator::operator()(int)
{
	return int(this->count);
}

void Calculator::Compute(int x, int y)
{
	for (int i = 0; i < getSize(); i++)
	{
		this->op[i].Compute(x, y);
		printf("\n");
	}
}

Calculator& Calculator::operator+=(Operatii op)
{
	// TODO: insert return statement here
}

Calculator operator+=( Calculator& c, Operatii op)
{  //daca se mai gaseste 
	if (c[op.getName()])
		return c;

	c.getO()[c.getSize() + 1] = op;
	c.setSize(1);


}

Calculator operator-=( Calculator& c, Operatii op)
{   
	c.setCount(-1);
	for (int i = 0; i < c.getSize(); i++)
		//if (strcmp(c.getOP(i).getName(), op.getName()))
			 

	c.setSize(-1);

}
