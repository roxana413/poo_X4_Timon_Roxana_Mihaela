#pragma once
#include "Command.h"
class Time : public command
{ 
	const char* name;

public: 
	Time();
	void set_name();
	const char* get_name();
	void execute(const char** rest_of_arguments, unsigned int arguments_number);
	~Time();

};

