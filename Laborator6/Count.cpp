#include "Count.h"
#include "Hello.h"
#include<iostream>

Count::Count()
{

}

void Count::set_name()
{
    this->name = "count";
}

const char* Count::get_name()
{
    return this->name;
}
Count::~Count()
{
    delete this->name;
}


void Count:: execute(const char** rest_of_arguments, unsigned int arguments_number)
{
    std::cout << "Counted : %d arguments" << arguments_number << std::endl;

}