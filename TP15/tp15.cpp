#include <iostream>
#include <stdlib.h>
#include <array>

using namespace std;

int busqueda_secuencial(array<int,10> * arreglo, int x)
{
	for (unsigned i = 0; i< arreglo->size(); i++)
	{
		if(x == arreglo->at(i))
		{
			return i + 1;
		}
	}
	return -1;
}

int busqueda_binaria (array<int,10> * arreglo, int x)
{
	int primero = 0;
	int medio;
	int ultimo = arreglo->size();
	
	while (primero <= ultimo)
	{
		medio =(primero + ultimo) / 2;
		
		if (x == arreglo->at(medio))
		{
			return medio + 1;	
		}
		else
		{
			if (arreglo->at(medio) > x)
			{
				ultimo = medio - 1;
			}
			else
			{
				primero = medio + 1; 
			}
		}
	}
	return -1;
}

int main()
{
	int x;
	int r;
	array <int,10> numeros = {{5,9,16,49,75,76,124,159,160,161}};
	
	cout << "Busqueda secuencial -> Ingrese el elemento a buscar:";
	cin >> x;
	r = busqueda_secuencial(&numeros, x);
	if(r == -1)
	{
		cout << "No se encuentra en el vector" << endl;
	}
	else
	{
		cout << "Se encuentra en la posicion:" << r << endl;
	}
	
	cout << endl;
	
	cout << "Busqueda binaria -> Ingrese el elemento a buscar:";
	cin >> x;
	r = busqueda_binaria(&numeros, x);
	if(r == -1)
	{
	cout << "No se encuentra en el vector" << endl;	
	} 
	else
	{
		cout << "Se encuentra en la posicion:" << r << endl;
	}
}

