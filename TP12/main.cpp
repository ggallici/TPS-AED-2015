#include "circulo.h"
#include "rectangulo.h"
#include <array>

using namespace std;

int main()
{
    /*PARTE 1*/
    cout << "PARTE 1" << endl
            << "Ingrese circulos (coordenada x, coordenada y, radio) para finalizar: Ctrl + Z" << endl;

    Circulo c;
    double area = 0, area_mayor = 0;
    unsigned posicion = 1, posicion_mayor = 0;

    while(leerCirculo(c))
    {
        area = getAreaCircular(c);

        if(area >= area_mayor)
        {
            area_mayor = area;
            posicion_mayor = posicion;
        }
        posicion++;
    }

    cout << "El mayor fue el numero: " << posicion_mayor << endl
            << "Area del mayor: " << area_mayor << endl;
    cin.clear();



    /*PARTE 2*/
    cout << "PARTE 2" << endl
            << "Ingrese circulos (coordenada x, coordenada y, radio) para finalizar: Ctrl + Z" << endl;

    array <Circulo, 100> circulos;
    double perimetro_total = 0;
    int i = 0;

    while (leerCirculo(c))
    {
        circulos.at(i) = c;
        perimetro_total += getPerimetroCircular(circulos.at(i));
        i++;
    }

    cin.clear();

    perimetro_total = (perimetro_total/i);

    cout << "Los circulos con circunferencia mayor a la media fueron los numeros: ";

    for(int j = 0; j < i; j++)
    {
        if(getPerimetroCircular(circulos[j]) > perimetro_total)
        {
            cout << j + 1 << " ";
        }
    }

    cout << endl;



    /*PARTE 3*/
    cout << "PARTE 3" << endl;

    array <Rectangulo, 100> rectangulos;
    array <Circulo, 100> circulos_dos;
    Rectangulo r;
    int x = 0;

    cout << "Ingrese circulos (coordenada x, coordenada y, radio) para finalizar: Ctrl + Z" << endl;

    while(leerCirculo(c))
    {
        circulos_dos.at(x) = c;
        x++;
    }

    cin.clear();
    int y = 0;

    cout << "Ingrese rectangulos (coordenada x, coordenada y, base, altura) para finalizar: Ctrl + Z" << endl;

    while(leerRectangulo(r))
    {
        rectangulos.at(y) = r;
        y++;
    }

    for(int l = 0; l < y ; l++)
    {
        for(int k = 0; k < x; k++)
        {
            if(getAreaRectangular(rectangulos.at(l)) < getAreaCircular(circulos_dos.at(k)))
            {
                cout << "El rectangulo numero " << l + 1 << " entra en el circulo numero " << k + 1 << endl;
            }
        }
    }
}
