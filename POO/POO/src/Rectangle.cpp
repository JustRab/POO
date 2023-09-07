#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::setWidth(float width)
{
	ancho = width;
}

void Rectangle::setHeight(float height)
{
	altura = height;
}

void Rectangle::setPerimetro()
{
	perimetro = ancho * 2 + altura * 2;
}

void Rectangle::setArea()
{
	area = ancho * altura;
}
