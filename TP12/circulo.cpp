#include <iostream>
#include "circulo.h"
#include "punto.h"

#define PI (3.141592653589793)

using namespace std;

istream & leerCirculo(Circulo & c)
{
    leerPunto(c.centro);
    return cin >> c.radio;
}

double getAreaCircular(const Circulo & c)
{
    return PI * c.radio * c.radio;
}

double getPerimetroCircular(const Circulo & c)
{
    return PI * c.radio / 2;
}
