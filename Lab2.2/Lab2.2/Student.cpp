#include "Student.h"

//Student::Student()
//{
//    this->englGrade = 0;
//    this->mathGrade = 0;
//    this->histGrade = 0;
//    this->name = nullptr;
//}

void Student::setName (char *name)
{
    this->name = name;
}
char*  Student::getName()
{
    return this->name;
}

void Student::setMathGrade(float grade)
{
    if (grade >= 1.f && grade <= 10.f)
        this->mathGrade = grade;
    else
        this->mathGrade = 0;
}

void Student::setEnglGrade(float grade)
{
    if (grade >= 1.f && grade <= 10.f)
        this->englGrade = grade;
    else
        this->englGrade = 0;
}

void Student::setHistGrade(float grade)
{
    if (grade >= 1.f && grade <= 10.f)
        this->histGrade = grade;
    else
        this->histGrade = 0;
}

float Student::getMathGrade()
{
    return this->mathGrade;
}

float Student::getEnglGrade()
{
    return this->englGrade;
}

float Student::getHistGrade()
{
    return this->histGrade;
}

float Student::setAvg()
{
    float avg = (float)(mathGrade + histGrade + englGrade) / 3;

    return avg;
}
