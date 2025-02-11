#pragma once
#include "User.h"
#include "MyPMIterator.h"
#include <string.h>
class PasswordManager
{

	User useri[10];  //un vector de useri 
	int count; 

public :

	PasswordManager() : count(0) {};
	PasswordManager();

	void AddUser(const User & user)
	{ 
		int ok = 0;
		for (int i = 0; i < count; i++)
			if (useri[1] == user)
			{
				ok = 1;
				return;
			}
		if (ok == 0)
		useri[count++] = user;
	}


	MyPMIterator AnalyzerIteratorBegin()
	{
		return { 0, useri };
	}

	MyPMIterator AnalyzerIteratorEnd()
	{
		return { count, useri};
	}
	
	User& operator [] (const char * username  )
	{
		for (int i = 0; i < count; i++)
			if (strcmp(useri[i].getUsername(), username))
				return useri[i];
	   
	
	}

	int getCount 
   

};


bool  operator == (const User& user1, const User& user2)
{
	if (strcmp(user1.getUsername(), user2.getUsername()))
		return true;

	return false;
}
