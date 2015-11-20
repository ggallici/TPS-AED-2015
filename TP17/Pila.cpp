#include "Pila.h"

bool estaVacia(const Pila & pila)
{
    return pila.indice == nullptr;
}

void push(Pila & pila, int valor)
{
    Nodo * p = new Nodo;

    p->valor = valor;

    p->puntero_al_siguiente = pila.indice;

    pila.indice = p;
}

void pop(Pila & pila, int & valor)
{
    valor = pila.indice->valor;

    Nodo * p = pila.indice;

    pila.indice = pila.indice->puntero_al_siguiente;

    delete p;
}
