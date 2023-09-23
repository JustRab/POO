#include "Commons.h"
#include "CBancaria.h"

CuentaBancaria cuenta;



int main()
{
	do{
		cuenta.Menu(cuenta.op);
	} while (cuenta.op != '4');
   
    return 0;
}