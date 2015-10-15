#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include <array>

using namespace std;

struct Cola
{
    array <int, 3> segmento;
    int frente, fondo;
    unsigned cantidad_elementos;
};

bool estaLlena(const Cola &);

bool estaVacia(const Cola &);

void encolar(Cola &, int);

void desencolar(Cola &, int &);

#endif // COLA_H_INCLUDED
