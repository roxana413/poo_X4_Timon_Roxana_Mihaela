#include "File.h"
#include<fstream>
using namespace std;

File::File()
{
}

void File::set_name()
{
	this->name = "file";
}

const char* File::get_name()
{
	return this->name;
}

void File::execute(const char** rest_of_arguments, unsigned int arguments_number)
{
	std::ofstream MyFile(rest_of_arguments[1]);

	// Write to the file
	MyFile << "Files can be tricky, but it is fun enough!";

	// Close the file
	MyFile.close();
}

File::~File()
{
	delete this->name;
}
