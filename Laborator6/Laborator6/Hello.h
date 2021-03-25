#pragma once
#include"Command.h"

class Hello : public command 
{
	const char* name;

public:
	Hello();
	void set_name();
	const char* get_name();
	void execute(const char** rest_of_arguments, unsigned int arguments_number);
	~Hello();
};

