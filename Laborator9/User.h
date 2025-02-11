#pragma once
class User
{
	const char* username; 
	const char* password;
	int passwordLength;

public : 

	User() : username(), password( ) {};
	User(const char* username, const char* password)
	{
		this->username = username;
		this->password = password;
		this->passwordLength = strlen(password);

	}

	const char* getUsername() const ; 

};

