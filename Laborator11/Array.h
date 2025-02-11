#pragma once
#include"ArrayIterator.h"
#include"Exception1.h"
#include"Exceptie2.h"
#include <xkeycheck.h>
template<class T>
class Array
{

private :
	exceptie1 e1;
	exceptie2 e2;
	T** List; //lista cu pointeri la obiecte de tipul T*
	int Capacity;
	int Size;

public:  Array();
	  ~Array();
	  Array(int capacity);
	  Array(const Array<T>& otherArray); //constructor de copiere
	  void Sort(); //sorteaza folosind comparatia intre elemente de tipul T 

	  T& operator[] (int index); // arunca exceptie daca index este out of range
	  const Array<T>& operator+=(const T& newElem); // adauga un element de tipul T la sfarsitul listei si returneaza this
	  friend bool operator==(const Array<T>& v1,const Array<T>& v2);
	  


	  ArrayIterator<T> GetBeginIterator();
      ArrayIterator<T> GetEndIterator();

	  void Print();






};


template<class T>
inline Array<T> ::Array()
{
	Capacity = Size = 0;
}

template <class T>
inline Array<T> :: ~Array()
{

}


template<class T>
inline Array<T>::Array(int capacity)
{
	Capacity = capacity;
	Size = 0;
	List = new T * [capacity];
	for (int i = 0; i < Capacity; i++)
		List[i] = new T;
}

template<class T>
inline Array<T>::Array(const Array<T>& otherArray)
{
	this->Capacity = otherArray.Capacity;
	this->Size = otherArray.Size;
	List = new T * [Capacity];
	for (int i = 0; i < Size; i++)
	{
		List[i] = new T;
		*List[i] = *otherArray.List[i];
	}
}



template<class T>
inline T& Array<T>::operator[](int index)
{

	if (index < 0 || index >= Capacity)
		throw e1;
	return *List[index];


}
template<class T>
inline const Array<T>& Array<T>::operator+=(const T& newElem)
{

	if (Size >= Capacity - 1)
		throw e2;
	else
	{

		*List[Size] = newElem;
		Size++;
	}
	return*this;
}




template<class T>
inline void Array<T>::Sort()
{
	for (int i = 0; i < Size - 1; i++)
		for (int j = i + 1; j < Size; j++)
			if (*List[i] < *List[j])
			{
				T aux;
				aux = *List[i];
				*List[i] = *List[j];
				*List[j] = aux;
			}
}





template<class T>
inline ArrayIterator<T> Array<T>::GetBeginIterator()
{
	return ArrayIterator<T>(); //constructor
}

template<class T>
inline ArrayIterator<T> Array<T>::GetEndIterator()
{
	return ArrayIterator<T>(Size); //constructor 
}

template<class T>
inline void Array<T>::Print()
{
	ArrayIterator<T> i;
	for (i = GetBeginIterator(); i != GetEndIterator(); ++i)
	{
		cout << *(List[i.GetElement()]) << ' ';
	}
	cout << '\n';

}

template<class T>
inline bool operator==(const Array<T>& v1, const Array<T>& v2)
{

	for (int i = 0; i < v1.Size; i++)
		for (int j = 0; i < v2.Size; j++)
			if (*v1.List[i] != *v2.List[j])
				return false;
	return true;
}




