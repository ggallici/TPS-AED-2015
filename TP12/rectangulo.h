#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

#include <iostream>
#include "punto.h"

using namespace std;

struct Rectangulo
{
    Punto centro;
    double base;
    double altura;
};

istream & leerRectangulo(Rectangulo &);

double getAreaRectangular(const Rectangulo &);

double getPerimetroRectangular(const Rectangulo &);

#endif // RECTANGULO_H_INCLUDED
