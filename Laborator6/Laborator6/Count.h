#pragma once
class Count: public command

{
	const char* name;

public:
	Count();
	void set_name();
	const char* get_name();
	void execute(const char** rest_of_arguments, unsigned int arguments_number);
	~Count();


};

