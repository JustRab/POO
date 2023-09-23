#pragma once
#include "Commons.h"

class Student
{
public:
	Student() =  default;
	Student(string _name, int _age);
	~Student() = default;

	string nombre;
	int edad;


private:

};

