#include "MyLibrary.h"
#include <cstdio>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <fstream>
#include <cstdarg>
#include <ostream>

MyLibrary::MyLibrary(ostream& output_stream):output_stream(output_stream)
{
	
	this->books = nullptr;
	this->books_number = -1;
}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int min, int max) : output_stream(output_stream)
{

	int i, x;
	//v = new int[n];
	this->books_number = books_number;
	this->books = new int[books_number];
	srand(time(NULL));
	for (i = 0; i < books_number; i++)
	{
		x = rand() % (max - min + 1) + min;
		books[i] = x;
	}


}

MyLibrary::MyLibrary(ostream& output_stream, const char* books_values)
{
	char*  p;
	int l = strlen(books_values);
	this->books_number = 0;
	this->books= new int[l];
	p = strtok( books_values, ";");
	while (p)
	{
		int x = atoi(p);//de la char la intreg 
		books[books_number++] = x;
		p = strtok(nullptr, ",");
	}
}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int* books):output_stream(output_stream)
{
	this->books = books;
	this->books_number = books_number;
	

MyLibrary::MyLibrary(ostream& output_stream, int books_count, ...):output_stream (output_stream)
{   
    this->books_number = books_count;
	// formam lista de carti de tip int 
	int val = 0;
	
	va_list ap;
	int i;

	va_start(ap, books_count);
	for (i = 0; i < books_count; i++) {
		val += va_arg(ap, int);
	}
	va_end(ap);

	this->books = &val;
	
	
}

void MyLibrary::print_books()
{
    output_stream << "Found " << books_number << " books" << endl; //output_stream = cout 
    for (int i = 0; i < books_number; i++)
        output_stream << "Book: " << i << " " << books[i] << endl;
}

MyLibrary::~MyLibrary()
{
    delete[] books;
}

 void MyLibrary:: update_books_id_by_index(int book_index, int book_id)
{
    if (book_index < books_number)
        this->books[book_index] = book_id;
}
