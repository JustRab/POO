#pragma once
#include<iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle();
	~Rectangle();

	//This method returns the width of the rectangle
	float getWidth()
	{
		return ancho;
	}

	//This method returns the height of the rectangle
	float getHeight()
	{
		return altura;
	}

	float getPerimetro()
	{
		return perimetro;
	}

	float getArea()
	{
		return area;
	}

	void setWidth(float width);

	void setHeight(float height);

	void setPerimetro();

	void setArea();


private:
	float ancho;
	float altura;
	float perimetro;
	float area;
};