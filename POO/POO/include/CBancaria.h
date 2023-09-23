#pragma once
#include "Commons.h"

class CuentaBancaria
{
public:
	CuentaBancaria() = default;
	CuentaBancaria(string _name, float _value, float _rate);
	~CuentaBancaria() = default;

	string propietario;
	int op;

	void ConsultaSaldo()
	{
		cout << "Su saldo es de " << saldo << " pesos"<<endl;
	}

	void Menu(int _op)
	{

		cout << "\n Bienvenido: " << endl;
		cout << "(1) Consultar saldo" << endl;
		cout << "(2) Transacción" << endl;
		cout << "(3) Calcular interes" << endl;
		cout << "(4) Salir" << endl;
		cout << "Por favor ingrese la operacion que desea efectuar: ";
		cin >> _op;

		switch (_op)
		{
		case 1:
			ConsultaSaldo();
			break;
		case 2:
			Transaccion();
			break;
		case 3:
			CalculoInteres();
			break;
		case 4:
			cout << "FIN DEL PROGRAMA" << endl;
			exit(0);
			break;
		default:
			cout << "ERROR: ENTRADA INVALIDA." << endl;
			break;
		}
	}

private:
	float saldo;
	int Top;
	float value;

	void Transaccion()
	{
		do {
			cout << "(1) Añadir fondos" << endl;
			cout << "(2) Retirar fondos" << endl;
			cout << "(3) Salir" << endl;
			cout << "Por favor ingrese la opcion que desea efectuar: ";
			cin >> Top;
			switch (Top)
			{
			case 1:
				cout << "¿Cuantos fondos desea añadir?" << endl;
				cin >> value;
				saldo = saldo + value;
				break;

			case 2:
				cout << "¿Cuantos fondos desea retirar?" << endl;
				cin >> value;
				if (saldo >= value)
				{
					saldo = saldo - value;
				}
				else
				{
					cout << "No cuentas con el saldo suficiente para hacer esta operacion"<<endl;
				}
				break;

			case 3:
				Menu(op);
				break;
			default:
				cout << "ERROR: ENTRADA INVALIDA." << endl;
				break;
			}
		} while (Top != 3);
	}

protected:
	float interes = 0.69;
	int numCuenta;

	void CalculoInteres()
	{
		double tiempo, interesTotal;

		cout << "Ingrese el período de tiempo en años a calcular: ";
		cin >> tiempo;

		interesTotal = saldo * interes * tiempo;

		cout << "Su interes en "<< tiempo <<"años es de: " << interesTotal << endl;

	}
};


