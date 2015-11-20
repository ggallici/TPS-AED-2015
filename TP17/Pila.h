#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include "Nodo.h"

struct Pila
{
    Nodo * indice = nullptr;
};

bool estaLlena(const Pila &);

bool estaVacia(const Pila &);

void push(Pila &, int);

void pop(Pila &, int &);

#endif // PILA_H_INCLUDED
