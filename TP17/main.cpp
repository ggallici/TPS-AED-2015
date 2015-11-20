#include <iostream>
#include "Pila.h"
#include "Cola.h"

using namespace std;

int main()
{
    cout << "***************" << endl;
    cout << "MANEJO DE PILAS" << endl;
    cout << "***************" << endl;

    Pila pila;

    push(pila, 111);
    push(pila, 222);
    push(pila, 333);
    push(pila, 77);

    for(Nodo * p = pila.indice; p != nullptr; p =(*p).puntero_al_siguiente)
    {
        cout << p << ": [" << p->valor << "] ->"<< p->puntero_al_siguiente << endl;
    }

    cout << endl;

    int a;

    pop(pila, a);
    cout << "saco el ultimo: " << a << endl;

    pop(pila, a);
    cout << "saco el anteultimo: " << a << endl;

    cout << endl;

    for(Nodo * p = pila.indice; p != nullptr; p =(*p).puntero_al_siguiente)
    {
        cout << p << ": [" << p->valor << "] ->"<< p->puntero_al_siguiente << endl;
    }

    cout << endl;

    pop(pila, a);
    cout << "saco el ultimo: " << a << endl;

    pop(pila, a);
    cout << "saco el anteultimo: " << a << endl;

    cout << endl;

    cout << "ESTA VACIA LA PILA???: ";

    if(estaVacia(pila))
    {
        cout << "SI" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    cout << endl << endl;

    cout << "***************" << endl;
    cout << "MANEJO DE COLAS" << endl;
    cout << "***************" << endl;

    Cola cola;

    encolar(cola,100);
    encolar(cola,200);
    encolar(cola,300);
    encolar(cola,400);

    cout << "fond(400): " << cola.puntero_ultimo->valor << endl;
    cout << "sig (100): " << cola.puntero_ultimo->puntero_al_siguiente->valor << endl;
    cout << "sig (200): " << cola.puntero_ultimo->puntero_al_siguiente->puntero_al_siguiente->valor << endl;
    cout << "sig (300): " << cola.puntero_ultimo->puntero_al_siguiente->puntero_al_siguiente->puntero_al_siguiente->valor << endl;
    cout << "sig (400): " << cola.puntero_ultimo->puntero_al_siguiente->puntero_al_siguiente->puntero_al_siguiente->puntero_al_siguiente->valor << endl;
    cout << endl;
    cout << "fren(100): " << cola.puntero_primero->valor << endl;
    cout << "sig (200): " << cola.puntero_primero->puntero_al_siguiente->valor << endl;
    cout << "sig (300): " << cola.puntero_primero->puntero_al_siguiente->puntero_al_siguiente->valor << endl;
    cout << "sig (300): " << cola.puntero_primero->puntero_al_siguiente->puntero_al_siguiente->puntero_al_siguiente->valor << endl;
    cout << "sig (400): " << cola.puntero_primero->puntero_al_siguiente->puntero_al_siguiente->puntero_al_siguiente->puntero_al_siguiente->valor << endl;
    cout << endl;

    int valor;

    desencolar(cola, valor);
    cout << "saco el primero: " << valor << endl;

    desencolar(cola, valor);
    cout << "saco el segundo: " << valor << endl;

    cout << endl;

    cout << "fond(400): " << cola.puntero_ultimo->valor << endl;
    cout << "sig (300): " << cola.puntero_ultimo->puntero_al_siguiente->valor << endl;

    cout << endl;

    cout << "fren(300): " << cola.puntero_primero->valor << endl;
    cout << "sig (400): " << cola.puntero_primero->puntero_al_siguiente->valor << endl;

    cout << endl;

    cout << "ESTA VACIA LA COLA???: ";

    if(estaVacia(cola))
    {
        cout << "SI" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
