/*
TP N° 3
Gallici, Germán Emiliano
27/04/2015
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Ingrese un numero:\n";

	int a;

	cin >> a;

	cout << "\n";

	if (a % 2 == 0)
	{
		cout << "El numero ingresado es PAR\n";
	}
	else
	{
		cout << "El numero ingresado es IMPAR\n";
	}

	system("pause");
}