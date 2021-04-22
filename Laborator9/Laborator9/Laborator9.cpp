// Laborator9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "PasswordManager.h"
#include "MyPMIterator.h"
using namespace std;

int main()
{
    //Stage 1
    PasswordManager manager;
    //un utilizator are 2 campuri: username si master password, in aceasta ordine folosite in functia de mai jos
    //adaugarea unui nou utilizator: se adauga doar daca utilizatorul nu exista deja
    //HINT: aveti grija la const-uri!, ati putea face verificarea daca 2 utilizatori au acelasi nume prin operatorul == daca il implementati
    manager.AddUser({ "bobby", "m4a1" }).AddUser({ "maxi", "maxiMan" }).AddUser({ "ssrc", "ghasw24912mj@#@" }).AddUser({ "bobby", "bobbo" });

    cout << "Weak passwords: ";
    for (auto it = manager.WeakPasswordIteratorBegin(); it != manager.WeakPasswordIteratorEnd(); ++it)//iterator care trece prin parolele utilizatorilor care au parole sub 8 caractere
        cout << *it << " "; //afiseaza acele parole care au sub 8 caractere
    cout << endl;

    cout << "User analyzer: " << endl;

   

    for (MyPMIterator it = manager.AnalyzerIteratorBegin(); it != manager.AnalyzerIteratorEnd(); ++it)
    {
        auto [index, username, passwordLength] = *it; //auto-structure binding 
        cout << "\tUser: " << username << " with id: " << index << " has the password length: " << passwordLength << endl;
    }

    auto& user_maxi = manager["maxi"];//getting the user with that username

    //rezolvati pana aici in vreo 30 de minute, ignorati momentan ce este mai jos
    //
    //Stage2 -- just homework, no reward from this point on
    //user_maxi.AddCategory("Passwords"); //adding a category to the user that can hold multiple values
    //auto& maxiPasswordsCategory = user_maxi.GetCategory("Passwords");
    //maxiPasswordsCategory.AddData("pass01");//adding data to the category
    //maxiPasswordsCategory.AddData("pass02");
    //user_maxi.AddCategory("ShoppingList");
    //auto& maxiShoppingListCategory = user_maxi.GetCategory("ShoppingList");
    //maxiShoppingListCategory.AddData("carrots");
    //maxiShoppingListCategory.AddData("apples");

    //for (auto& user : manager)
    //    cout << user.GetUsername() << " " << user.PrintDetails() << endl;///PrintDetails will print each category and its data or "no category found" if there were not found any categories

    return 1;
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
