#include "Global.h"
#include"Student.h"
#include<string.h>


int compareAvgGrade(Student s1, Student s2) {
	float a1, a2;
	a1 = s1.setAvg();
	a2 = s2.setAvg();
	if (a1 < a2)
		return 1;
	else
		if (a1 == a2)
			return 0;
		else
			return -1;





}

int compareEnglishGrade(Student s1, Student s2)
{
	float a1, a2;
	a1 = s1.getEnglGrade();
	a2 = s2.getEnglGrade();
	if (a1 < a2)
		return 1;
	else
		if (a1 == a2)
			return 0;
		else
			return -1;



}

int compareMathGrade(Student s1, Student s2)
{
	float a1, a2;
	a1 = s1.getMathGrade();
	a2 = s2.getMathGrade();
	if (a1 < a2)
		return 1;
	else
		if (a1 == a2)
			return 0;
		else
			return -1;

}

int compareHistGrade(Student s1, Student s2)
{

	float a1, a2;
	a1 = s1.getHistGrade();
	a2 = s2.getHistGrade();
	if (a1 < a2)
		return 1;
	else
		if (a1 == a2)
			return 0;
		else
			return -1;



}

int compareName(Student s1, Student s2)
{
	if (strcmp(s1.name, s2.name))
		return -1;
	else
		if (strcmp(s1.name, s2.name) < 0)
			return 1;
		else
			return 0;

}

