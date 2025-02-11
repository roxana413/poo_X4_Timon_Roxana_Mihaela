#pragma once
#include"Prieten.h"
#include"Contact.h"
class Agenda
{
private:
	Contact** contacte;

public:
	Contact* cauta(char* nume);
	Prieten** arataPrieteni();
	void stergeContact(char* nume);
	void adaugaContact(char* nume);

};

