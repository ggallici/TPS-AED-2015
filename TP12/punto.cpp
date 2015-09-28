#include <iostream>
#include "punto.h"

using namespace std;

istream & leerPunto(Punto & p)
{
    return cin >> p.x >> p.y;
}
