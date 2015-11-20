#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include "Nodo.h"

struct Cola
{
    Nodo * puntero_ultimo = nullptr;
    Nodo * puntero_primero = nullptr;
};

bool estaLlena(const Cola &);

bool estaVacia(const Cola &);

void encolar(Cola &, int);

void desencolar(Cola &, int &);

#endif // COLA_H_INCLUDED
