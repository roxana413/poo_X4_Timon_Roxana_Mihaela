#include "CommandManager.h"
#include <ctime>
#include<iostream>

command_manager::command_manager() : commands{}, count(0)
{
}

bool command_manager::add_command(command* c)
{
    if (count >= 10)
        return false;

    commands[count++] = c;
    return true;
}



bool command_manager::execute_command(const char** arguments, unsigned int arguments_number)
{
    for (int i = 0; i < count; i++)
        if (strcmp(commands[i]->get_name(), arguments[0]) == 0)
        {
            commands[i]->execute(arguments + 1, arguments_number - 1);
            break;
        }
    return true;
}

command_manager::~command_manager()
{
    for (int i = 0; i < count; i++)
        delete commands[i];
}




