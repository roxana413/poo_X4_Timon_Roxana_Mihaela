#pragma once
#include"User.h"
class MyPMIterator
{
	int index;
	User* array; 



public : 
	MyPMIterator(int index, User* array) : index(index), array(array) {}

	bool operator != (const MyPMIterator& other)
	{
		return index != other.index;
	}

	MyPMIterator& operator ++ ()
	{
		index++;
		return *this;
	}


	User operator*()
	{
		return array[index];
	}



};

