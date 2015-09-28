#include <iostream>
#include "rectangulo.h"
#include "punto.h"

using namespace std;

istream & leerRectangulo(Rectangulo & r)
{
    leerPunto(r.centro);
    return cin >> r.base >> r.altura;
}

double getAreaRectangular(const Rectangulo & r)
{
    return r.base * r.altura;
}

double getPerimetroRectangular(const Rectangulo & r)
{
    return 2 * r.base + 2 * r.altura;
}
