// Laborator10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<exception>
#include <vector>
#include<algorithm>

int Max = 0;

using namespace std;

class InvalidIndexException : public exception
{
    const char* what() const noexcept override //returneaza un pointer la un sir de char 
    {
        return "Invalid index ";
    }
};


typedef  bool (*SVectFnP) (string &, string&);

void sortVect(SVectFnP function, std::vector<string>n)
{
    for (int i = 0; i < n.size() - 1; i++)
    {
        if (function(n[i], n[i + 1]) == false) // nu sunt sortate 
        {
            std::swap(n[i], n[i + 1]);
            
        }
       // i--;
    }
}

bool myfunction(string i, string j)
{
    int n = i.length();
    int m = j.length();
    if (n == m)
        return (i < j);

    return n < m;
}



typedef  int (*VectFnP) (int&);
void maxVect(VectFnP fnc,  std::vector<int>n)
{
    int max = 0;
    for (int i = 0; i < n.size(); i++)
        max = fnc(n[i]);
    std::cout << max<<'\n';
}

void printVector(const std::vector<int>& n)
{

    for (int j = 0; j < n.size(); j++)
    {
        cout << "vector [" << j << "] = " << n[j] << endl;
    }

}


void printSVector(const std::vector<string>& n)
{

    for (int j = 0; j < n.size(); j++)
    {
        cout << "Svector [" << j << "] = " << n[j] << endl;
    }

}



typedef void (*FnPointer)(int&);
typedef bool (*BoolFnP) (int&);



template <unsigned int MaxCapacity>
class MyIntVector
{
    int data[MaxCapacity];
    int size;

public :
    MyIntVector()
    {
        for (int i = 0; i < MaxCapacity; i++)
        {
            data[i] = (int)i;
        }
        size = 10;
    }

    int& operator [] (int index) noexcept (false)//operator de indexare 
    {
        if (index < MaxCapacity)
            return data[index];
        throw InvalidIndexException();
    }

    void Apply(FnPointer fn)
    {
        for (int i = 0; i < MaxCapacity; i++)
        {
            fn(data[i]);
        }
    }

    void Remove(BoolFnP fn)
    {
        for (int i = 0; i < size; i++)
        {
            if (fn(data[i]))
            {
                for (int j = i; j < size - 1; j++)
                {
                    data[j] = data[j + 1];

                }
                size--;
                i--;

              
            }
        }
    }

    void Print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << " ";
        }
    }

};

int main()
{
    vector<string> stvector;
    stvector.push_back("Ana");
    stvector.push_back("are");
    stvector.push_back("nota");
    stvector.push_back("10");
    stvector.push_back("la");
    stvector.push_back("POO");

    printSVector(stvector);


    sortVect([](string & s1,string & s2 )->bool {

        if (s1.length() < s2.length())
            return true;
        else
            if (s1.size() == s2.size())
            
                if (s1 > s2) //este inaintea lui s2 lexicografic
                {
                    return true;
                }
                else
                    return false;

            
           
          

        }, stvector);

    sort(stvector.begin(), stvector.end(), myfunction);

    printSVector(stvector);







    vector<int>  vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(5);

    /*std::sort(std::begin(vector),
        std::end(vector),
        [](int a, int b) {return a > b; });

    for (auto item : vector)
        std::cout << item << " ";
    */


    printVector(vector);
    maxVect([](int& el)->int {

        if (el > Max)
            Max = el;

        return Max;

        }, vector);



    MyIntVector <10> v;
    v[3] = 2;

    v.Apply([](int& el) {el *= el; }); //lamda function 
    v.Remove([](int& el)->bool {
        if (el % 2 == 0)
            return true;
        else
            return false;
        });
    v.Print();


    try
    {
        v[3] = 2;

    }
    catch(exception & e ){
        cout << "Found exception : " << e.what() << endl;

    }


    //1. Creati un vector din std unde sa stocati mai multe string-uri in el. Adaugati minim 3 string-uri, printanti inainte si dupa sortare.
    //Folositi o functie lambda pentru a sorta acel: string-urile sunt comparate mai intai pe baza lungimii apoi in ordine lexicografica

    //2. Create un vector din std de numere intregi, cu minim 5 numere diferite. Creati o functie lambda care returneaza numarul maxim din acel vector.  Printati vectorul si apoi rezultatul.

    //3. Clasa MyIntVector ca membri:
    //  constructor unde primeste capacitatea maxima de cate elemente poate stoca
    //  o functie Add care adauga noi elemente (de tipul int), si arunca exceptie (facuta de voi) daca nu mai are spatiu sa stocheze elementele
    //  o functie Apply care itereaza prin toate elementele vectorului, si modifica fiecare element element cu functia lambda primita ca argument
    //  o functie Remove care sterge toate elementele din vector care primesc raspuns pozitiv (true) de la functie lambda primita ca argument.
    //  operatorul de indexare ca sa putem returna un element de pe un anumit index -> aruncati o expcetie implementata de voi daca indexul nu este corespunzator. Prindeti exceptia in main!

    return 1;
}
