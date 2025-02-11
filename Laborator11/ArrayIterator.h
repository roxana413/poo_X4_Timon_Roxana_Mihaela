#pragma once
#include <iostream>
using namespace std;

template<class T>
class ArrayIterator
{
private:

	
	int current_pos;

public:

	ArrayIterator();
	ArrayIterator(int);

	ArrayIterator<T>& operator++();

	ArrayIterator<T>& operator--();

	bool operator==(ArrayIterator<T>);

	bool operator!=(ArrayIterator<T>);

	T GetElement();
};

template<class T>
inline ArrayIterator<T>::ArrayIterator()
{
	current_pos = 0;
}

template<class T>
inline ArrayIterator<T>::ArrayIterator(int pointer)
{
	current_pos = pointer;
}

template<class T>
inline ArrayIterator<T>& ArrayIterator<T>::operator++()
{
	current_pos++;
	return *this;
}

template<class T>
inline ArrayIterator<T>& ArrayIterator<T>::operator--()
{
	current_pos--;
	return *this;
}

template<class T>
inline bool ArrayIterator<T>::operator==(ArrayIterator<T> i)
{

	return current_pos == i.current_pos;
}

template<class T>
inline bool ArrayIterator<T>::operator!=(ArrayIterator<T> i)
{
	return (current_pos != i.current_pos);
}

template<class T>
inline T ArrayIterator<T>::GetElement()
{
	return current_pos;
}
