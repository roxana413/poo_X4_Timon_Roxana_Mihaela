// Lab2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"Student.h"
#include"Global.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    Student s1 = Student();
    Student s2 = Student();
    Student s3 = Student();
    char* p1;
    char nume1[10] = "Cornel";
    p1 = nume1;
    char* p2;
    char nume2[10] = "Maria";
    p2 = nume2; 
    char* p3;
    char nume3[10] = "George";
    p3 = nume3;
    s1.setName(p1);
    s2.setName(p2);
    s3.setName(p3);
    s1.setMathGrade(7.6);
    s1.setEnglGrade(8.5);
    s1.setHistGrade(9);
    s2.setMathGrade(7.6);
    s2.setEnglGrade(8.5);
    s2.setHistGrade(9);
    s3.setMathGrade(10);
    s3.setEnglGrade(10);
    s3.setHistGrade(10);

    printf("Studentul s1 are nota : %f la matematica\n", s1.getMathGrade());
    printf("Studentul s2 are nota : %f la engleza\n", s1.getEnglGrade());
    printf("Studentul s3 are nota : %f la matematica\n", s1.getHistGrade());
    printf("Studentul s1 are media notelor egala cu : %f\n", s1.setAvg());
   


    printf("Coduri de interpretare: 1 -primul mai mic, 0 - egal, -1 -primul mai mare\n");
    printf("%d ", compareAvgGrade(s1, s2));
    printf("%d ", compareEnglishGrade(s2, s3));
    printf("%d ", compareHistGrade(s2, s3));
    printf("%d ", compareMathGrade(s2, s3));
    printf("%d", compareName(s2, s3));


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
