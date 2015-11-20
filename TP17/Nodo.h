#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo
{
    int valor;
    Nodo * puntero_al_siguiente = nullptr;
};

#endif // NODO_H_INCLUDED
