/*
TP N° 2
Gallici, Germán Emiliano
23/04/2015
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "================\n";
	cout << "  Calculadora\n";
	cout << "================\n";
	cout << "\n";

	int opcion = 0;

	cout << "Ingrese opcion\n";
	cout << "1)Calculadora Normal\n";
	cout << "2)Calculadora Logica\n";
	cout << "3)Salir\n";

	cin >> opcion;

	cout << "\n";

	if (opcion == 1)
	{
		cout << "Ingrese un numero\n";

		double a;

		cin >> a;

		cout << "\n";

		cout << "Ingrese simbolo de la operacion\n";
		cout << "+ (Suma)\n";
		cout << "- (Resta)\n";
		cout << "* (Multiplicacion)\n";
		cout << "/ (Division)\n";

		char signo;

		cin >> signo;

		while (signo != '+' && signo != '-' && signo != '*' && signo != '/')
		{
			cout << "Ingrese un simbolo valido\n";
			cin >> signo;
		}

		cout << "\n";

		cout << "Ingrese otro numero\n";

		double b;

		cin >> b;

		double c = 0;

		if (signo == '+')
		{
			c = a + b;
		}
		if (signo == '-')
		{
			c = a - b;
		}
		if (signo == '*')
		{
			c = a * b;
		}
		if (signo == '/')
		{
			c = a / b;
		}

		cout << "\n";

		cout << "El resultado es: " << c << "\n";
	}


	if (opcion == 2)
	{
		bool p;
		bool q;

		cout << "Ingrese un valor para la preposicion P\n";
		cout << "0) Falso\n";
		cout << "1) Verdadero\n";

		cin >> p;

		cout << "\n";

		cout << "Ingrese la operacion\n";
		cout << "AND (Conjuncion)\n";
		cout << "OR (Disyuncion)\n";
		cout << "=> (Implicancia Simple)\n";

		string operacion;

		cin.get();

		getline(cin, operacion);

		while (operacion != "AND" && operacion != "OR" && operacion != "=>")
		{
			cout << "Ingrese una operacion valida\n";
			getline(cin, operacion);
		}

		cout << "\n";

		cout << "Ingrese otro valor para la preposicion Q\n";
		cout << "0) Falso\n";
		cout << "1) Verdadero\n";

		cin >> q;

		bool resultado;

		if (operacion == "AND")
		{
			resultado = p && q;
		}
		if (operacion == "OR")
		{
			resultado = p || q;
		}
		if (operacion == "=>")
		{
			resultado = !p || q;
		}

		cout << "\n";

		cout << "El resultado es: " << resultado << "\n";
	}


	if (opcion == 3)
	{
		exit(0);
	}

	system("pause");
}