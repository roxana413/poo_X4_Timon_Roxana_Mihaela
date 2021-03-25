#include "Remove.h"
#include<iostream>
#include<fstream>
using namespace std;

Remove::Remove()
{
}

void Remove::set_name()
{
	this->name = "remove";
}

const char* Remove::get_name()
{
	return nullptr;
}

void Remove::execute(const char** rest_of_arguments, unsigned int arguments_number)
{
	const char filename[] =  rest_of_arguments[1] ;

	/*	Deletes the file if exists */
	if (remove(filename) != 0)
		perror("File deletion failed");
	else
		cout << "File deleted successfully";

	
}

Remove::~Remove()
{
	delete this->name;
}
