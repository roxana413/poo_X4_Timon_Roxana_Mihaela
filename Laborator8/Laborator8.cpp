// Laborator8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//cititi din fisierul input.txt liniile de mai jos, toate operatiile cu siruri de caractere sa foloseasca std::stirng de forma <materie> spatiu <nota> <optional spatiu nota....> <optional spatiu nota....>
//pentru a separa campurile folositi functiile din std::string!
//toate campurile sunt separate printr-un spatiu, trebuie sa luati materia si sa adauga notele elevului folosind un obiect de tipul Student in main cu functia AdaugaNota
//adaugati datele care lipsesc in clasa pentru a putea tine minte materiile si notele, si implementati cele 2 functii AdaugaNota si PrinteazaNote (vedeti ce face functia de printare, scrie deasupra ei)
//creati voi main-ul unde cititi din fisier, creati obiectul
//creati fisierele cpp necesare

#include <iostream>
#include<fstream>
#include<conio.h>
#include<string>
#include<string.h>
#include<sstream>
#include"Student.h"

using namespace std;


void tokenize(string st, Student s)
{
   
    stringstream ss(st); // Used for breaking words
    string Word; // To store individual words
    string materie;
    int ok = 0;
    while (ss >> Word)
    {
        if (ok == 0)
        {
            s.AdaugaNota(Word, 0);
             materie = Word;
             ok = 1;
        }

        stringstream geek(Word);
        int x = 0;
        geek >> x;

        s.AdaugaNota(materie, x);
            
        
    }
    ok = 0;

   
}

int main()
{   
    string myText;
   
    ifstream f("input.txt");
    Student s;
    while (getline(f, myText))
    {
        //cout << myText<<'\n';
       //tokenize(myText, s);
        string st = myText;
        stringstream ss(st); // Used for breaking words
        string Word; // To store individual words
        string materie;
        int ok = 0;
        while (ss >> Word)
        {
            if (ok == 0)
            {
                s.AdaugaNota(Word, 0);
                materie = Word;
                ok = 1;
            }

            stringstream geek(Word);
            int x = 0;
            geek >> x;

            s.AdaugaNota(materie, x);


        }
        ok = 0;
        
    }

    s.PrinteazaNote();

    f.close();
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
