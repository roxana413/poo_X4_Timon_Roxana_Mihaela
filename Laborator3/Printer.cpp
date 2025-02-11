
#define _CRT_SECURE_NO_WARNINGS
#include "Printer.h"

#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<iostream>

void Printer::PrintAdd(int a, int b)
{
	int c = a + b;
	printf("%d\n", c);
}

void Printer::PrintAdd(int a, int b, int c)
{
	int d = a + b + c;
	printf("%d\n", d);

}

void Printer::PrintAdd(double a, double b)
{
	double c = a + b;
	printf("%lf \n", c);
}

void Printer::PrintAdd(double a, double b , double c )
{
	double d = a + b + c;
	printf("%lf\n", d);

}

void Printer::PrintMul(int a, int b )
{
	int c = a * b;
	printf("%d\n", c);
}

void Printer::PrintMul(int a, int b , int c)
{
	int d = a * b * c;
	printf("%d\n", d);
}

void Printer::PrintMul(double a, double b)
{
	double c = a * b;
	printf("%lf\n", c);
}

void Printer::PrintMul(double a, double b , double c)
{
	double d = a * b * c;
	printf("%lf\n", d);
}

void Printer::PrintAdd(int count, ...)
{
	int val = 0;
	va_list ap;
	int i;

	va_start(ap, count);
	for (i = 0; i < count; i++) {
		val += va_arg(ap, int);
	}
	va_end(ap);

	printf("%d\n",val);
}

		


void Printer::PrintAdd(const char* a, const char* b)
{
	if (a == nullptr || b == nullptr)
		printf("%p\n", nullptr);
	else
		if (a != nullptr && b != nullptr)
		{

			size_t bufferSize = strlen(a) + strlen(b) + 1;

			// allocate enough memory for the concatenated string:
			char* concatString = new char[bufferSize];

			// copy strings one and two over to the new buffer:
			strcpy(concatString, a);
			strcat(concatString, b);



			// delete buffer:
			
			printf("%s\n", concatString);
			delete[] concatString;

		}
	
}
