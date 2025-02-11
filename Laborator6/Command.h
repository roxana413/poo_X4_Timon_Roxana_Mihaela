
#pragma once

class command_manager;

class command //asemantor cu o clasa abstracta
{
    

protected:
    command();
    command_manager& manager;
    command(command_manager& manager) : manager(manager) {}
public:
    
    virtual ~command() = default;
    virtual void execute(const char** rest_of_arguments, unsigned int arguments_number) = 0;
    virtual const char* get_name() = 0;
    virtual void set_name() = 0;
   
};
