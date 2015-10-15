#include <iostream>
#include "Cola.h"
#include "Pila.h"

int main()
{
    cout << "..........." << endl
         << "PRUEBA COLA" << endl
         << "..........." << endl
         << endl;

    Cola cola;

    cola.frente = -1;
    cola.fondo = -1;
    cola.cantidad_elementos = 0;

    cout << "PONGO 3" << endl;

    encolar(cola, 10);
    cout << cola.fondo << ": " << cola.segmento.at(cola.fondo) << endl;

    encolar(cola, 20);
    cout << cola.fondo << ": " << cola.segmento.at(cola.fondo) << endl;

    encolar(cola, 30);
    cout << cola.fondo << ": " << cola.segmento.at(cola.fondo) << endl;

    if(estaLlena(cola))
    {
        cout << "COLA LLENA" << endl;
    }

    int desencolado;

    cout << "SACO 1" << endl;

    desencolar(cola,desencolado);
    cout << cola.frente << ": " << desencolado << endl;

    cout << "PONGO 1" << endl;

    encolar(cola, 40);
    cout << cola.fondo << ": " << cola.segmento.at(cola.fondo) << endl;

    cout << "SACO 3" << endl;

    desencolar(cola,desencolado);
    cout << cola.frente << ": " << desencolado << endl;

    desencolar(cola,desencolado);
    cout << cola.frente << ": " << desencolado << endl;

    desencolar(cola,desencolado);
    cout << cola.frente << ": " << desencolado << endl;

    if(estaVacia(cola))
    {
        cout << "COLA VACIA" << endl;
    }

    cout << endl
         << "..........." << endl
         << "PRUEBA PILA" << endl
         << "..........." << endl
         << endl;

    Pila pila;

    pila.indice = -1;

    cout << "PONGO 3" << endl;

    push(pila,10);
    cout << pila.indice << ": " << pila.segmento.at(pila.indice) << endl;

    push(pila,20);
    cout << pila.indice << ": " << pila.segmento.at(pila.indice) << endl;

    push(pila,30);
    cout << pila.indice << ": " << pila.segmento.at(pila.indice) << endl;

    if(estaLlena(pila))
    {
        cout << "ESTA LLENA" << endl;
    }

    int desapilado;

    cout << "SACO 1" << endl;

    pop(pila, desapilado);
    cout << pila.indice + 1 << ": " << desapilado << endl;

    cout << "PONGO 1" << endl;

    push(pila,40);
    cout << pila.indice << ": " << pila.segmento.at(pila.indice) << endl;

    cout << "SACO 3" << endl;

    pop(pila, desapilado);
    cout << pila.indice + 1 << ": " << desapilado << endl;

    pop(pila, desapilado);
    cout << pila.indice + 1 << ": " << desapilado << endl;

    pop(pila, desapilado);
    cout << pila.indice + 1 << ": " << desapilado << endl;

    if(estaVacia(pila))
    {
        cout << "ESTA VACIA" << endl;
    }
}
