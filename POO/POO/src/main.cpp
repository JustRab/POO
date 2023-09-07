#include <iostream>
#include "Rectangle.h"
using namespace std;


int
main() {

	Rectangle rectangulo;

	rectangulo.setHeight(2);
	rectangulo.setWidth(3);

	rectangulo.setPerimetro();
	rectangulo.setArea();

	cout << "Perimetro: " << rectangulo.getPerimetro() << endl;
	cout << "Area: " << rectangulo.getArea() << endl;

	return 0;
}