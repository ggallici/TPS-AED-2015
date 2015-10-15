#include "Cola.h"

bool estaLlena(const Cola & cola)
{
    return cola.cantidad_elementos == cola.segmento.size();
}

bool estaVacia(const Cola & cola)
{
    return cola.cantidad_elementos == 0;
}

void encolar(Cola &cola, int valor)
{
    cola.fondo  = (cola.fondo + 1) % cola.segmento.size();
    cola.segmento.at(cola.fondo) = valor;
    cola.cantidad_elementos++;
}

void desencolar(Cola & cola, int & valor)
{
    cola.frente  = (cola.frente + 1) % cola.segmento.size();
    valor = cola.segmento.at(cola.frente);
    cola.cantidad_elementos--;
}
