#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

#include <iostream>

using namespace std;

struct Punto
{
    int x;
    int y;
};

istream & leerPunto(Punto &);

#endif // PUNTO_H_INCLUDED
