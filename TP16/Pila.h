#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include <array>

using namespace std;

struct Pila
{
    array<int, 3> segmento;
    int indice;
};

bool estaLlena(const Pila &);

bool estaVacia(const Pila &);

void push(Pila &, int);

void pop(Pila &, int &);

#endif // PILA_H_INCLUDED
