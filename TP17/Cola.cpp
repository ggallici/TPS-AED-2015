#include "Cola.h"

bool estaVacia(const Cola & cola)
{
    return cola.puntero_ultimo == nullptr;
}

void encolar(Cola & cola, int valor)
{
    Nodo * nuevo = new Nodo;

    nuevo->valor = valor;

    if (cola.puntero_primero == nullptr)
    {
        cola.puntero_primero = nuevo;
    }
    if (cola.puntero_ultimo == nullptr)
    {
        nuevo->puntero_al_siguiente = nuevo;
    }
    else
    {
        nuevo->puntero_al_siguiente = cola.puntero_primero;
        cola.puntero_ultimo->puntero_al_siguiente = nuevo;
    }

    cola.puntero_ultimo = nuevo;
}

void desencolar(Cola & cola, int & valor)
{
    valor = cola.puntero_primero->valor;

    Nodo * p = cola.puntero_primero;

    cola.puntero_primero = cola.puntero_primero->puntero_al_siguiente;

    delete p;

    p = cola.puntero_ultimo->puntero_al_siguiente;

    cola.puntero_ultimo->puntero_al_siguiente = cola.puntero_primero;

    delete p;
}
