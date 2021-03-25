#include "Time.h"
#include <ctime>
#include<iostream>

Time::Time()
{

}

void Time::set_name()
{
	this->name = "time";
}

const char* Time::get_name()
{
	return this->name;
}
Time::~Time()
{
    delete this->name;
}
void Time:: execute(const char** rest_of_arguments, unsigned int arguments_number)
{
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout << (now->tm_year + 1900) << '-'
        << (now->tm_mon + 1) << '-'
        << now->tm_mday
        << "\n";

}




