#include "Hello.h"
#include<iostream>

Hello::Hello()
{

}

void Hello::set_name()
{
    this->name ="hello";
}

const char* Hello::get_name()
{
    return this->name;
}
Hello::~Hello()
{
    delete this->name;
}
void Hello::execute(const char** rest_of_arguments, unsigned int arguments_number)
{
    std::cout << "Hello\n";

    for (int i = 1; i < arguments_number; i++)
        std::cout << rest_of_arguments[i] << " ";


}
