/*
TP N° 5: "Perimetro del Rectangulo"
Gallici, Germán Emiliano
28/5/2015
*/

#include <iostream>

using namespace std;

int validarNumero(int);

int calcularPerimetro(int, int);

int main()
{
    int altura, base;

    cout << "Ingrese la Base del Rectangulo:" << endl;

    cin >> base;

    base = validarNumero(base);

    cout << "Ingrese la Altura del Rectangulo:" << endl;

    cin >> altura;

    altura = validarNumero(altura);

    cout << "Perimetro del Rectangulo: "  << calcularPerimetro(base,altura) << endl;
}

int validarNumero(int a)
{
     while(a <= 0)
    {
        cout<< "Ingrese un numero valido:" << endl;

        cin >> a;
    }

    return a;
}

int calcularPerimetro(int a, int b)
{
    return (a * 2) + (b * 2);
}


