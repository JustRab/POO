#include "CBancaria.h"

CuentaBancaria::CuentaBancaria(string _name, float _value, float _rate)
{
	propietario = _name;
	saldo = _value;
	interes = _rate;
}