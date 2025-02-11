
#pragma once
#include <exception>
	using namespace std;
	class exceptie1 : public exception
	{
		virtual const char* what() const throw()
		{
			return "Indexul este in afara domeniului!";
		}
	};


