#include "Pila.h"

bool estaLlena(const Pila & pila)
{
    return pila.indice == ((int) pila.segmento.size()) - 1;
}

bool estaVacia(const Pila & pila)
{
    return pila.indice == -1;
}

void push(Pila & pila, int valor)
{
    pila.indice++;
    pila.segmento.at(pila.indice) = valor;
}

void pop(Pila & pila, int & valor)
{
    valor = pila.segmento.at(pila.indice);
    pila.indice--;
}
