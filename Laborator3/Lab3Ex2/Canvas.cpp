#include "Canvas.h"
#include<iostream>
using namespace std;

Canvas::Canvas(int width, int height)
{ 
	this->width = width;
	this->height = height;
	this->matrix[height][width] = {' '};

}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
}

void Canvas::SetPoint(int x, int y, char ch)
{
	this->matrix[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
}

void Canvas::Print()
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << this->matrix[i][j] << " ";
		cout << "\n";
	}
}

void Canvas::Clear()
{
	this->height = 0;
	this->width = 0;


	for (int i = 0; i < 10; i++)

		for (int j = 0; j < 10; j++)
			this->matrix[i][j] = ' ';
	
}
