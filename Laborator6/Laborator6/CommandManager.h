#pragma once
#include <cstring>
#include "Command.h"

class command_manager
{
    command* commands[10]; //VECTOR DE COMENZI (CHAR-URI)
    int count;
public:
    
    command_manager();  //CONSTRUCTOR

    bool add_command(command* c);
    //cauta in lista de comenzi, comanda introdusa 
    bool execute_command(const char** arguments, unsigned int arguments_number);
    
    ~command_manager();
};
