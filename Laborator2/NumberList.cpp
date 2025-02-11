#include "NumberList.h"
#include<algorithm>
using namespace std;


void NumberList::Init() {

	this->count = 0;
}

bool NumberList::Add(float x) {
	if (count >= 10)
	{
		return false;
	}
	this->number[count++] = x;
	return true;

	//count++;
}


void NumberList::Sort()
{
	for (int i = 0; i < count - 1; i++)
		for (int j = i + 1; j < count; j++)
		{

			if (this->number[i] > this->number[j])
				swap(this->number[i], this->number[j]);


		}
		}
void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		printf("%f ", this->number[i]);
	    
}

 NumberList::NumberList() {
	this->count = 0;
	for (int i = 0; i < 10; i++)
	{
		this->number[i] = 0;
	}

}