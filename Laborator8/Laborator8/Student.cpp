#include "Student.h"
#include<iostream>
#include<conio.h>

Student::Student()
{
	
}

void Student::AdaugaNota(string materie, int nota)
{
    int ok = 0;
    map<string, vector<int> >::const_iterator ptr;
    for (ptr = note.begin(); ptr != note.end(); ptr++)
    {
        if (ptr->first == materie && nota != 0)
        {
            note[ptr->first].push_back(nota);
            ok = 1;
            
        }
           
    }
    if(nota != 0 && ok == 0 )
    note[materie].push_back(nota);

   

}

void Student::PrinteazaNote()
{

    for (map<string, vector<int> >::const_iterator ptr = note.begin();
        ptr != note.end(); ptr++) {
        cout << ptr->first << ": ";
        for (vector<int >::const_iterator eptr = ptr->second.begin();
            eptr != ptr->second.end(); eptr++)
            cout << *eptr << " ";
        cout << endl;
        cout << endl;

    }

}
