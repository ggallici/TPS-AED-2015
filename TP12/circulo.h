#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include <iostream>
#include "punto.h"

using namespace std;

struct Circulo
{
    Punto centro;
    double radio;
};

istream & leerCirculo(Circulo &);

double getAreaCircular(const Circulo &);

double getPerimetroCircular(const Circulo &);

#endif // CIRCULO_H_INCLUDED
